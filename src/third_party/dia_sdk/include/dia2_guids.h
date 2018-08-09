//#define MAKE_GUID(ah,al,bh,bl,c,d,e0,e1,e2,e3,e4,e5,e6,e7) \
//    { ah, al, bh, bl, c, d, { e0, e1, e2, e3, e4, e5, e6, e7 } }
#define INITGUID
#include "guiddef.h"


DEFINE_GUID(IID_IDiaLoadCallback, 0xC32ADB82, 0x73F4, 0x421b, 0x95, 0xD5, 0xA4, 0x70, 0x6E, 0xDF, 0x5D, 0xBE);
DEFINE_GUID(IID_IDiaLoadCallback2, 0x4688a074, 0x5a4d, 0x4486, 0xae, 0xa8, 0x7b, 0x90, 0x71, 0x1d, 0x9f, 0x7c);
DEFINE_GUID(IID_IDiaReadExeAtOffsetCallback, 0x587A461C, 0xB80B, 0x4f54, 0x91, 0x94, 0x50, 0x32, 0x58, 0x9A, 0x63, 0x19);
DEFINE_GUID(IID_IDiaReadExeAtRVACallback, 0x8E3F80CA, 0x7517, 0x432a, 0xBA, 0x07, 0x28, 0x51, 0x34, 0xAA, 0xEA, 0x8E);
DEFINE_GUID(IID_IDiaDataSource, 0x79F1BB5F, 0xB66E, 0x48e5, 0xB6, 0xA9, 0x15, 0x45, 0xC3, 0x23, 0xCA, 0x3D);
DEFINE_GUID(IID_IDiaEnumSymbols, 0xCAB72C48, 0x443B, 0x48f5, 0x9B, 0x0B, 0x42, 0xF0, 0x82, 0x0A, 0xB2, 0x9A);
DEFINE_GUID(IID_IDiaEnumSourceFiles, 0x10F3DBD9, 0x664F, 0x4469, 0xB8, 0x08, 0x94, 0x71, 0xC7, 0xA5, 0x05, 0x38);
DEFINE_GUID(IID_IDiaEnumInputAssemblyFiles, 0x1C7FF653, 0x51F7, 0x457E, 0x84, 0x19, 0xB2, 0x0F, 0x57, 0xEF, 0x7E, 0x4D);
DEFINE_GUID(IID_IDiaEnumLineNumbers, 0xFE30E878, 0x54AC, 0x44f1, 0x81, 0xBA, 0x39, 0xDE, 0x94, 0x0F, 0x60, 0x52);
DEFINE_GUID(IID_IDiaEnumInjectedSources, 0xD5612573, 0x6925, 0x4468, 0x88, 0x83, 0x98, 0xCD, 0xEC, 0x8C, 0x38, 0x4A);
DEFINE_GUID(IID_IDiaEnumSegments, 0xE8368CA9, 0x01D1, 0x419d, 0xAC, 0x0C, 0xE3, 0x12, 0x35, 0xDB, 0xDA, 0x9F);
DEFINE_GUID(IID_IDiaEnumSectionContribs, 0x1994DEB2, 0x2C82, 0x4b1d, 0xA5, 0x7F, 0xAF, 0xF4, 0x24, 0xD5, 0x4A, 0x68);
DEFINE_GUID(IID_IDiaEnumDebugStreamData, 0x486943E8, 0xD187, 0x4a6b, 0xA3, 0xC4, 0x29, 0x12, 0x59, 0xFF, 0xF6, 0x0D);
DEFINE_GUID(IID_IDiaEnumDebugStreams, 0x08CBB41E, 0x47A6, 0x4f87, 0x92, 0xF1, 0x1C, 0x9C, 0x87, 0xCE, 0xD0, 0x44);
DEFINE_GUID(IID_IDiaAddressMap, 0xB62A2E7A, 0x067A, 0x4ea3, 0xB5, 0x98, 0x04, 0xC0, 0x97, 0x17, 0x50, 0x2C);
DEFINE_GUID(IID_IDiaSession, 0x2F609EE1, 0xD1C8, 0x4E24, 0x82, 0x88, 0x33, 0x26, 0xBA, 0xDC, 0xD2, 0x11);
DEFINE_GUID(IID_IDiaSourceFile, 0xA2EF5353, 0xF5A8, 0x4eb3, 0x90, 0xD2, 0xCB, 0x52, 0x6A, 0xCB, 0x3C, 0xDD);
DEFINE_GUID(IID_IDiaInputAssemblyFile, 0x3BFE56B0, 0x390C, 0x4863, 0x94, 0x30, 0x1F, 0x3D, 0x08, 0x3B, 0x76, 0x84);
DEFINE_GUID(IID_IDiaLineNumber, 0xB388EB14, 0xBE4D, 0x421d, 0xA8, 0xA1, 0x6C, 0xF7, 0xAB, 0x05, 0x70, 0x86);
DEFINE_GUID(IID_IDiaSectionContrib, 0x0CF4B60E, 0x35B1, 0x4c6c, 0xBD, 0xD8, 0x85, 0x4B, 0x9C, 0x8E, 0x38, 0x57);
DEFINE_GUID(IID_IDiaSegment, 0x0775B784, 0xC75B, 0x4449, 0x84, 0x8B, 0xB7, 0xBD, 0x31, 0x59, 0x54, 0x5B);
DEFINE_GUID(IID_IDiaInjectedSource, 0xAE605CDC, 0x8105, 0x4a23, 0xB7, 0x10, 0x32, 0x59, 0xF1, 0xE2, 0x61, 0x12);
DEFINE_GUID(IID_IDiaStackWalkFrame, 0x07C590C1, 0x438D, 0x4F47, 0xBD, 0xCD, 0x43, 0x97, 0xBC, 0x81, 0xAD, 0x75);
DEFINE_GUID(IID_IDiaFrameData, 0xA39184B7, 0x6A36, 0x42de, 0x8E, 0xEC, 0x7D, 0xF9, 0xF3, 0xF5, 0x9F, 0x33);
DEFINE_GUID(IID_IDiaImageData, 0xC8E40ED2, 0xA1D9, 0x4221, 0x86, 0x92, 0x3C, 0xE6, 0x61, 0x18, 0x4B, 0x44);
DEFINE_GUID(IID_IDiaTable, 0x4A59FB77, 0xABAC, 0x469b, 0xA3, 0x0B, 0x9E, 0xCC, 0x85, 0xBF, 0xEF, 0x14);
DEFINE_GUID(IID_IDiaEnumTables, 0xC65C2B0A, 0x1150, 0x4d7a, 0xAF, 0xCC, 0xE0, 0x5B, 0xF3, 0xDE, 0xE8, 0x1E);
DEFINE_GUID(IID_IDiaPropertyStorage, 0x9d416f9c, 0xe184, 0x45b2, 0xa4, 0xf0, 0xce, 0x51, 0x7f, 0x71, 0x9e, 0x9b);
DEFINE_GUID(IID_IDiaStackFrame, 0x5edbc96d, 0xcdd6, 0x4792, 0xaf, 0xbe, 0xcc, 0x89, 0x00, 0x7d, 0x96, 0x10);
DEFINE_GUID(IID_IDiaEnumStackFrames, 0xec9d461d, 0xce74, 0x4711, 0xa0, 0x20, 0x7d, 0x8f, 0x9a, 0x1d, 0xd2, 0x55);
DEFINE_GUID(IID_IDiaStackWalkHelper, 0x21F81B1B, 0xC5BB, 0x42A3, 0xBC, 0x4F, 0xCC, 0xBA, 0xA7, 0x5B, 0x9F, 0x19);
DEFINE_GUID(IID_IDiaStackWalker, 0x5485216b, 0xa54c, 0x469f, 0x96, 0x70, 0x52, 0xb2, 0x4d, 0x52, 0x29, 0xbb);
DEFINE_GUID(IID_IDiaStackWalkHelper2, 0x8222c490, 0x507b, 0x4bef, 0xb3, 0xbd, 0x41, 0xdc, 0xa7, 0xb5, 0x93, 0x4c);
DEFINE_GUID(IID_IDiaStackWalker2, 0x7c185885, 0xa015, 0x4cac, 0x94, 0x11, 0x0f, 0x4f, 0xb3, 0x9b, 0x1f, 0x3a);