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
static const float lbl_82175388 = 2.3283064365386963e-10f;
void fn_82D0AE18(int *rng, float *out)
{
  unsigned u;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[0] = (float)u * lbl_82175388;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[1] = (float)u * lbl_82175388;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[2] = (float)u * lbl_82175388;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[3] = (float)u * lbl_82175388;
}
