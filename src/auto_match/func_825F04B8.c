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
typedef struct Cfg_825F04B8 { int pad[0x90 / 4]; int f90; } Cfg_825F04B8;
typedef struct Blk_825F04B8 { Cfg_825F04B8 *cfg; int pad[0x1d]; unsigned int flags[1]; } Blk_825F04B8;
typedef struct Arg_825F04B8 {
  Blk_825F04B8 *blk;
  int pad[3];
  int f10;
} Arg_825F04B8;
typedef struct Self_825F04B8 {
  int pad0;
  unsigned char *f4;
  int pad8[2];
  int f10;
} Self_825F04B8;

int fn_825F04B8(Self_825F04B8 *self, Arg_825F04B8 *a)
{
  if (a->f10 == 0) return 0;
  if ((a->blk->flags[self->f10] & 0x20) != 0) return 0;
  if (a->blk->cfg->f90 != 0 && self->f4[0xbdc] == 0) return 0;
  return 1;
}
