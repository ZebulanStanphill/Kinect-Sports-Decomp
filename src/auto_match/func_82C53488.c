extern int *fn_82C53370(int *, int);
extern void fn_82C75268();
extern void fn_82C9CDC8();
extern void fn_82C9CF48();
extern void fn_82C9D6E0();
extern int fn_82C9D898();
extern void fn_82C9D938();
extern void fn_82C9DAC8();
extern void fn_82CA2398(int *, int);
extern void fn_82CAECC8(int *);
extern void fn_82CB49E0();
extern void fn_82CB5E78();
extern void fn_82CB7520();
extern void fn_82CB7B10();
extern void fn_82CB83B8();
extern void fn_82CB8A40();
extern void fn_82CB92E8();

typedef void (*Fn)();

typedef struct {
  char pad_000[0x108];
  int f108;
  char pad_10c[0x700 - 0x10c];
  int f700;
  char pad_704[4];
  int f708;
  char pad_70c[0x724 - 0x70c];
  int f724, f728, f72c, f730, f734, f738, f73c, f740, f744, f748, f74c, f750;
  char pad_754[0x780 - 0x754];
  int f780, f784, f788, f78c;
  char pad_790[0xbac - 0x790];
  Fn fbac;
  char pad_bb0[0xc34 - 0xbb0];
  Fn fc34, fc38, fc3c, fc40;
  char pad_c44[0xc4c - 0xc44];
  Fn fc4c, fc50, fc54;
  char pad_c58[0xfac - 0xc58];
  int ffac;
  char pad_fb0[0x3e34 - 0xfb0];
  Fn f3e34, f3e38, f3e3c;
  char pad_3e40[0x5118 - 0x3e40];
  int f5118;
} Obj_82C53488;

void fn_82C53488(Obj_82C53488 *p)
{
  Obj_82C53488 *q = (Obj_82C53488 *)fn_82C53370((int *)p, 1);

  q->f72c = q->f728;
  q->f740 = q->f730;
  q->f744 = q->f734;
  q->f748 = q->f74c;
  if (q->f700 != 0) {
    q->f708 = 1;
    q->f72c = q->f724;
    q->f740 = q->f738;
    q->f744 = q->f73c;
    q->f748 = q->f750;
  }
  fn_82CA2398((int *)p, p->f5118);
  if (p->f708 != 0) {
    p->f780 = 0;
    p->f784 = 8;
    p->f788 = 0;
    p->f78c = 3;
  } else {
    p->f784 = 0;
    p->f780 = 8;
    p->f788 = 3;
    p->f78c = 0;
  }
  p->f108 = fn_82C9D898();
  p->fc54 = fn_82CB92E8;
  p->fc34 = fn_82CB7520;
  p->fc38 = fn_82CB7B10;
  p->fc3c = fn_82CB83B8;
  p->fc40 = fn_82CB8A40;
  p->fc4c = fn_82CB49E0;
  p->fc50 = fn_82CB5E78;
  if (p->ffac != 0) {
    p->f3e38 = fn_82C9D938;
    p->f3e3c = fn_82C9DAC8;
  } else {
    p->f3e38 = fn_82C9CDC8;
    p->f3e3c = fn_82C9CF48;
  }
  p->fbac = fn_82C9D6E0;
  p->f3e34 = fn_82C75268;
  fn_82CAECC8((int *)p);
}
