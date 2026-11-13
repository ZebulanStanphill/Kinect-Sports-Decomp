struct W0 { unsigned int pad : 15; unsigned int cnt : 14; unsigned int low : 3; };
struct W1 { unsigned int pad : 14; unsigned int key : 14; unsigned int low : 4; };
struct Ent { W0 w0; char p4[0x18]; char *ptr; char p20[8]; };
struct Sub { char p0[0x50]; unsigned int *tab; };
struct Ctx_82B51F48 {
  char p0[0xc]; Ent *ents; char p10[0x18]; unsigned int flags; char p2c[0x208]; Sub *sub; char p238[0x20]; unsigned int f258;
  unsigned int Method_82B51F48(void *param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, void *param_6);
};
extern "C" void fn_82AE7308(Ctx_82B51F48 *, unsigned int);
extern "C" void fn_82B51E30(Ctx_82B51F48 *, void *, unsigned int, unsigned int, unsigned int, int, void *);
unsigned int Ctx_82B51F48::Method_82B51F48(void *param_2, unsigned int param_3, unsigned int param_4, unsigned int param_5, void *param_6)
{
  unsigned int *t = sub->tab;
  unsigned int uVar2;
  Ent *e;
  unsigned int n, k;
  if (t != 0) uVar2 = t[param_3]; else uVar2 = 0;
  if ((flags & 0x10000) == 0 || param_3 >= 0x2d7) {
    if ((flags & 0x40000) == 0 || param_3 < f258 || param_3 >= f258 + 0xc) {
      e = &ents[param_3];
      if (e->ptr == 0) fn_82AE7308(this, param_3);
      n = 0;
      k = 0;
      if (e->w0.cnt != 0) {
        int off = 0;
        do {
          if (((W1 *)(e->ptr + off))->key == param_4) {
            fn_82B51E30(this, param_2, param_3, uVar2, k, 1, param_6);
            n++;
            if (n >= param_5) return n;
          }
          k++;
          off += 8;
        } while (k < e->w0.cnt);
      }
      return n;
    }
  }
  fn_82B51E30(this, param_2, param_3, uVar2, 0, 4, param_6);
  return 4;
}
