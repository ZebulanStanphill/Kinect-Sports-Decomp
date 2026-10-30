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
extern int fn_824CD030();
typedef struct Rng_82358DB8 { unsigned int *b; unsigned int *e; } Rng_82358DB8;
uint fn_82358DB8(int param_1,undefined4 *param_2,undefined4 *param_3)
{
  uint n = 0;
  Rng_82358DB8 **p = *(Rng_82358DB8 ***)(param_1 + 0x20);
  Rng_82358DB8 **end = *(Rng_82358DB8 ***)(param_1 + 0x24);
  unsigned int out[2];
  out[0] = 0;
  out[1] = 0;
  for (; p < end && n < 2; p++) {
    unsigned int *q = (*p)->b;
    unsigned int *r = (*p)->e;
    for (; q < r; q++) {
      unsigned int v = *q;
      if (v != 0 && fn_824CD030(v) != 0) {
        out[n++] = v;
        if (n == 2) break;
      }
    }
  }
  *param_2 = out[0];
  *param_3 = out[1];
  return n;
}
