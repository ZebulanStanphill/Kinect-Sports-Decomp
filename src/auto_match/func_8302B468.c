extern int fn_8265CA20();
extern int fn_83008310();
extern unsigned int lbl_8217C7B0;


unsigned int * fn_8302B468(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217C7B0;
  fn_83008310();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

