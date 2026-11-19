extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_827F38B0();
extern int fn_827F38B8();
extern unsigned int lbl_821CAA48;


unsigned int * fn_8260B200(unsigned int *self,int flags)

{
  *self = &lbl_821CAA48;
  if (self[0x2f] != 0) {
    fn_8265CAA0(self[0x2f]);
  }
  fn_827F38B0(self + 8);
  fn_827F38B8(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

