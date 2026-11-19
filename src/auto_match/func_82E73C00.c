extern int fn_82E4FE40();
extern int fn_82E73028();
extern unsigned int lbl_8215EF68;


unsigned int * fn_82E73C00(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8215EF68;
  fn_82E73028();
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

