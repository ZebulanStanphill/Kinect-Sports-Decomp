extern int fn_8265CA20();
extern int fn_82FA8F70();
extern unsigned int lbl_8216CC7C;
extern unsigned int lbl_8216CC80;
extern unsigned int lbl_8216CC88;
extern unsigned int lbl_8216CCA0;


unsigned int * fn_82FABFD8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8216CCA0;
  self[1] = &lbl_8216CC88;
  self[4] = &lbl_8216CC80;
  self[6] = &lbl_8216CC7C;
  fn_82FA8F70();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

