extern int fn_8265C990();
extern unsigned int lbl_8202971C;


unsigned int * fn_828F99F8(unsigned int *self,unsigned int flags)

{
  *self = &lbl_8202971C;
  fn_8265C990(self[3],0x24810000);
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x24810000);
  }
  return self;
}

