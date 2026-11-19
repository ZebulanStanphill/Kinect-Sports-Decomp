extern int fn_8265C990();
extern int fn_82A5DD00();
extern unsigned int lbl_820E870C;


unsigned int * fn_82BD9440(unsigned int *self,unsigned int flags)

{
  *self = &lbl_820E870C;
  fn_82A5DD00();
  if ((flags & 1) != 0) {
    fn_8265C990(self,0x608a2002);
  }
  return self;
}

