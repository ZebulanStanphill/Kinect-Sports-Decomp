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
extern unsigned int *fn_8265C940(unsigned int, unsigned int);
extern char lbl_8215F960[];
extern char lbl_8215F980[];
extern unsigned int *lbl_83248EC4;


unsigned int *fn_82ED4A28(unsigned int *param_1, unsigned int param_2)
{
  unsigned int *p;
  param_1[0xe] = param_2;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = (unsigned int)lbl_8215F980;
  param_1[0xb] = 0xffffffff;
  param_1[0xc] = 0xffffffff;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0xe;
  param_1[0x11] = 1;
  if (lbl_83248EC4 == 0) {
    p = fn_8265C940(4, 0x248c8000);
    if (p != 0) {
      *p = (unsigned int)lbl_8215F960;
      lbl_83248EC4 = p;
    } else {
      lbl_83248EC4 = 0;
    }
  }
  return param_1;
}
