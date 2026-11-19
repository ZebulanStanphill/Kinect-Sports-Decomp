extern int fn_8265CA20();
extern int fn_82FA5190();
extern unsigned int lbl_8217BB44;
extern unsigned int lbl_831BC768;


unsigned int * fn_82FF2330(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8217BB44;
  if (self[1] != 0) {
    fn_82FA5190(lbl_831BC768,self[1]);
    self[1] = 0;
    *(unsigned short *)(self + 2) = 0;
  }
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

