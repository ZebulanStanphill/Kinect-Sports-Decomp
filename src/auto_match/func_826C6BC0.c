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


typedef struct Item_826C6BC0 { int pad[2]; int c; } Item_826C6BC0;
typedef struct Holder_826C6BC0 { int pad[2]; Item_826C6BC0 **items; unsigned int n; } Holder_826C6BC0;
typedef struct Elem_826C6BC0 { char pad[0x66]; unsigned char flags; } Elem_826C6BC0;
typedef struct Obj_826C6BC0 {
  char pad[0xa8]; Elem_826C6BC0 **arr; unsigned int narr; char pad2[0x1b4 - 0xb0]; Holder_826C6BC0 *h;
} Obj_826C6BC0;

void fn_826C6BC0(Obj_826C6BC0 *o, void *param_2)
{
  unsigned int i;
  if (o->h != 0) {
    for (i = 0; i < o->h->n; i++) {
      int c = o->h->items[i]->c;
      if (c != 0) {
        (*(code *)(*(int *)c + 0x10))((void *)c, param_2);
      }
    }
  }
  for (i = 0; i < o->narr; i++) {
    Elem_826C6BC0 *e = o->arr[i];
    if ((e->flags & 0x80) != 0) {
      (*(code *)(*(int *)e + 0xdc))(e, param_2);
    }
  }
}
