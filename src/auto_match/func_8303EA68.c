extern char lbl_8216D000[];
extern char lbl_8217C940[];
extern void fn_82FB05B8(void *);

void fn_8303EA68(void **p)
{
  p[0] = lbl_8216D000;
  p[7] = lbl_8217C940;
  fn_82FB05B8(p);
}
