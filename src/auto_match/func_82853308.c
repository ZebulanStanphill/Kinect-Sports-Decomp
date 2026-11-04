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
extern int fn_8280AE70();
extern int fn_82810360();
extern int fn_82860C68();
typedef struct { int a[3]; float z; } B40; typedef struct { int a[2]; float v; int d; } B60;
void fn_82853308(unsigned *param_1, int *param_2, int param_3)
{ B40 b; B60 c; int p; int *q = param_2 + 1; unsigned t = *(unsigned *)(param_3 + 0x3c);
  if (t != 0) {
    p = q[0] * 0x14 + t;
    fn_82860C68(p);
    fn_82810360(q + 1, &b);
    b.z = 0.0f;
    fn_8280AE70(*param_1 + 0x40, &b, &c);
    *(float *)(p + 0x10) = c.v;
  } }
