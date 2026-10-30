struct C_82887DB8 { char p0[0x38]; int f38; int f3c; int f40; int f44; };
extern struct C_82887DB8 *fn_828886E0(void);
extern int lbl_83213E3C;
int fn_82887DB8(int a, int b)
{
  struct C_82887DB8 *c;
  if (lbl_83213E3C == 0) return 0;
  c = fn_828886E0();
  if ((c->f38 != 0 || a != 0) && (c->f3c == 0 || a == c->f40) && (c->f44 != 1 || b != 1) && (c->f44 != 2 || b != 2)) return 1;
  return 0;
}
