/*

 */

#ifndef _FLAVOR_H_
#define _FLAVOR_H_


#include "flavori.h"
#include "port.h"
#include "bitstream.h"


// XML functions
void CreateXmlHeader(const char* pcFileName, const char* pcName, const char* pcSchema=NULL);
void EndXml(const char* pcName);
void WriteXmlElement(char* pcFmt, ...);
void IntoAClass(const char* pcName, unsigned int nAlign);
void OutOfClass(char* pcFmt, ...);


#endif /* ! _FLAVOR_H_ */
