extern int fn_8265C990();
extern unsigned int lbl_8214C340;


unsigned int * fn_82E24D48(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8214C340;
  fn_8265C990(self[4],0x208c804d);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x208c804d);
  }
  return self;
}

