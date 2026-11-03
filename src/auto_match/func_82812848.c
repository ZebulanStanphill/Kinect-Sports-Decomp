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
extern int fn_828132A8();
extern int fn_828133A8();
extern int fn_828135A0();
extern unsigned char fn_82813AE0();
extern unsigned int lbl_8320A3FC[];

typedef struct { unsigned int *a; unsigned int *b; } It_82812848;

int fn_82812848(void)
{
  unsigned int iVar1;
  int r;
  unsigned int out;
  It_82812848 it;

  fn_828133A8(lbl_8320A3FC);
  it.a = lbl_8320A3FC;
  it.b = &lbl_8320A3FC[9];
  iVar1 = lbl_8320A3FC[9];
  while (1) {
    if (iVar1 == 0) {
      r = 0;
      break;
    }
    if (*(unsigned int *)(iVar1 + 0xd0) == 0) {
      if (fn_82813AE0(iVar1 + 8, &out) != 0 || fn_82813AE0(iVar1 + 0x48, &out) != 0) {
        fn_828132A8(out);
        r = 1;
        break;
      }
    }
    iVar1 = *(int *)(iVar1 + 200);
  }
  fn_828135A0(&it);
  return r;
}
