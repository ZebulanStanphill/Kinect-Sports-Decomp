extern int fn_8265CA20();
extern int fn_830386B0();
extern unsigned int lbl_8217D264;
extern unsigned int lbl_8217D2B0;
extern unsigned int lbl_8217D2B8;


unsigned int * fn_830398A0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D2B8;
  self[1] = &lbl_8217D2B0;
  self[3] = &lbl_8217D264;
  fn_830386B0();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

