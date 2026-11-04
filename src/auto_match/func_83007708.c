extern void fn_82FA5190(void *, void *); extern void fn_82FF6A78(void *, int, void *); extern void fn_82FFF430(void *); extern void fn_830043E8(void *);
extern void fn_830063D0(void *); extern void fn_83006A80(void *); extern void fn_830184C0(void *, void *);
extern char lbl_8217BF18[]; extern char lbl_8217C940[]; extern void *lbl_831BC768; extern void *lbl_832642E8; extern void *lbl_832642FC;
struct Dt_83007708;
typedef struct VT_83007708 { void (*dtor)(void *, int); } VT_83007708;
typedef struct Dt_83007708 { VT_83007708 *vt; } Dt_83007708;
typedef struct VT2_83007708 { char pad[0x68]; void (*f68)(void *, int); } VT2_83007708;
typedef struct I_83007708 { VT2_83007708 *vt; } I_83007708;
typedef struct S_83007708 { int pad0; unsigned itf; } S_83007708;
typedef struct C_83007708 { char pad[0x30]; unsigned f30; } C_83007708;
typedef struct O_83007708 { void *vt; int pad4, pad8; int f0c; int pad10[3]; void *vt2; C_83007708 *c; Dt_83007708 *d; void *e; int pad2c[4]; unsigned char b3c, b3d, b3e, b3f; int f40; S_83007708 *f44; } O_83007708;
void fn_83007708(O_83007708 *o) {
  Dt_83007708 *d; void *heap; unsigned t;
  o->vt = lbl_8217BF18;
  o->vt2 = lbl_8217C940;
  o->b3d = o->b3d | 2;
  if (o->e != 0) { fn_83006A80(o->e); fn_82FA5190(lbl_831BC768, o->e); }
  if (lbl_832642FC != 0) { o->f40 = 0; fn_830184C0(lbl_832642FC, o); }
  if (o->c != 0 && (t = o->c->f30) != 0) fn_82FF6A78(lbl_832642E8, t, o);
  d = o->d;
  if (d != 0) { heap = lbl_831BC768; d->vt->dtor(d, 0); fn_82FA5190(heap, d); }
  if (o->c != 0) {
    fn_830043E8(o);
    fn_830063D0(o);
    d = (Dt_83007708 *)o->c;
    heap = lbl_831BC768;
    if (d != 0) { d->vt->dtor(d, 0); fn_82FA5190(heap, d); }
    o->c = 0;
  } else {
    fn_830063D0(o);
  }
  if (o->f44 != 0) {
    if (o->f44->itf != 0) ((I_83007708 *)o->f44->itf)->vt->f68((I_83007708 *)o->f44->itf, o->f0c);
    fn_82FA5190(lbl_831BC768, o->f44);
  }
  fn_82FFF430(o);
}
