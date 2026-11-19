extern int fn_8265CA20();
extern unsigned int lbl_82197048;


unsigned int * fn_823A9C30(unsigned int *self,unsigned int flags)

{
  self[0x2a] = &lbl_82197048;
  self[0x26] = &lbl_82197048;
  self[0x20] = &lbl_82197048;
  self[0x1e] = &lbl_82197048;
  self[0x18] = &lbl_82197048;
  self[0x10] = &lbl_82197048;
  self[10] = &lbl_82197048;
  self[4] = &lbl_82197048;
  self[2] = &lbl_82197048;
  *self = &lbl_82197048;
  if ((flags & 1) != 0) {
    fn_8265CA20();
  }
  return self;
}

