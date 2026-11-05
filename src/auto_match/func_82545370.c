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
extern void fn_825453C0(int, int, float *, float *, int);
extern float lbl_821CA45C[];
extern float lbl_821CC160;

void fn_82545370(int param_1, int param_2, int param_3)
{
  float a[2];
  float b[2];

  a[0] = lbl_821CC160;
  a[1] = lbl_821CC160;
  b[0] = lbl_821CA45C[1];
  b[1] = lbl_821CA45C[1];
  fn_825453C0(param_1, param_2, a, b, param_3);
}
