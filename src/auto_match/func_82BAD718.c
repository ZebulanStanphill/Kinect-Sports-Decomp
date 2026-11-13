typedef struct Flags_82BAD718 {
  unsigned int pad1 : 31;
  unsigned int b0 : 1;
} Flags_82BAD718;
typedef struct Obj_82BAD718 {
  char pad0[0x38];
  int f38;
  char pad3c[0x50 - 0x3c];
  int f50;
  char pad54[0x80 - 0x54];
  int f80;
  char pad84[0xa8 - 0x84];
  struct Obj_82BAD718 *src;
  char padac[0xe4 - 0xac];
  Flags_82BAD718 fe4;
} Obj_82BAD718;
extern void fn_82BACA30(Obj_82BAD718 *, int, int, int);
extern int lbl_820DF0C0;

void fn_82BAD718(Obj_82BAD718 *o, int a, int b, int c)
{
  Obj_82BAD718 *p = o->src;
  int v;

  if (p != 0 && p->fe4.b0 != 0) {
    o->f50 = p->f50;
    o->f38 = p->f38;
    v = p->f80;
  } else {
    o->f38 = 0;
    o->f50 = 0;
    v = lbl_820DF0C0;
  }
  o->f80 = v;
  fn_82BACA30(o, a, b, c);
}
