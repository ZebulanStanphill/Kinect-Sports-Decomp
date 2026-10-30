extern void fn_82EE14B8(void);
extern unsigned int lbl_820ED0B8[];
extern unsigned int lbl_8215FAE0;
extern unsigned int lbl_8215FDD0;

unsigned int *fn_82EE1FE8(unsigned int *p)
{
  unsigned int t;
  fn_82EE14B8();
  p[0] = (unsigned int)&lbl_8215FAE0;
  p[1] = (unsigned int)&lbl_8215FDD0;
  p[4] = lbl_820ED0B8[0];
  p[5] = lbl_820ED0B8[1];
  p[6] = lbl_820ED0B8[2];
  t = lbl_820ED0B8[3];
  p[0x96] = 0;
  p[7] = t;
  return p;
}
