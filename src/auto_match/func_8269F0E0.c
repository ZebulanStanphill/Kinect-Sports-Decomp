extern int fn_8265CA20();
extern int fn_8267BE38();
extern int fn_8269A990();


int fn_8269F0E0(int self,unsigned int flags)

{
  fn_8269A990(*(unsigned int *)(self + 0x10),*(unsigned int *)(self + 0x14));
  fn_8267BE38(*(unsigned int *)(self + 0x10));
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

