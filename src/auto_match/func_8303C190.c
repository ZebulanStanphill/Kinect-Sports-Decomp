extern int fn_8265CA20();
extern int fn_8302BA30();
extern unsigned int lbl_8217D474;


unsigned int * fn_8303C190(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217D474;
  fn_8302BA30();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

