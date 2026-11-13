typedef struct Ev_82DAB758 { unsigned short a; int c; int d1; int d2; int pad; int p1; int p2; } Ev_82DAB758;
typedef struct Ob_82DAB758 { char pad[0xc]; int f0c; char p10[0x48]; int *f58; int *f5c; } Ob_82DAB758;
extern void fn_82DAD368(void *, Ev_82DAB758 *);
extern void fn_82DAF0B0(int, Ev_82DAB758 *);

void fn_82DAB758(Ob_82DAB758 *o, int param_2, int param_3)
{
  Ev_82DAB758 e;
  char *d1;
  char *d2;

  d1 = (char *)o->f58;
  d2 = (char *)o->f5c;
  e.a = 0xffff;
  e.c = param_3;
  e.d1 = (int)d1;
  e.d2 = (int)d2;
  e.p1 = (int)o;
  e.p2 = param_2;
  fn_82DAF0B0(o->f0c, &e);
  if (*(unsigned short *)(d1 + 0x204) != 0) {
    fn_82DAD368(d1, &e);
  }
  if (*(unsigned short *)(d2 + 0x204) != 0) {
    fn_82DAD368(d2, &e);
  }
}
