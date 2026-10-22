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
typedef struct Ring {
  __int64 *items;
  int capacity;
  int head;
  int tail;
  int count;
} Ring;

extern void fn_82CE96B0(Ring *r, int n);

void fn_82CE9810(Ring *r,__int64 *src)

{
  int n;
  __int64 *dst;

  if (r->count >= r->capacity) {
    if (r->capacity == 0) {
      fn_82CE96B0(r,8);
    } else {
      fn_82CE96B0(r,r->capacity * 2);
    }
  }
  if (r->tail == r->capacity) {
    r->tail = 0;
  }
  dst = r->items + r->tail * 16;
  for (n = 16; n != 0; n--) {
    *dst++ = *src++;
  }
  r->tail++;
  r->count++;
}
