extern int fn_82366A98();
extern int fn_8251FA58();
extern int fn_825708F0();
extern int fn_8265CA20();
extern unsigned int lbl_821B6098;


unsigned int * fn_823C5510(unsigned int *self,unsigned int flags)

{
  *self = &lbl_821B6098;
  fn_825708F0(self[0x92],self[0x93]);
  fn_825708F0(self[0x92],self[0x94]);
  if (self[0x97] != 0) {
    fn_8251FA58(self[0x97]);
  }
  fn_82366A98(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

