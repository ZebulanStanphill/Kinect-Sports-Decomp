extern int fn_8265CA20();
extern int fn_83050AC8();
extern int fn_830561A0();
extern unsigned int lbl_8217DDBC;
extern unsigned int lbl_8217DE98;
extern unsigned int lbl_8217DECC;


unsigned int * fn_83052FB8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DECC;
  self[0x1e] = &lbl_8217DE98;
  if ((self[0x1d] & 0x2000000) != 0) {
    fn_830561A0(self[0x18]);
  }
  self[0x1e] = &lbl_8217DDBC;
  fn_83050AC8(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

