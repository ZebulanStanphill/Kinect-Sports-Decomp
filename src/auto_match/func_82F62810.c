extern unsigned char lbl_832632F4;
extern void fn_82F627B0(void);
extern int fn_82F63AD8(void (*f)(void));
extern int lbl_832632D0;

void fn_82F62810(int v)
{
  if (lbl_832632F4 == 0) {
    lbl_832632F4 = 1;
    fn_82F63AD8(fn_82F627B0);
  }
  lbl_832632D0 = v;
}
