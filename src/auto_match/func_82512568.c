typedef struct {
  unsigned int slot[4];
  char pad10[0x2c - 0x10];
  int handle[5];
  char pad40[4];
  unsigned char flag;
} Tab_82512568;

extern Tab_82512568 lbl_83265988;
extern int lbl_832659CC;
extern void fn_82230110(void *);
extern void fn_82230300(void *, int, int);
extern int fn_828EBF50(void *, void *);
extern void fn_82512610(int, unsigned int, int, int);

int fn_82512568(void *a, int b, unsigned char c)
{
  char buf[0x20];
  unsigned int i;

  unsigned int *p = lbl_83265988.slot;
  unsigned int n = 0;
  for (;;) {
    if (n >= 4) { i = 4; break; }
    if (*p == 0) { i = n; break; }
    n++;
    p++;
  }

  fn_82230110(buf);
  lbl_83265988.handle[i] = fn_828EBF50(buf, a);
  fn_82230300(buf, 1, 0);
  fn_82512610(lbl_83265988.handle[i], i, 0, 0);
  if (c == 0) {
    lbl_83265988.flag = 1;
  }
  return lbl_83265988.handle[i];
}
