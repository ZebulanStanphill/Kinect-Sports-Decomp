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
extern int fn_82861F18();
extern int fn_82861820();
extern int fn_82861F88();
extern int fn_82861FB0();

void fn_8285CEB8(int param_1, int *param_2)

{
  int t[4];

  if (fn_82861FB0() != 0) {
    fn_82861F18(param_1, param_2, param_2 + 1, param_2 + 2, param_2 + 3, param_2 + 4, param_2 + 5);
  }
  else {
    fn_82861F88(param_1, &t[0], &t[1], &t[2], &t[3]);
    fn_82861820(t, param_2);
  }
}
