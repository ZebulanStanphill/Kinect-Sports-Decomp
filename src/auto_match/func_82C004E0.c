extern int fn_8265C990();
extern int fn_82C06590();
extern unsigned int lbl_820EBEE8;


unsigned int * fn_82C004E0(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EBEE8;
  fn_82C06590();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8005);
  }
  return self;
}

