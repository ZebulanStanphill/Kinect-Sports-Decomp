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
extern void fn_8265CA20(void *);
extern char lbl_8217C608[];
extern char lbl_8217D040[];
typedef struct Iface Iface;
typedef struct { char pad[8]; void (*f8)(Iface *); } IVT;
struct Iface { IVT *vt; };
typedef struct { char pad[0x48]; Iface *ptr; } Sub;
typedef struct { void *vt; char pad[0x48]; Iface *p4c; } Obj;

static __forceinline void Rel(Sub *s) { if (s->ptr != 0) { s->ptr->vt->f8(s->ptr); } }
Obj *fn_83027710(Obj *self, unsigned flags)
{
  self->vt = lbl_8217C608;
  Rel((Sub *)((char *)self + 4));
  self->vt = lbl_8217D040;
  if ((flags & 1) != 0) fn_8265CA20(self);
  return self;
}
