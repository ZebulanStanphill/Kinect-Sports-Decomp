extern int fn_8265CA20();
extern int fn_82A1E658();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_8217E188;


unsigned int * fn_830563D0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217E188;
  if (self[1] != 0) {
    fn_82A1E658(self[1]);
    self[1] = 0;
  }
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

