extern int fn_82E4FE40();
extern int fn_82E6FB58();
extern unsigned int lbl_8215EE30;


unsigned int * fn_82E71750(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8215EE30;
  fn_82E6FB58();
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

