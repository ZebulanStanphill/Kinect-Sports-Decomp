typedef struct Rec_8273A220 {
  char pad0[0x48];
  __int64 f48;
  int pad50;
  int f54;
  int f58;
} Rec_8273A220;

typedef struct Obj_8273A220 {
  int pad0;
  unsigned char *f4;
  unsigned f8;
  char padc[0xc];
  int f18;
  int f1c;
} Obj_8273A220;

extern unsigned char fn_82695468(Obj_8273A220 *, int);
extern void fn_826954C0(Obj_8273A220 *, const char *, int, int);
extern int fn_826957D0(Obj_8273A220 *, int);
extern void fn_826959C8(unsigned char *);
extern double fn_826972E0(int, int);
extern unsigned char fn_82739680(int);
extern void fn_82739A30(Obj_8273A220 *);
extern int lbl_82011DF0[];

void fn_8273A220(Obj_8273A220 *p)
{
  Rec_8273A220 *rec;
  int a;
  int b;
  int old;
  int base;
  int lim;
  int step;
  int nv;
  unsigned char *q;

  if (fn_82695468(p, 0x23) == 0) {
    fn_826954C0(p, "Date", 0, 0);
  } else {
    rec = p->f8 != 0 ? (Rec_8273A220 *)(p->f8 - 0x10) : 0;
    if (p->f1c >= 1) {
      step = p->f18;
      a = (int)fn_826972E0(fn_826957D0(p, 0), step);
      fn_82739A30(p);
      b = (int)fn_826972E0((int)p->f4, p->f18);
      old = rec->f58;
      base = 0;
      if (a > 0) {
        base = lbl_82011DF0[(fn_82739680(rec->f54) * 12) + a - 1];
      }
      lim = lbl_82011DF0[fn_82739680(rec->f54) * 12 + a] - base;
      if (b > lim) {
        b = lim;
      }
      nv = base + b - 1;
      rec->f58 = nv;
      rec->f48 = (__int64)(nv - old) * 86400000 + rec->f48;
      q = p->f4;
      fn_826959C8(q);
      *q = 0;
    }
  }
}
