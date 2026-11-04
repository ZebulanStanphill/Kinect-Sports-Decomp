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
extern int fn_82E75200(int);
extern char lbl_8214C2A0[];

typedef struct { int *obj; unsigned int cnt; int first; int second; int pad[2]; } Loc_82E757A8;

int fn_82E757A8(int param_1, int *param_2)
{
  Loc_82E757A8 l;
  int hr;

  if (param_2 == 0) {
    return 0x80070057;
  }
  l.obj = 0;
  *(short *)(param_1 + 0x14) = (*(short (**)(int *))(*param_2 + 0x88))(param_2);
  if (*(int *)(param_1 + 0x60) == 0) {
    l.cnt = 0;
    hr = (*(int (**)(int *, char *, int *, int, unsigned int *))(*param_2 + 0x3c))(param_2, lbl_8214C2A0, &l.first, 0xc, &l.cnt);
    if (hr >= 0 && l.cnt == 0xc) {
      *(int *)(param_1 + 0x18) = l.first;
      *(int *)(param_1 + 0x1c) = l.second;
    }
    if (*(unsigned int *)(param_1 + 0x1c) <= 0 || *(unsigned int *)(param_1 + 0x18) <= 0) {
      hr = 0x8000FFFF;
    }
    else {
      hr = fn_82E75200(param_1);
      if (hr >= 0) goto L1;
    }
  }
  else {
L1:
    hr = (*(int (**)(int *, int **))(*param_2 + 0x90))(param_2, &l.obj);
    if (hr >= 0) {
      if (l.obj != 0) goto L2;
      hr = 0xC00D36BB;
    }
  }
  if (l.obj == 0) {
    return hr;
  }
L2:
  (*(void (**)(int *))(*l.obj + 8))(l.obj);
  return hr;
}
