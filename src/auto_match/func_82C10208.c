extern int fn_8265C990();
extern int fn_82C06390();
extern int fn_82C0E450();
extern unsigned int lbl_820ECE50;


unsigned int * fn_82C10208(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820ECE50;
  fn_82C0E450();
  fn_82C06390(self);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8032);
  }
  return self;
}

