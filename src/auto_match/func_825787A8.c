typedef struct Res_825787A8 { char pad0[0x14]; int f14; } Res_825787A8;
typedef struct Buf_825787A8 { char pad0[0x20]; unsigned f20; char pad1[0xc]; unsigned f30; } Buf_825787A8;
typedef struct Obj_825787A8 { char pad0[0x14]; int f14; } Obj_825787A8;
typedef struct Self_825787A8 {
  char pad0[0x64]; Obj_825787A8 *f64; int f68; int f6c; int f70; Obj_825787A8 *f74; Obj_825787A8 *f78; Obj_825787A8 *f7c; Obj_825787A8 *f80;
  char pad1[0xc8 - 0x84]; int fc8; int fcc; int fd0[13];
  int f104; int f108; int f10c; int f110; int *f114;
} Self_825787A8;
typedef struct L_825787A8 { Buf_825787A8 *s50; Buf_825787A8 *s54; Buf_825787A8 *s58; int s5c; int s60; int s64; } L_825787A8;
extern int fn_8251F720(void *p, int a);
extern int fn_825200A8(void *p, const char *s);
extern void fn_82837D98(int o, int a, void *out);
extern void fn_8263BDD8(void *b, int idx, int c, int d, int *e, int *f, int *g, int *h);
extern void fn_8262FBD8(void *b, unsigned a, unsigned c);
extern unsigned fn_8284C860(int o);
extern int fn_8284C850(int o);
extern int fn_8265CA60(int n);
extern char lbl_82196288[];

static __inline unsigned Sz_825787A8(unsigned n) { return (n <= 0x3fffffff) ? n * 4 : (unsigned)-1; }

void fn_825787A8(Self_825787A8 *s, char *info, int flag)
{
  L_825787A8 L;
  int i;
  int *p;
  int n;
  int n2;
  int off;
  int sz;

  s->f64 = (Obj_825787A8 *)fn_8251F720(info + 0x104, 0);
  s->f7c = (Obj_825787A8 *)fn_8251F720(info + 0x11c, 0);
  s->f74 = (Obj_825787A8 *)fn_8251F720(info + 0x114, 0);
  s->f78 = (Obj_825787A8 *)fn_8251F720(info + 0x118, 0);
  if (flag != 0 && fn_825200A8(info + 0x120, lbl_82196288) == 0)
    s->f80 = (Obj_825787A8 *)fn_8251F720(info + 0x120, 0);
  else
    s->f80 = 0;
  for (i = 0; i < 12; i++) {
    Buf_825787A8 *t;
    fn_82837D98(s->f64->f14, 0, &L.s50);
    t = (Buf_825787A8 *)L.s50;
    fn_8263BDD8(t, i, 0, 0x10, &L.s54, &L.s60, &L.s5c, &L.s58);
    s->fd0[i + 1] = (int)L.s54;
    fn_8262FBD8(t, t->f20 & 0xfffff000, t->f30 & 0xfffff000);
  }
  fn_82837D98(s->f74->f14, 0, &L.s54);
  fn_8263BDD8(L.s54, 0, 0, 0x10, &L.s50, &L.s58, &L.s5c, &L.s60);
  s->f104 = L.s50;
  fn_82837D98(s->f74->f14, 0, &L.s54);
  fn_8262FBD8(L.s54, L.s54->f20 & 0xfffff000, L.s54->f30 & 0xfffff000);
  fn_82837D98(s->f78->f14, 0, &L.s54);
  fn_8263BDD8(L.s54, 0, 0, 0x10, &L.s50, &L.s58, &L.s5c, &L.s60);
  s->f10c = L.s50;
  fn_82837D98(s->f78->f14, 0, &L.s54);
  fn_8262FBD8(L.s54, L.s54->f20 & 0xfffff000, L.s54->f30 & 0xfffff000);
  n = (int)(fn_8284C860(s->f7c->f14) & 0xff);
  s->f108 = 0;
  s->f108 = fn_8265CA60(Sz_825787A8(n));
  if (n > 1) {
    i = 0;
    if (n > 0) {
      do {
        fn_82837D98(s->f7c->f14, 0, &L.s54);
        fn_8263BDD8(L.s54, i, 0, 0x10, &L.s50, &L.s64, &L.s5c, &L.s60);
        ((int *)s->f108)[i] = L.s50;
        fn_82837D98(s->f7c->f14, 0, &L.s58);
        fn_8262FBD8(L.s58, L.s58->f20 & 0xfffff000, L.s58->f30 & 0xfffff000);
        i++;
      } while (i < n);
    }
    } else {
    fn_82837D98(s->f7c->f14, 0, &L.s58);
    fn_8263BDD8(L.s58, 0, 0, 0x10, &L.s54, &L.s5c, &L.s60, &L.s64);
    *(int *)s->f108 = L.s54;
    fn_82837D98(s->f7c->f14, 0, &L.s58);
    fn_8262FBD8(L.s58, L.s58->f20 & 0xfffff000, L.s58->f30 & 0xfffff000);
  }
  if (flag == 0 || s->f80 == 0) {
    s->f114 = 0;
  } else {
    n2 = (int)(fn_8284C860(s->f80->f14) & 0xff);
    s->f114 = (int *)fn_8265CA60(Sz_825787A8(n2));
    if (n2 > 0) {
      i = 0;
      off = 0;
      do {
        fn_82837D98(s->f80->f14, 0, &L.s58);
        fn_8263BDD8(L.s58, i, 0, 0x10, &L.s54, &L.s5c, &L.s60, &L.s64);
        *(int *)((char *)s->f114 + off) = L.s54;
        fn_82837D98(s->f80->f14, 0, &L.s50);
        fn_8262FBD8(L.s50, L.s50->f20 & 0xfffff000, L.s50->f30 & 0xfffff000);
        i++;
        off += 4;
      } while (i < n2);
    }
  }
  fn_82837D98(s->f78->f14, 0, &L.s58);
  fn_8263BDD8(L.s58, 0, 0, 0x10, &L.s54, &L.s5c, &L.s60, &L.s64);
  s->f110 = L.s54;
  fn_82837D98(s->f78->f14, 0, &L.s58);
  fn_8262FBD8(L.s58, L.s58->f20 & 0xfffff000, L.s58->f30 & 0xfffff000);
  s->fc8 = fn_8284C850(s->f74->f14);
  s->fcc = fn_8284C850(s->f64->f14);
  s->fd0[0] = fn_8284C850(s->f78->f14);
  s->f68 = fn_8251F720(info + 0x108, 0);
  s->f6c = fn_8251F720(info + 0x10c, 0);
  s->f70 = fn_8251F720(info + 0x110, 0);
}
