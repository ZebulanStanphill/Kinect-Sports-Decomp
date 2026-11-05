extern unsigned char lbl_8214C740[];
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
typedef struct Ifc { struct { int (*qi)(struct Ifc *, void *, struct Ifc **); int (*s1)(struct Ifc *); int (*rel)(struct Ifc *); int (*s3)(struct Ifc *); int (*addref)(struct Ifc *); } *vt; } Ifc;
typedef struct { Ifc *p; } Item;
typedef struct Self {
  char pad0[8]; void *x8; char pad1[0x40]; int f4c; int f50; Ifc *f54; char pad2[0x68]; unsigned cnt; char pad3[0x6c]; int f130; int pad134; int f138;
} Self;
int fn_82F35AE8(Self *self)
{
  int hr; unsigned i; Item *it; Ifc *q;
  if (self->x8 == 0) return 0xc00d36b6;
  self->f4c = 0; self->f50 = 0;
  if (self->f54 != 0) { self->f54->vt->rel(self->f54); self->f54 = 0; }
  for (i = 0; i < self->cnt; i++) {
    fn_82F35400((void *)((int)self + 0x58), i, &it);
    hr = it->p->vt->qi(it->p, &lbl_8214C740, &q);
    if (hr >= 0) { q->vt->addref(q); if (q != 0) { q->vt->rel(q); q = 0; } }
  }
  self->f130 = 0; self->f138 = 0;
  return fn_82F3E1E0(self);
}
