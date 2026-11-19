extern int fn_8265CA20();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_83264230;


unsigned int * fn_82FA7B70(unsigned int *self,unsigned int flags)

{
  lbl_83264230 = 0;
  *self = &lbl_8217D040;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

