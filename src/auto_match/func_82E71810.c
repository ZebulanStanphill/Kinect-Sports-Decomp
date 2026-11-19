extern int fn_82E4FE40();
extern int fn_82E6FB58();
extern unsigned int lbl_8215EEF0;


unsigned int * fn_82E71810(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8215EEF0;
  fn_82E6FB58();
  if ((flags & 1) != 0) {
    fn_82E4FE40(self);
  }
  return self;
}

