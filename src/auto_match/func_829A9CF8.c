extern int fn_8265C990();
extern int fn_82954CC0();
extern unsigned int lbl_82051EB0;


unsigned int * fn_829A9CF8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82051EB0;
  fn_82954CC0();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x24810000);
  }
  return self;
}

