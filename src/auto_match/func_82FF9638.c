typedef struct Loc_82FF9638 {
  unsigned char a;
  unsigned char b;
  unsigned short c;
  unsigned short d;
  unsigned e;
  unsigned f;
  unsigned g;
  unsigned h;
  unsigned i;
  unsigned j;
  unsigned k;
  unsigned l;
} Loc_82FF9638;
extern int fn_82FF8938(char *, void *, int);
extern void *fn_82FF8ED8(char *, int);
extern void fn_82FF86A8(char *);
extern int fn_830155E8(void *, unsigned, unsigned, unsigned, unsigned, unsigned, void *, unsigned);
extern int fn_830158F8(void *, unsigned, unsigned, void *, int, int);
extern void *lbl_83264300;

int fn_82FF9638(char *param_1, unsigned param_2)
{
  Loc_82FF9638 s;
  int r;
  unsigned i, j;
  void *buf;
  r = 1;
  if (param_2 != 0) {
    param_1 = param_1 + 4;
    r = fn_82FF8938(param_1, &s.g, 4);
    if (r == 1 && (i = 0, s.g != 0)) {
      do {
        r = fn_82FF8938(param_1, &s.f, 4);
        if (r != 1) break;
        r = fn_82FF8938(param_1, &s.h, 4);
        if (r != 1) break;
        r = fn_82FF8938(param_1, &s.e, 4);
        if (r != 1) break;
        if (s.e != 0) {
          buf = fn_82FF8ED8(param_1, s.e);
          if (buf != 0) {
            r = fn_830158F8(lbl_83264300, s.f, s.h, buf, s.e, 1);
            fn_82FF86A8(param_1);
            if (r != 1) break;
          }
        }
        r = fn_82FF8938(param_1, &s.d, 2);
        if (r != 1) break;
        j = 0;
        if (s.d != 0) {
          do {
            fn_82FF8938(param_1, &s.l, 4);
            fn_82FF8938(param_1, &s.b, 1);
            fn_82FF8938(param_1, &s.k, 4);
            fn_82FF8938(param_1, &s.j, 4);
            fn_82FF8938(param_1, &s.i, 4);
            fn_82FF8938(param_1, &s.a, 1);
            fn_82FF8938(param_1, &s.c, 2);
            buf = fn_82FF8ED8(param_1, s.c * 0xc);
            if (buf != 0) {
              r = fn_830155E8(lbl_83264300, s.f, s.k, s.j, s.i, s.a, buf, s.c);
              fn_82FF86A8(param_1);
            }
            j++;
          } while (j < s.d);
          if (r != 1) break;
        }
        i++;
      } while (i < s.g);
    }
  }
  return r;
}
