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
extern int fn_829E0980(void *, int, int, int, int);
extern void *fn_829E0C20(int, int);
extern int fn_829E1560(int, int, void *);
extern int fn_82A1DDC0(void *, int, int);
int fn_829E1628(int param_1, int param_2, unsigned short *param_3)
{
  unsigned int *puVar2;
  int hr;
  unsigned int uVar3;
  short *psVar4;
  puVar2 = (unsigned int *)fn_829E0C20(param_2, *param_3);
  if (puVar2 == 0) return 0x80004005;
  hr = fn_829E0980(puVar2, 0xc, 10, 3, param_2);
  if (hr < 0) return hr;
  *param_3 = (unsigned short)(puVar2[1] >> 0x11);
  fn_82A1DDC0(puVar2 + 2, param_1 + 0x37a0, 4);
  uVar3 = 0;
  psVar4 = (short *)((*puVar2 >> 0xe) + (int)puVar2);
  do {
    hr = fn_829E1560(param_1, param_2, psVar4);
    if (hr < 0) return hr;
    if (*psVar4 == 0) return 0x80004005;
    uVar3 = uVar3 + 1; psVar4 = psVar4 + 1; param_1 = param_1 + 0x590;
  } while (uVar3 < 10);
  return 0;
}
