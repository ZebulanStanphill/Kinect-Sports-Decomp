extern int fn_8265CA20();
extern int fn_82F53B68();
extern unsigned int lbl_82165B14;


unsigned int * fn_82F50D30(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82165B14;
  fn_82F53B68();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

