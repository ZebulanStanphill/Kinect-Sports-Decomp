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
typedef struct { unsigned int v[4]; } V4;
extern int fn_82F37DA8();
extern int fn_82F3C120();
extern int fn_82F3D590();
extern unsigned int lbl_820ED018[];
extern unsigned int lbl_82162D9C;
extern unsigned int lbl_82162DB0;
extern char lbl_8202F1FC[];

unsigned int *fn_82F3D628(unsigned int *param_1)
{
  int *p;

  fn_82F3D590();
  *param_1 = (unsigned int)&lbl_82162DB0;
  param_1[1] = (unsigned int)&lbl_82162D9C;
  fn_82F37DA8(param_1 + 0x16);
  param_1[0x12] = 1;
  *(unsigned char *)(param_1 + 0x13) = 1;
  *(unsigned char *)((int)param_1 + 0x4d) = 2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  fn_82F3C120(param_1, lbl_8202F1FC, &p);
  param_1[0x17] = (unsigned int)p;
  if (p != 0) {
    (*(void (*)(int *))(*(int *)(*p + 8)))(p);
  }
  param_1[0x15] = (unsigned int)(param_1 + 0x16);
  *(V4 *)(param_1 + 4) = *(V4 *)lbl_820ED018;
  param_1[0x58] = 0;
  return param_1;
}
