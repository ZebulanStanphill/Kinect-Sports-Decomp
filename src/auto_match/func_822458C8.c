extern void fn_82514938(void *p, void *a, int b);
extern void *fn_82250A18(void);
extern void fn_82230E20(void *mgr, int v);
extern void *lbl_832975B0;

void fn_822458C8(char *p, void *a, int b)
{
  fn_82514938(p, a, b);
  if (b == 3 && *(unsigned int *)(p + 0x28) == 1) {
    int v = *(int *)(p + 0xb4);
    fn_82230E20(lbl_832975B0 ? lbl_832975B0 : fn_82250A18(), v);
  }
}
