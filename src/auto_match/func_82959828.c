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
typedef struct Leaf_82959828 {
  int f0;
  unsigned int flags;
} Leaf_82959828;
typedef struct Mid_82959828 {
  int f0;
  int idx;
} Mid_82959828;
typedef struct List_82959828 {
  int f0;
  unsigned int count;
  unsigned int *items;
} List_82959828;
typedef struct Obj_82959828 {
  char pad0[0x10];
  Leaf_82959828 **leafs;
  Mid_82959828 **mids;
  char pad18[0x104 - 0x18];
  List_82959828 *list;
  char pad108[0x160 - 0x108];
  int f160;
} Obj_82959828;
extern int fn_8294D308(Obj_82959828 *);
extern int fn_82959138(Obj_82959828 *, int, int, unsigned int *, int, int, int);

int fn_82959828(Obj_82959828 *o)
{
  List_82959828 *l = o->list;
  unsigned int i;
  int r;

  for (i = 0; i < o->list->count; i++) {
      if ((o->leafs[o->mids[o->list->items[i]]->idx]->flags & 0x200) != 0) {
        return 1;
      }
  }
  o->f160 = 0;
  r = fn_82959138(o, 0x100000, 0, l->items, 0x100000, 0, 0);
  if (r >= 0) {
    r = fn_8294D308(o);
  }
  return r;
}
