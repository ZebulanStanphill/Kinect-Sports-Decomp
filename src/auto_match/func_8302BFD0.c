extern int fn_8265CA20();
extern int fn_82FA5190();
extern int fn_83008310();
extern unsigned int lbl_8217C7C0;
extern unsigned int lbl_831BC768;


unsigned int * fn_8302BFD0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217C7C0;
  if (self[6] != 0) {
    fn_82FA5190(lbl_831BC768, self[6]);
    self[6] = 0;
  }
  fn_83008310(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

