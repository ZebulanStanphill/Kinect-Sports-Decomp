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
extern void *fn_82555A88();


typedef struct Fl_8242D3A8 { int pad[9]; unsigned a : 4; unsigned f : 1; unsigned b : 27; } Fl_8242D3A8;

void fn_8242D3A8(int param_1, int param_2, int param_3)
{
  unsigned int iVar1;
  unsigned int uVar2;
  Fl_8242D3A8 *p;

  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x174) + 0x9c) + 0x3e4);
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x8c0);
    if (uVar2 != 0) {
      p = (Fl_8242D3A8 *)fn_82555A88(uVar2 + 0x98);
      if (p != 0) {
        p->f = (param_3 == 0);
      }
    }
  }
}
