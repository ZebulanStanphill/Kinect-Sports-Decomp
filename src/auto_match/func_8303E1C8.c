extern int fn_82FA5060();
extern int fn_8302BB20();
extern int fn_8303EC68();
extern unsigned int lbl_8217D6E4;
extern unsigned int lbl_831BC768;


unsigned int *fn_8303E1C8(void *param_1, void *param_2)
{
  unsigned int *p = (unsigned int *)fn_82FA5060(lbl_831BC768, 0x30);
  if (p != 0) {
    fn_8303EC68(p, param_1, param_2);
    *(unsigned char *)(p + 0xb) = 1;
    *p = (unsigned int)&lbl_8217D6E4;
    fn_8302BB20(p);
    return p;
  }
  return 0;
}
