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
extern unsigned *fn_8265C940(unsigned, int);
extern void fn_8265C990(unsigned *, int);
extern void fn_82904F08(int, int, unsigned *);

int fn_82907D40(int param_1, int param_2, int *param_3, unsigned param_4)
{
  unsigned *buf;
  unsigned i;
  unsigned *t;

  buf = fn_8265C940(param_4 * 4, 0x24810000);
  if (buf == 0) {
    return 0x8007000e;
  }
  fn_82904F08(param_1, param_2, buf);
  for (i = 0; i < param_4; i++) {
    t = *(unsigned **)(param_3[i] * 4 + *(int *)(*(int *)(param_1 + 8) + 0x14));
    *t = *t | buf[i];
  }
  fn_8265C990(buf, 0x24810000);
  return 0;
}
