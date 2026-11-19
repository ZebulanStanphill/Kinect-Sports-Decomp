extern int fn_8265CA20();
extern int fn_8281F820();
extern int fn_8281FB48();
extern unsigned int lbl_8201EBA0;


unsigned int * fn_8281FC60(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8201EBA0;
  if (*(char *)(self + 3) == '\x01') {
    fn_8281F820();
    fn_8281FB48();
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

