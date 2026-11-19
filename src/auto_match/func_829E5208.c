extern int fn_829E5148();
extern int fn_82A28E60();
extern unsigned int lbl_82057B74;
extern unsigned int lbl_832179FC;


unsigned int * fn_829E5208(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82057B74;
  fn_829E5148();
  if ((flags & 1) != 0) {
    fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,self);
  }
  return self;
}

