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
typedef struct Obj_828B7EE0 Obj_828B7EE0;
typedef struct { int u[4]; unsigned size; unsigned cap; int alloc; } Str_828B7EE0;
typedef struct {
  int pad0[7];
  int (*f1c)(Obj_828B7EE0 *, int);
  int (*f20)(Obj_828B7EE0 *, Str_828B7EE0 *);
} Vt_828B7EE0;
typedef struct { unsigned a; int b; } Ent_828B7EE0;
typedef struct { Ent_828B7EE0 *begin; Ent_828B7EE0 *end; int pad; int alloc; } Vec_828B7EE0;
struct Obj_828B7EE0 {
  Vt_828B7EE0 *vt;
  Vec_828B7EE0 vec;
  char pad14[0xc];
  int mode;
  char pad24[4];
  int a28;
  int a2c;
};
extern void fn_82230110(Str_828B7EE0 *, const char *);
extern void fn_82231540(unsigned, unsigned, void *, char);
extern void fn_8265CA20(int);
extern void fn_828B6DD0(void *, void *, void *, char);
extern unsigned char fn_828B8F70(unsigned, int, int, Str_828B7EE0 *);
extern void fn_828B9020(unsigned);
extern char lbl_82196582[];

int fn_828B7EE0(Obj_828B7EE0 *self, int param_2)
{
  Str_828B7EE0 s;
  int r;
  Ent_828B7EE0 *p;
  Vec_828B7EE0 *v;
  char u1;
  char u2;
  if (((self->a2c - self->a28) & (int)0xfffffffc) == 0) {
    return 1;
  }
  if (self->mode == 1) {
    self->vt->f1c(self, param_2);
  }
  fn_82230110(&s, lbl_82196582);
  r = self->vt->f20(self, &s);
  p = self->vec.begin; v = &self->vec;
  if (p != v->end) {
    do {
      fn_828B9020(p->a);
      if (fn_828B8F70(p->a, param_2, r, &s) != 0) {
        fn_828B6DD0(p + 1, v->end, p, u1);
        fn_82231540((unsigned)v->end - 8, (unsigned)v->end, &v->alloc, u2);
        v->end = v->end - 1;
      } else {
        p++;
      }
    } while (p != self->vec.end);
  }
  if (s.cap >= 0x10) {
    fn_8265CA20(s.u[0]);
  }
  return 0;
}
