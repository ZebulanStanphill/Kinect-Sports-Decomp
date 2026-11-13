extern int fn_82488FB8(int *);
extern int atexit(void (*)(void));
extern void fn_8313F3F0(void);
extern int lbl_832960A0[];
typedef struct { int a[8]; int b; int c; int d; int pad; } E_83124D98;
void fn_83124D98(void)
{
  int i;
  E_83124D98 *e;
  e = (E_83124D98 *)(lbl_832960A0 + 10);
  for (i = 3; i >= 0; i--) {
    e->b = 0;
    e->c = 0;
    e->d = 0;
    e->a[0] = 0; e->a[1] = 0; e->a[2] = 0; e->a[3] = 0; e->a[4] = 0; e->a[5] = 0; e->a[6] = 0; e->a[7] = 0;
    fn_82488FB8(&e->b);
    e++;
  }
  lbl_832960A0[0x3a] = 0;
  atexit(fn_8313F3F0);
}
