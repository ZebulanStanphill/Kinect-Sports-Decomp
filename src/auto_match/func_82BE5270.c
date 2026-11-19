extern int fn_82BE56C0();
extern unsigned int lbl_820E9264;


unsigned int * fn_82BE5270(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820E9264;
  if ((flags & 1) != 0) {
    fn_82BE56C0();
  }
  return self;
}

