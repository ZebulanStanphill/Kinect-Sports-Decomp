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
typedef struct Pair_823FD610 { void *p; void *rc; } Pair_823FD610;
typedef struct Obj_823FD610 {
  void *vt; void *f4; int pad[6]; Pair_823FD610 f20; Pair_823FD610 f28; Pair_823FD610 f30;
  Pair_823FD610 f38; Pair_823FD610 f40; Pair_823FD610 f48;
} Obj_823FD610;
extern char lbl_821B736C[];
extern void fn_82365BD8(Pair_823FD610 *, Pair_823FD610 *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_822315A0(void *);

static void Lock(Pair_823FD610 *d, Pair_823FD610 *s)
{
  void *rc = s->rc;
  void *p = s->p;
  if (rc != 0 && fn_8223AAC0(rc) != 0) {
    if (d->rc != 0) {
      fn_822315A0(d->rc);
    }
    d->rc = rc;
    d->p = p;
  }
}

Obj_823FD610 *fn_823FD610(Obj_823FD610 *o, Pair_823FD610 *a, Pair_823FD610 *b, Pair_823FD610 *c, Pair_823FD610 *d, Pair_823FD610 *e, Pair_823FD610 *f)
{
  Pair_823FD610 *q;

  o->f4 = 0;
  o->vt = lbl_821B736C;
  fn_82365BD8(&o->f20, a);
  fn_82365BD8(&o->f28, b);
  q = &o->f30;
  q->p = 0;
  q->rc = 0;
  Lock(q, c);
  q = &o->f38;
  q->p = 0;
  q->rc = 0;
  Lock(q, d);
  fn_82365BD8(&o->f40, e);
  fn_82365BD8(&o->f48, f);
  if (a->rc != 0) fn_822315A0(a->rc);
  if (b->rc != 0) fn_822315A0(b->rc);
  if (c->rc != 0) fn_822315A0(c->rc);
  if (d->rc != 0) fn_822315A0(d->rc);
  if (e->rc != 0) fn_822315A0(e->rc);
  if (f->rc != 0) fn_822315A0(f->rc);
  return o;
}
