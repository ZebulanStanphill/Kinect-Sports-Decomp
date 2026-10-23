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
extern int fn_8277CB10();
extern int fn_8277CB10();

typedef struct { char pad[0x30]; uint idx; } Item;
typedef struct {
  char pad[0x8c];
  Item **items;
  uint count;
  int pad94;
  char sub[0x18];
  uint *arr;
} Obj;

void fn_8277E2E0(Obj *o)
{
  uint i;

  fn_8277CB10(o->sub, &o->items);
  for (i = 0; i < o->count; i++) {
      o->items[i]->idx = i;
      o->arr[i] = i;
  }
}
