/* @mediagen
 *
 * dvbt.h
 * 
 * This file was automatically generated
 * from the source file:
 *     'c:\\Alessandro\\My Projects\\Rai\\ZTOCERV309\\ICTMedia\\Development\\TEAM_MS\\Foundation.Media.MPEG\\SRC\\MPEGLIB\\dvbt.fl'
 *
 * -- Do not edit by hand --
 *
 */

#ifndef var_dvbt_h_
#define var_dvbt_h_

// initial size of parsable arrays: 64

// bitstream error reporting function
void flerror(TCHAR* fmt, ...);

#include "c:\\Alessandro\\My Projects\\Rai\\ZTOCERV309\\ICTMedia\\Development\\TEAM_MS\\Foundation.Media.MPEG\\SRC\\MPEGLIB\\mpeg2ts.h"

class Service_Description_Table : public BaseSection {
public:
    unsigned int original_network_id;
    unsigned int reserved_future_use;
    unsigned int services_count;
    unsigned int services_bytes;
    unsigned int service_id[64];
    unsigned int EIT_schedule_flag[64];
    unsigned int EIT_present_following_flag[64];
    unsigned int running_status[64];
    unsigned int free_CA_mode[64];
    unsigned int descriptors_loop_length;
    unsigned int CRC_32;
    public: virtual int get(IBitstream &var_bs);
    public: virtual int put(IBitstream &var_bs);
    public: virtual int putxml(IBitstream &var_bs, short int bAttr);
};

#endif /* ! var_dvbt_h_ */
