extern int fn_8265CA20();
extern int fn_83050AC8();
extern int fn_830560D0();
extern unsigned int lbl_8217DD8C;
extern unsigned int lbl_8217DE3C;
extern unsigned int lbl_8217DE6C;


unsigned int * fn_83052F28(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217DE6C;
  self[0x1e] = &lbl_8217DE3C;
  if ((self[0x1d] & 0x2000000) != 0) {
    fn_830560D0(self[0x18]);
  }
  self[0x1e] = &lbl_8217DD8C;
  fn_83050AC8(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

