extern int fn_8265CA20();
extern int fn_82FAC580();
extern int fn_82FEFE60();
extern unsigned int lbl_8216CB88;
extern unsigned int lbl_8216CB90;
extern unsigned int lbl_8216CBCC;
extern unsigned int lbl_8217D264;


unsigned int * fn_82FA86F0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8216CB90;
  self[1] = &lbl_8216CB88;
  self[3] = &lbl_8217D264;
  self[0x62] = &lbl_8216CBCC;
  fn_82FAC580(self + 0x62);
  fn_82FEFE60(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

