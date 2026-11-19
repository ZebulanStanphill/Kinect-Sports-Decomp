extern int fn_82E4FE40();
extern int fn_82E75508();
extern int fn_82E75738();
extern unsigned int lbl_8215EFB8;


unsigned int * fn_82E75D70(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8215EFB8;
  fn_82E75508();
  fn_82E75738(self);
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

