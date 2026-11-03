extern void *lbl_831BC770;
extern char lbl_831BC774[];
extern unsigned lbl_83264428[];
extern char *fn_82FA5060(void *, int);
extern void fn_82FA5190(void *, void *);
extern int fn_82FEEFA8();
extern unsigned fn_82FEF2A8(void *, void *, void *);
extern int fn_830224E8(void *);
extern int fn_83024470(void *);
extern int fn_83024C50(void *, unsigned, int, void *);

char *fn_82FED500(void *a, void *b)
{
  char *p = fn_82FA5060(lbl_831BC770, 0x180);
  char *r;
  if (p != 0) {
    fn_82FEEFA8();
    if (fn_83024C50(p, lbl_83264428[1], 0x400, b) != 1 || fn_82FEF2A8(lbl_831BC774, a, p) == 0) {
      fn_83024470(p);
      fn_830224E8(p + 0x80);
      fn_82FA5190(lbl_831BC770, p);
      p = 0;
    }
    r = p;
  } else {
    r = 0;
  }
  return r;
}
