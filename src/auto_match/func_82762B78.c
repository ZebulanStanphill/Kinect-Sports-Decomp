extern int fn_8267BE38();
extern int fn_8275CEE0();
extern int fn_8275D0F8();
extern unsigned int lbl_820147E0;


unsigned int * fn_82762B78(unsigned int *self,unsigned int flags)

{
  fn_8275D0F8(self + 10);
  *self = &lbl_820147E0;
  fn_8275CEE0(self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

