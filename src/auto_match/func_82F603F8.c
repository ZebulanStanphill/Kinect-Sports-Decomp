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


typedef struct Obj_82F603F8 {
  int pad0;
  unsigned char enabled;
  unsigned char pad5[3];
  unsigned int cap;
  unsigned int count;
  int pad10[3];
  void **items;
} Obj_82F603F8;

typedef struct Item_82F603F8 {
  void (**vt)(void *);
} Item_82F603F8;

int fn_82F603F8(Obj_82F603F8 *self, Item_82F603F8 *item)
{
  int hr;

  hr = 0;
  RtlEnterCriticalSection((char *)self + 0xd4);
  if (self->enabled != 0 && self->count < self->cap) {
    if (item != 0) {
      self->items[self->count] = item;
      self->count = self->count + 1;
      item->vt[1](item);
    } else {
      hr = 0x82240403;
    }
  } else {
    hr = 0x82240404;
  }
  RtlLeaveCriticalSection((char *)self + 0xd4);
  return hr;
}
