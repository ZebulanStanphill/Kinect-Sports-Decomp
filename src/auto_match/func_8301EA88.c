extern int fn_8265CA20();
extern int fn_82FA5190();
extern int fn_83008310();
extern int fn_8300E470();
extern unsigned int lbl_8217C564;
extern unsigned int lbl_831BC768;


unsigned int * fn_8301EA88(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217C564;
  if (self[4] != 0) {
    fn_82FA5190(lbl_831BC768, self[4]);
  }
  fn_8300E470(self + 5);
  fn_83008310(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

