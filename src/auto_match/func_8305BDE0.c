extern int atexit(void (*)(void));
extern void fn_83142048(void);
extern unsigned int lbl_8326506C;
extern unsigned int lbl_83265070;

unsigned int *fn_8305BDE0(unsigned int v)
{
  if ((lbl_83265070 & 1) == 0) {
    lbl_83265070 = lbl_83265070 | 1;
    lbl_8326506C = 0xac44;
    atexit(fn_83142048);
  }
  lbl_8326506C = v;
  return &lbl_8326506C;
}
