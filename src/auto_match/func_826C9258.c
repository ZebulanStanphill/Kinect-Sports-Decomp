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
struct Obj_826C9258;
typedef struct Vt_826C9258 {
  char pad[0xa0]; unsigned char (*fa0)(void *);
  char pad1[0xf4 - 0xa4]; void (*ff4)(struct Obj_826C9258 *);
} Vt_826C9258;
typedef struct Sub_826C9258 { char pad[0x1c]; int f1c; } Sub_826C9258;
typedef struct Tgt_826C9258 {
  char pad[0x20]; void *f20; char pad1[0x66 - 0x24]; unsigned char b66;
} Tgt_826C9258;
typedef struct Fl_826C9258 { float v[6]; } Fl_826C9258;
typedef struct Lock_826C9258 {
  struct { char pad[0x34]; void (*f34)(void *, int); void (*f38)(void *); } *vt;
} Lock_826C9258;
typedef struct Own_826C9258 { char pad[0xc]; Lock_826C9258 *lock; } Own_826C9258;
typedef struct Ctx_826C9258 {
  Own_826C9258 *f0;
  char pad[0x20 - 4]; int f20; char pad1[0x40 - 0x24]; Fl_826C9258 *f40; void *f44;
} Ctx_826C9258;
typedef struct Obj_826C9258 {
  Vt_826C9258 *vt;
  char pad[0x24 - 4]; char f24[0x20]; char f44[1];
  char pad1[0x64 - 0x45]; unsigned short f64; char pad2[0x7c - 0x66]; Sub_826C9258 *f7c;
  char pad3[0x8c - 0x80]; unsigned flags;
  char pad4[0xa8 - 0x90]; char fa8[1];
  char pad5[0x1b8 - 0xa9]; int f1b8; char pad6[0x1c8 - 0x1bc]; unsigned f1c8;
} Obj_826C9258;
extern void fn_8268CC00(void *);
extern void fn_8268CEC0(void *, void *);
extern void fn_8268D5D8(void *, void *);
extern void fn_82699058(void *, Ctx_826C9258 *);
extern void fn_8269A240(void *, void *);
extern int fn_8269A3C0(Obj_826C9258 *);
extern Tgt_826C9258 *fn_826C58D8(Obj_826C9258 *);
extern void fn_826C78F0(Obj_826C9258 *, int);
extern void fn_8270D570(Ctx_826C9258 *, Tgt_826C9258 *);
extern void fn_8270D668(Ctx_826C9258 *);
extern void fn_82758E40(int, Ctx_826C9258 *, Fl_826C9258 *, void *, int, int);
extern void *memcpy(void *, const void *, unsigned);

void fn_826C9258(Obj_826C9258 *o, Ctx_826C9258 *c)
{
  unsigned char on;
  unsigned char did;
  int saved20;
  Fl_826C9258 *savedFl;
  void *saved44;
  Tgt_826C9258 *t;
  Fl_826C9258 fl;
  struct { char a[0x20]; char b[0x20]; } m;
  int u;

  on = (o->flags & 3) == 1 || (o->flags & 0x8000) != 0;
  if (on) {
    saved20 = c->f20;
    savedFl = c->f40;
    saved44 = c->f44;
    c->f20 = o->f7c->f1c + 0x18;
    t = fn_826C58D8(o);
    did = 0;
    if (t != 0) {
      if (((Vt_826C9258 *)*(void **)t)->fa0(t) == 0 || (t->b66 & 0x10) != 0) {
        fn_826C78F0(o, 0);
      } else {
        fn_8268CC00(m.a);
        fn_8269A240(t->f20, m.a);
        c->f40 = (Fl_826C9258 *)m.a;
        fn_8270D570(c, t);
        did = 1;
      }
    }
    fl.v[0] = savedFl->v[0];
    fl.v[1] = savedFl->v[1];
    fl.v[2] = savedFl->v[2];
    fl.v[3] = savedFl->v[3];
    fl.v[4] = savedFl->v[4];
    fl.v[5] = savedFl->v[5];
    fn_8268CEC0(&fl, o->f44);
    c->f40 = &fl;
    memcpy(m.b, (unsigned char *)saved44, 0x20);
    fn_8268D5D8(m.b, o->f24);
    c->f44 = m.b;
    if (o->f1b8 != 0) {
      u = fn_8269A3C0(o);
      fn_82758E40(o->f1b8, c, c->f40, m.b, u, o->f64 != 0);
    }
    if (o->f1c8 == 0) {
      fn_82699058(o->fa8, c);
    } else {
      c->f0->lock->vt->f34(c->f0->lock, o->f1c8 + 0x48);
      fn_82699058(o->fa8, c);
      c->f0->lock->vt->f38(c->f0->lock);
    }
    c->f20 = saved20;
    c->f40 = savedFl;
    c->f44 = saved44;
    o->vt->ff4(o);
    if (did) {
      fn_8270D668(c);
    }
  }
}
