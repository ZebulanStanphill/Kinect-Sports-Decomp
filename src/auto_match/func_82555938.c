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

struct Obj8255;
typedef struct { void *(*dtor)(struct Obj8255 *, int); int p1; void (*f8)(struct Obj8255 *); int pad[0x12]; void (*f54)(struct Obj8255 *, void *); } VT8255;
typedef struct Obj8255 { VT8255 *vt; } Obj8255;
typedef struct { Obj8255 *obj; int f4; char pad8[0x138]; void *f140; Obj8255 *f144; int p148; int f14c; char pad150[0x48]; void *f198; char pad19c[4]; } E8255;
typedef struct { E8255 *items; int count; char pad[0x24]; void *p2c; void *p30; void *p34; } C8255;
extern void fn_8251FA58(void *);
extern void fn_82522ED8(void *);
extern void fn_82557888(E8255 *);
extern void fn_82A1F238(void *);

void fn_82555938(C8255 *c)
{
  int i;
  E8255 *e;
  if (c->count != 0) {
    for (i = 0; i < c->count; i++) {
      e = &c->items[i];
      if (e->f140 != 0) {
        if (e->f14c > -1) e->f14c = -1;
        else e->obj->vt->f54(e->obj, e->f140);
        e->f140 = 0;
      }
      if (e->f4 == 0) e->obj->vt->f8(e->obj);
      if (e->f144 != 0) e->f144->vt->dtor(e->f144, 1);
      e->f144 = 0;
      if (e->f198 != 0) { fn_8251FA58(e->f198); e->f198 = 0; }
      if (e->obj != 0) {
        if (e->f4 == 0) e->obj->vt->dtor(e->obj, 1);
        e->obj = 0;
      }
      fn_82557888(e);
    }
  }
  if (c->p2c != 0) fn_82522ED8(c->p2c);
  if (c->p30 != 0) fn_82A1F238(c->p30);
  if (c->p34 != 0) fn_82A1F238(c->p34);
}