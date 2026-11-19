extern int fn_82A28E60();
extern unsigned int lbl_82079680;
extern unsigned int lbl_832179FC;


unsigned int * fn_829E6560(unsigned int *self,unsigned int flags)

{
  *self = &lbl_82079680;
  if ((flags & 1) != 0) {
    fn_82A28E60(*(unsigned int *)(lbl_832179FC + 0x8f4cc),0,self);
  }
  return self;
}

