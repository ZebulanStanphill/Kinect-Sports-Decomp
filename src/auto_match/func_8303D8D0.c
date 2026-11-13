extern int fn_82FA5060();
extern int fn_8302B7D0();
extern int fn_8302BB20();
extern unsigned int lbl_8217D630;
extern unsigned int lbl_831BC768;


unsigned int *fn_8303D8D0(void *param_1, void *param_2)
{
  unsigned int *p = (unsigned int *)fn_82FA5060(lbl_831BC768, 0x20);
  if (p != 0) {
    fn_8302B7D0(p, param_1, param_2);
    p[7] = 0xffffffff;
    *p = (unsigned int)&lbl_8217D630;
    fn_8302BB20(p);
    return p;
  }
  return 0;
}
