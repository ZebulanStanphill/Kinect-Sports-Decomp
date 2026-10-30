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


typedef struct VT_82BA9590 { void (*f0)(void *, unsigned, unsigned); } VT_82BA9590;
typedef struct Obj_82BA9590 { VT_82BA9590 *vt; } Obj_82BA9590;
typedef struct List_82BA9590 { int a; unsigned count; Obj_82BA9590 **data; } List_82BA9590;
typedef struct Owner_82BA9590 { unsigned first; int pad[0x16]; List_82BA9590 *list; } Owner_82BA9590;
extern Obj_82BA9590 **fn_82BC0088(List_82BA9590 *, unsigned);

static __forceinline unsigned sz(List_82BA9590 *l) { return l->count; }
static __forceinline Obj_82BA9590 **at(List_82BA9590 *l, unsigned i) { if (i < l->count) return l->data + i; return fn_82BC0088(l, i); }
void fn_82BA9590(Owner_82BA9590 *self, unsigned arg)
{
  unsigned i;
  Obj_82BA9590 *o;
  if (self->list != 0) {
    for (i = 0; i < sz(self->list); i++) {
      o = *at(self->list, i);
      o->vt->f0(o, arg, self->first);
    }
  }
}
