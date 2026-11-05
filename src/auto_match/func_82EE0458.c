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
extern void *memcpy(void *, const void *, unsigned int);

typedef struct Buf_82EE0458 {
  unsigned short a;
  unsigned short b;
  unsigned int c;
  unsigned short len1;
  unsigned short pad;
  void *ptr1;
  unsigned int len2;
  void *ptr2;
} Buf_82EE0458;

int fn_82EE0458(int unused, Buf_82EE0458 *src, Buf_82EE0458 *dst)
{
  int r;
  if (src == 0 || dst == 0) {
    return 0x80070057;
  }
  r = 0;
  dst->a = src->a;
  dst->b = src->b;
  dst->c = src->c;
  if (dst->ptr1 == 0 || src->ptr1 == 0) {
    dst->ptr1 = 0;
  } else if (dst->len1 >= src->len1) {
    memcpy(dst->ptr1, src->ptr1, src->len1);
  } else {
    r = 0xc00d36b1;
  }
  dst->len1 = src->len1;
  if (dst->ptr2 == 0 || src->ptr2 == 0) {
    dst->ptr2 = 0;
  } else if (dst->len2 >= src->len2) {
    memcpy(dst->ptr2, src->ptr2, src->len2);
  } else {
    r = 0xc00d36b1;
  }
  dst->len2 = src->len2;
  return r;
}
