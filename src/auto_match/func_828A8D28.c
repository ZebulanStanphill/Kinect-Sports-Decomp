extern int fn_8265CA20();
extern int fn_82893C48();
extern unsigned int lbl_8202439C;


unsigned int * fn_828A8D28(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8202439C;
  *(unsigned int *)(self[4] + 0x2c8) = 0;
  fn_82893C48();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

