/* @mediagen
 *
 * dvbt.cpp
 * 
 * This file was automatically generated
 * from the source file:
 *     'c:\\Alessandro\\My Projects\\Rai\\ZTOCERV309\\ICTMedia\\Development\\TEAM_MS\\Foundation.Media.MPEG\\SRC\\MPEGLIB\\dvbt.fl'
 *
 * -- Do not edit by hand --
 *
 */

#include <TBitstream.h>
#include "dvbt.h"


int Service_Description_Table::get(IBitstream &var_bs) {
    int var_ret = 0;
    int var_dim0;
    var_ret += BaseSection::get(var_bs);
    original_network_id = var_bs.getbits(16);
    reserved_future_use = var_bs.getbits(8);
    services_count = 0;
    services_bytes = 0;
    while (0<(section_length-(12)-services_bytes)) {
        var_dim0 = services_count;
        service_id[var_dim0] = var_bs.getbits(16);
        reserved_future_use = var_bs.getbits(6);
        var_dim0 = services_count;
        EIT_schedule_flag[var_dim0] = var_bs.getbits(1);
        var_dim0 = services_count;
        EIT_present_following_flag[var_dim0] = var_bs.getbits(1);
        var_dim0 = services_count;
        running_status[var_dim0] = var_bs.getbits(3);
        var_dim0 = services_count;
        free_CA_mode[var_dim0] = var_bs.getbits(1);
        descriptors_loop_length = var_bs.getbits(12);
        var_bs.skipbits(descriptors_loop_length*8);
        services_count++;
        services_bytes+=(descriptors_loop_length+4);
    }
    CRC_32 = var_bs.getbits(32);
    return var_ret;
}

int Service_Description_Table::put(IBitstream &var_bs) {
    int var_ret = 0;
    int var_dim0;
    var_ret += BaseSection::put(var_bs);
    var_bs.putbits(original_network_id, 16);
    var_bs.putbits(reserved_future_use, 8);
    services_count = 0;
    services_bytes = 0;
    while (0<(section_length-(12)-services_bytes)) {
        var_dim0 = services_count;
        var_bs.putbits(service_id[var_dim0], 16);
        var_bs.putbits(reserved_future_use, 6);
        var_dim0 = services_count;
        var_bs.putbits(EIT_schedule_flag[var_dim0], 1);
        var_dim0 = services_count;
        var_bs.putbits(EIT_present_following_flag[var_dim0], 1);
        var_dim0 = services_count;
        var_bs.putbits(running_status[var_dim0], 3);
        var_dim0 = services_count;
        var_bs.putbits(free_CA_mode[var_dim0], 1);
        var_bs.putbits(descriptors_loop_length, 12);
        var_bs.skipbits(descriptors_loop_length*8);
        services_count++;
        services_bytes+=(descriptors_loop_length+4);
    }
    var_bs.putbits(CRC_32, 32);
    return var_ret;
}

int Service_Description_Table::putxml(IBitstream &var_bs, short int bAttr) {
    int var_ret = 0;
    int var_dim0;
    int var_parse = 0;
    var_ret += BaseSection::putxml(var_bs, bAttr);
    var_parse = 16;
    original_network_id = var_bs.getbits(var_parse);
    if (bAttr) {
        WriteXmlElement("<original_network_id type=\"flUInt\" bitLen=\"%d\">%u</original_network_id>", var_parse, original_network_id);
    }
    else {
        WriteXmlElement("<original_network_id bitLen=\"%d\">%u</original_network_id>", var_parse, original_network_id);
    }
    var_parse = 8;
    reserved_future_use = var_bs.getbits(var_parse);
    if (bAttr) {
        WriteXmlElement("<reserved_future_use type=\"flUInt\" bitLen=\"%d\">%u</reserved_future_use>", var_parse, reserved_future_use);
    }
    else {
        WriteXmlElement("<reserved_future_use bitLen=\"%d\">%u</reserved_future_use>", var_parse, reserved_future_use);
    }
    services_count = 0;
    services_bytes = 0;
    while (0<(section_length-(12)-services_bytes)) {
        var_dim0 = services_count;
        var_parse = 16;
        service_id[var_dim0] = var_bs.getbits(var_parse);
        if (bAttr) {
            WriteXmlElement("<service_id type=\"flUInt\" bitLen=\"%d\">%u</service_id>", var_parse, service_id[var_dim0]);
        }
        else {
            WriteXmlElement("<service_id bitLen=\"%d\">%u</service_id>", var_parse, service_id[var_dim0]);
        }
        var_parse = 6;
        reserved_future_use = var_bs.getbits(var_parse);
        if (bAttr) {
            WriteXmlElement("<reserved_future_use type=\"flUInt\" bitLen=\"%d\">%u</reserved_future_use>", var_parse, reserved_future_use);
        }
        else {
            WriteXmlElement("<reserved_future_use bitLen=\"%d\">%u</reserved_future_use>", var_parse, reserved_future_use);
        }
        var_dim0 = services_count;
        var_parse = 1;
        EIT_schedule_flag[var_dim0] = var_bs.getbits(var_parse);
        if (bAttr) {
            WriteXmlElement("<EIT_schedule_flag type=\"flUInt\" bitLen=\"%d\">%u</EIT_schedule_flag>", var_parse, EIT_schedule_flag[var_dim0]);
        }
        else {
            WriteXmlElement("<EIT_schedule_flag bitLen=\"%d\">%u</EIT_schedule_flag>", var_parse, EIT_schedule_flag[var_dim0]);
        }
        var_dim0 = services_count;
        var_parse = 1;
        EIT_present_following_flag[var_dim0] = var_bs.getbits(var_parse);
        if (bAttr) {
            WriteXmlElement("<EIT_present_following_flag type=\"flUInt\" bitLen=\"%d\">%u</EIT_present_following_flag>", var_parse, EIT_present_following_flag[var_dim0]);
        }
        else {
            WriteXmlElement("<EIT_present_following_flag bitLen=\"%d\">%u</EIT_present_following_flag>", var_parse, EIT_present_following_flag[var_dim0]);
        }
        var_dim0 = services_count;
        var_parse = 3;
        running_status[var_dim0] = var_bs.getbits(var_parse);
        if (bAttr) {
            WriteXmlElement("<running_status type=\"flUInt\" bitLen=\"%d\">%u</running_status>", var_parse, running_status[var_dim0]);
        }
        else {
            WriteXmlElement("<running_status bitLen=\"%d\">%u</running_status>", var_parse, running_status[var_dim0]);
        }
        var_dim0 = services_count;
        var_parse = 1;
        free_CA_mode[var_dim0] = var_bs.getbits(var_parse);
        if (bAttr) {
            WriteXmlElement("<free_CA_mode type=\"flUInt\" bitLen=\"%d\">%u</free_CA_mode>", var_parse, free_CA_mode[var_dim0]);
        }
        else {
            WriteXmlElement("<free_CA_mode bitLen=\"%d\">%u</free_CA_mode>", var_parse, free_CA_mode[var_dim0]);
        }
        var_parse = 12;
        descriptors_loop_length = var_bs.getbits(var_parse);
        if (bAttr) {
            WriteXmlElement("<descriptors_loop_length type=\"flUInt\" bitLen=\"%d\">%u</descriptors_loop_length>", var_parse, descriptors_loop_length);
        }
        else {
            WriteXmlElement("<descriptors_loop_length bitLen=\"%d\">%u</descriptors_loop_length>", var_parse, descriptors_loop_length);
        }
        var_bs.skipbits(descriptors_loop_length*8);
        services_count++;
        services_bytes+=(descriptors_loop_length+4);
    }
    var_parse = 32;
    CRC_32 = var_bs.getbits(var_parse);
    if (bAttr) {
        WriteXmlElement("<CRC_32 type=\"flUInt\" bitLen=\"%d\">%u</CRC_32>", var_parse, CRC_32);
    }
    else {
        WriteXmlElement("<CRC_32 bitLen=\"%d\">%u</CRC_32>", var_parse, CRC_32);
    }
    return var_ret;
}
