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
extern int fn_82E58808(unsigned, int, int *);
extern char lbl_8214BFF0[];
typedef struct { char pad[100]; int (*f64)(void *, void *, int); } Vt_82E2D840;
typedef struct { Vt_82E2D840 *vt; } Obj_82E2D840;
int fn_82E2D840(int param_1, int param_2, unsigned param_3, Obj_82E2D840 *param_4)
{
  int hr;
  int out[4];
  if (param_3 == 0 || param_4 == 0) {
    hr = 0x80004003;
  } else {
    out[0] = 0;
    hr = fn_82E58808(param_3, param_2, out);
    if (hr >= 0) {
      hr = param_4->vt->f64(param_4, lbl_8214BFF0, out[0]);
    }
  }
  return hr;
}
