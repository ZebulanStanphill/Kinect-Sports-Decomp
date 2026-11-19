extern int fn_8265CA20();
extern int fn_82FFFB38();
extern unsigned int lbl_8217BD10;


unsigned int * fn_82FFFA10(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217BD10;
  fn_82FFFB38();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

