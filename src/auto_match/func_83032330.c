extern int fn_8265CA20();
extern int fn_82FB05B8();
extern unsigned int lbl_8216D000;
extern unsigned int lbl_8217C940;


unsigned int * fn_83032330(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8216D000;
  self[7] = &lbl_8217C940;
  fn_82FB05B8();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

