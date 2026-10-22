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
typedef struct Obj Obj;
typedef struct {
  void *f[7];
  void (*fn1c)(Obj *, int);
} ObjVtbl;
struct Obj { ObjVtbl *vt; };
typedef struct { int key; Obj *obj; } Entry;
typedef struct Self Self;
typedef struct { void (*del)(Self *, int); } SelfVtbl;
struct Self {
  SelfVtbl *vt;
  int pad[2];
  Entry *entries;
  int count;
};

void fn_82D6CBA0(Self *self, int arg)
{
  int i;
  for (i = 0; i < self->count; i++) {
    Obj *o = self->entries[i].obj;
    o->vt->fn1c(o, arg);
  }
  self->vt->del(self, 1);
}
