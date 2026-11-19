extern int fn_8265C990();
extern int fn_82954CC0();
extern unsigned int lbl_82051CA8;


unsigned int * fn_829A8028(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82051CA8;
  fn_82954CC0();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x24810000);
  }
  return self;
}

