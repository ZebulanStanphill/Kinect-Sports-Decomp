extern void fn_822314E8(void *);
extern void fn_8265CA20(void *);
extern char lbl_832960A0[];

void fn_8313F3F0(void)
{
  char *p = *(char **)(lbl_832960A0 + 0xe8);
  char *e;
  int i;
  if (p != 0) {
    fn_822314E8(p + 0x20);
    fn_8265CA20(p);
  }
  e = lbl_832960A0 + 0x108;
  for (i = 3; i >= 0; i--) {
    e -= 0x30;
    fn_822314E8(e);
  }
}
