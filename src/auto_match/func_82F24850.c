typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
typedef struct { int m[21]; } Cfg;
typedef struct { char pad[0x5f8]; Cfg *cfg; } Obj;
extern Cfg lbl_8325EDD0[];

void fn_82F24850(Obj *o)

{
  o->cfg = &lbl_8325EDD0[0];
  lbl_8325EDD0[0].m[0] = 2000;
  o->cfg->m[1] = 0x600;
  o->cfg->m[2] = 0x300;
  o->cfg->m[3] = 0x133;
  o->cfg->m[4] = 0x800;
  o->cfg->m[5] = 0x400;
  o->cfg->m[6] = 0x800;
  o->cfg->m[7] = 0x400;
  o->cfg->m[8] = 0x800;
  o->cfg->m[9] = 0x400;
  o->cfg->m[10] = 0x14;
  o->cfg->m[11] = 0x28;
  o->cfg->m[12] = 0x3c;
  o->cfg->m[13] = 1;
  o->cfg->m[14] = 1;
  o->cfg->m[15] = 3;
  o->cfg->m[16] = 0xc;
  o->cfg->m[17] = 1;
  o->cfg->m[18] = 1;
  o->cfg->m[19] = 0xc;
  o->cfg->m[20] = 0x18;
  o->cfg = &lbl_8325EDD0[1];
  lbl_8325EDD0[1].m[0] = 2000;
  o->cfg->m[1] = 0xc00;
  o->cfg->m[2] = 0x400;
  o->cfg->m[3] = 0xcc;
  o->cfg->m[4] = 0xc00;
  o->cfg->m[5] = 0x400;
  o->cfg->m[6] = 0xc00;
  o->cfg->m[7] = 0x400;
  o->cfg->m[8] = 0xc00;
  o->cfg->m[9] = 0x400;
  o->cfg->m[10] = 0x14;
  o->cfg->m[11] = 0x28;
  o->cfg->m[12] = 0x50;
  o->cfg->m[13] = 1;
  o->cfg->m[14] = 1;
  o->cfg->m[15] = 3;
  o->cfg->m[16] = 0xc;
  o->cfg->m[17] = 1;
  o->cfg->m[18] = 1;
  o->cfg->m[19] = 0xc;
  o->cfg->m[20] = 0x18;
  return;
}

