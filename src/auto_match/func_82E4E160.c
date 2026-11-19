extern int fn_8265C990();
extern int fn_82E4D860();
extern unsigned int lbl_82153C64;


unsigned int * fn_82E4E160(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82153C64;
  fn_82E4D860();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x248c8000);
  }
  return self;
}

