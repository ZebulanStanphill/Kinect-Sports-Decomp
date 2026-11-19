extern int fn_8265C990();
extern int fn_82C101C8();
extern unsigned int lbl_820EC748;


unsigned int * fn_82C04920(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820EC748;
  fn_82C101C8();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c8033);
  }
  return self;
}

