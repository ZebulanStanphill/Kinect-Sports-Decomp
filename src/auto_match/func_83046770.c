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
extern int fn_82A1DDC0();


typedef struct { float *data; unsigned int mask; int pad; unsigned short stride; unsigned short count; } Buf_83046770;
typedef struct { float last[6]; int rdOff; int wrOff; int f20; } State_83046770;

int fn_83046770(Buf_83046770 *param_1, Buf_83046770 *param_2, int param_3, State_83046770 *param_4)

{
  unsigned int avail;
  unsigned int diff;
  unsigned int m;
  unsigned int cnt;
  unsigned int i;
  unsigned int v;
  unsigned int lastIdx;
  float *src;

  avail = param_1->count;
  diff = param_3 - param_4->wrOff;
  m = diff < avail ? diff : avail;
  lastIdx = m - 1;
  cnt = 0;
  for (v = param_1->mask; v != 0; v = (v - 1) & v) {
    cnt = cnt + 1;
  }
  i = 0;
  if (cnt != 0) {
    do {
      src = param_1->data + (param_1->stride * i + param_4->rdOff);
      fn_82A1DDC0(param_2->data + (param_2->stride * i + param_4->wrOff), src, m * 4);
      param_4->last[i] = src[lastIdx];
      i = i + 1;
    } while (i < cnt);
  }
  param_1->count = param_1->count - m;
  param_2->count = m + param_4->wrOff;
  param_4->f20 = 0x10000;
  if (m == avail) {
    param_4->rdOff = 0;
  }
  else {
    param_4->rdOff = m + param_4->rdOff;
  }
  if (m == diff) {
    return 0x2d;
  }
  param_4->wrOff = m + param_4->wrOff;
  return 0x2b;
}
