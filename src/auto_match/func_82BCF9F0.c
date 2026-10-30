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


typedef struct Bits_82BCF9F0 {
  unsigned int count;
  unsigned int pad;
  unsigned int w[1];
} Bits_82BCF9F0;

int fn_82BCF9F0(Bits_82BCF9F0 *a, Bits_82BCF9F0 *dst, Bits_82BCF9F0 *mask)
{
  int changed = 0;
  unsigned int i;
  for (i = 0; i < a->count; i++) {
    unsigned int v = (a->w[i] & ~mask->w[i]) | dst->w[i];
    if (v != dst->w[i]) {
      dst->w[i] = v;
      changed = 1;
    }
  }
  return changed;
}
