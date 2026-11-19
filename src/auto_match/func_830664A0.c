extern int fn_8265CA20();
extern int fn_8306AB80();
extern unsigned int lbl_8217E8A8;


unsigned int * fn_830664A0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217E8A8;
  if (self[3] != 0) {
    fn_8306AB80(self[3],self);
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

