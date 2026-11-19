extern int fn_82A4F4E0();
extern int fn_82A5DD00();
extern unsigned int lbl_82089E70;


unsigned int * fn_82A4D040(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82089E70;
  fn_82A5DD00();
  if ((flags & 1) != 0) {
    fn_82A4F4E0(self);
  }
  return self;
}

