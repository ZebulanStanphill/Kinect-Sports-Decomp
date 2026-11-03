typedef struct Node_82830670 {
  char pad0[0xc];
  int f0c;
  int f10;
  char pad14[4];
  char f18[0x10];
  unsigned char f28;
} Node_82830670;
typedef struct Obj_82830670 {
  char pad[0x304];
  void *f304;
  int f308;
  char pad30c[0xc0];
  unsigned char *f3cc;
  int *f3d0;
  unsigned *f3d4;
} Obj_82830670;
typedef struct Sub_82830670 {
  char pad[0x2fc];
  char list[0x70];
  unsigned char f36c_pad;
} Sub_82830670;
extern int fn_82822368(Node_82830670 *);
extern int fn_828223C8(void *, Node_82830670 **);
extern int fn_828252D8(void *);
extern int fn_82825378(Obj_82830670 *, char *);
extern int fn_82825428(char *);
extern int fn_82827850(Node_82830670 *, Obj_82830670 *, int);
extern unsigned char fn_82827980(char *, char *, int);
extern int fn_828295A8(Node_82830670 *, unsigned *);
extern int fn_8282D760(Obj_82830670 *, char *, void *);
extern int fn_82830328();
extern int fn_82830520(Obj_82830670 *, char *);
extern int *fn_828313D0(void *, void *);
extern int fn_82833CC8(Obj_82830670 *, char *, int);
extern int fn_82835800(Obj_82830670 *, char *, int);
extern int fn_82829F90();
extern int fn_8282BB58();
extern int fn_8282B470();

void fn_82830670(Obj_82830670 *o, char *s, unsigned *r, int *r2, unsigned char flag)
{
  int a;
  int prev;
  unsigned char c;
  Node_82830670 *cur;
  Node_82830670 *nx;
  Node_82830670 *n;
  fn_82830328();
  fn_82830520(o, s);
  *r = 0;
  c = fn_82827980(s, ".data", 0);
  a = o->f308;
  prev = a;
  fn_828223C8(s + 0x2fc, &cur);
  while (cur != 0) {
    n = cur;
    if (*r == 0 && n->f28 == c) {
      fn_828295A8(cur, r);
      *r2 = o->f3d0[n->f10 - 1] - 1;
    }
    n->f10 = o->f3d0[n->f10 - 1];
    n->f28 = o->f3cc[n->f28 - 1];
    fn_828223C8(cur, &nx);
    if (o->f3d4[n->f0c - 1] != 0) {
      fn_82822368(cur);
      fn_82827850(n, o, prev);
      if (flag != 0) {
        int *p = fn_828313D0(o->f304, n->f18);
        *p = (int)n;
      }
      prev = (int)n;
    }
    cur = nx;
  }
  if (s[0x3f6] != 0 || s[0x3f3] != 0) {
    fn_82835800(o, s, a);
  }
  fn_8282D760(o, s + 0x36c, (void *)fn_82829F90);
  fn_82833CC8(o, s, a);
  fn_8282D760(o, s + 0x318, (void *)fn_8282BB58);
  fn_8282D760(o, s + 0x344, (void *)fn_8282B470);
  fn_82825378(o, s);
  fn_828252D8(o->f3cc);
  fn_828252D8(o->f3d0);
  fn_828252D8(o->f3d4);
  fn_82825428(s);
}
