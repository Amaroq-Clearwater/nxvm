/* This file is a part of NekoVMac project. */

#ifndef NVM_VAPI_H
#define NVM_VAPI_H

#include "../vglobal.h"
extern int forceNone;	// use general output or system_related vdisplay
int nvmprint(const char *, ...);
void nvmprintbyte(t_nubit8 n);
void nvmprintword(t_nubit16 n);

#endif