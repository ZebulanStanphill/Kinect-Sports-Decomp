extern void fn_82230110(void *s, const char *text);
extern void fn_82230300(void *s, int a, int b);
extern unsigned int fn_82865088(void *s);
extern int fn_82534820(unsigned int h);
extern unsigned int lbl_832993B8;
extern unsigned int lbl_832993BC;

int fn_82536178(unsigned int param_1)
{
  char s[40];

  if ((lbl_832993BC & 1) == 0) {
    lbl_832993BC = lbl_832993BC | 1;
    fn_82230110(s, "failed unhash");
    lbl_832993B8 = fn_82865088(s);
    fn_82230300(s, 1, 0);
  }
  if (param_1 == lbl_832993B8) return 0;
  if (param_1 == 0) return 0;
  return fn_82534820(param_1);
}
