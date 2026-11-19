extern int fn_8265CA20();
extern void fn_8265CAA0(unsigned int);
extern unsigned int lbl_82025404;


unsigned int * fn_828BA4E0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82025404;
  if (((((int *)self)[6] == 4) || (((int *)self)[6] == 6)) && (self[5] != 0)) {
    fn_8265CAA0(self[5]);
    self[4] = 0;
    self[5] = 0;
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

