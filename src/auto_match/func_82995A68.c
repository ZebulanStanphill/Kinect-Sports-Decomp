extern int fn_8265C990();
extern int fn_82954CC0();
extern unsigned int lbl_8204FBA0;


unsigned int * fn_82995A68(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8204FBA0;
  fn_82954CC0();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x24810000);
  }
  return self;
}

