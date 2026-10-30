typedef struct Ref_8288DF40 { unsigned *a; unsigned b; } Ref_8288DF40;
extern unsigned fn_8240D928(void *p);
extern Ref_8288DF40 *fn_8288DF40(Ref_8288DF40 *out, void *v, unsigned pos);

typedef struct VT_8288EBC8 { int f0, f4, f8; unsigned (*fc)(void *self); } VT_8288EBC8;
typedef struct Obj_8288EBC8 { VT_8288EBC8 *vt; } Obj_8288EBC8;
typedef struct Inner_8288EBC8 { char pad[0x26]; unsigned char f26; } Inner_8288EBC8;
typedef struct Mid_8288EBC8 { char pad[0x38]; Inner_8288EBC8 *f38; } Mid_8288EBC8;
typedef struct A_8288EBC8 { char pad[0x34]; Mid_8288EBC8 *f34; char pad2[4]; int f3c; } A_8288EBC8;
typedef struct B_8288EBC8 { char pad[0x20]; Obj_8288EBC8 *f20; } B_8288EBC8;

unsigned char fn_8288EBC8(A_8288EBC8 *a, B_8288EBC8 *b, void *c)
{
  unsigned char f;
  Ref_8288DF40 tmp;
  Ref_8288DF40 *r;
  if (a->f34 == 0 || a->f34->f38 == 0) f = 0;
  else f = a->f34->f38->f26;
  if (f == 0 && (b->f20 == 0 || b->f20->vt->fc(b->f20) == 0)) {
    return 0;
  } else {
    r = fn_8288DF40(&tmp, &a->f3c, fn_8240D928(c));
    return ((1 << r->b) & *r->a) != 0;
  }
}
