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
extern int fn_82A2B760();
extern unsigned int lbl_8315D3D0;

typedef struct { unsigned char a[16]; unsigned __int64 v[7]; } Loc_8306C278;

int fn_8306C278(int param_1, unsigned __int64 *param_2, unsigned __int64 *param_3, unsigned __int64 *param_4)
{
  int iVar2;
  Loc_8306C278 l;

  iVar2 = (*(int (**)(int, void *, void *, int, int))(lbl_8315D3D0 + 0x20))(param_1, l.a, l.v, 0x38, 0x22);
  if (iVar2 >= 0) {
    if (param_2 != 0) {
      *param_2 = l.v[0];
    }
    if (param_3 != 0) {
      *param_3 = l.v[1];
    }
    if (param_4 != 0) {
      *param_4 = l.v[2];
    }
    return 1;
  }
  fn_82A2B760();
  return 0;
}
