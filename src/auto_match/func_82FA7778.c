extern void fn_82A1E650(int, unsigned);
extern void fn_82A1E658(int);
extern void fn_82FA5190(int, void *);
extern void fn_82FA7D18(void *);
extern void fn_82FA7E58(void *);
extern void fn_82FE7EF0(unsigned);
extern int lbl_831BC768;
extern char lbl_831BC680[];
extern char lbl_83264240[];
extern unsigned lbl_83264228;
extern unsigned lbl_83264234[];

void fn_82FA7778(int *p)
{
  int h;
  fn_82FE7EF0(0xffffffff);
  while (lbl_83264234[2] != 0) {
    fn_82A1E650(lbl_83264228, 0xffffffff);
  }
  if (lbl_83264228 != 0) {
    fn_82A1E658(lbl_83264228);
  }
  lbl_83264228 = 0;
  lbl_83264234[0] = 0;
  lbl_83264234[1] = 0;
  lbl_83264234[2] = 0;
  fn_82FA7E58(lbl_83264240);
  fn_82FA7D18(lbl_831BC680);
  h = lbl_831BC768;
  if (p != 0) {
    (*(void (**)(int *, int))*(int *)p)(p, 0);
    fn_82FA5190(h, p);
  }
}
