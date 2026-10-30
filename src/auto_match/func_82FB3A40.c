typedef int (*code)();
extern void fn_82FABDE0(void *);
extern void fn_82FAD0F0(void *);
extern void fn_82FAD4D0(void *);
extern unsigned int lbl_8216CC7C, lbl_8216D71C, lbl_8216D730, lbl_8216D738, lbl_8216D750;
void fn_82FB3A40(int *p){
  p[0] = (int)&lbl_8216D750;
  p[1] = (int)&lbl_8216D738;
  p[4] = (int)&lbl_8216D730;
  p[6] = (int)&lbl_8216CC7C;
  p[0x10] = (int)&lbl_8216D71C;
  fn_82FAD4D0(p + 0x10);
  { int *o = (int *)p[0x16]; if (o != 0) { (*(code *)(*o + 8))(o); } }
  fn_82FAD0F0(p + 0x10);
  fn_82FABDE0(p);
}
