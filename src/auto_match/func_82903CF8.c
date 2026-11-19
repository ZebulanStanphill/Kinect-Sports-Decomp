extern int fn_8265C990();
extern int fn_82940BE8();
extern unsigned int lbl_8202D5A8;


unsigned int * fn_82903CF8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8202D5A8;
  fn_82940BE8();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x24810000);
  }
  return self;
}

