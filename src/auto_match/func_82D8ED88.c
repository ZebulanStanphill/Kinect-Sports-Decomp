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


typedef struct E_82D8ED88 { char pad[0x20]; unsigned short idx; unsigned short link; char pad2[2]; unsigned char flags; } E_82D8ED88;
typedef struct Vec_82D8ED88 { E_82D8ED88 **data; int size; } Vec_82D8ED88;
typedef struct Obj_82D8ED88 { char pad[0x28]; Vec_82D8ED88 a; char pad1[4]; Vec_82D8ED88 b; char pad2[4]; E_82D8ED88 **links; } Obj_82D8ED88;

static void Remove(Vec_82D8ED88 *v, E_82D8ED88 *e)
{
  v->data[e->idx] = v->data[v->size - 1];
  v->data[e->idx]->idx = e->idx;
  v->size--;
}

void fn_82D8ED88(Obj_82D8ED88 *o, E_82D8ED88 *e)
{
  if ((e->flags & 0xc0) == 0) {
    Remove(&o->b, e);
  } else {
    Remove(&o->a, e);
  }
  if (e->link != 0xffff) {
    o->links[e->link] = 0;
    e->link = 0xffff;
  }
}
