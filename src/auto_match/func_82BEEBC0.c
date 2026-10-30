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


void fn_82BEEBC0(float *o, float *a, float *b)
{
  float b2 = b[2];
  float a1 = a[1];
  float b1 = b[1];
  float a2 = a[2];
  float b0 = b[0];
  float a0 = a[0];
  float x = a1 * b2 - a2 * b1;
  float z = a0 * b1 - b0 * a1;
  float y = b0 * a2 - a0 * b2;
  o[0] = x;
  o[2] = z;
  o[1] = y;
}
