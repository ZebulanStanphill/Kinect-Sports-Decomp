extern int fn_82B7BEB0();


int fn_82BC6DC0(int self,unsigned int flags)

{
  fn_82B7BEB0(*(unsigned int *)(self + 0xc),*(unsigned int *)(self + 8));
  if ((flags & 1) != 0) {
    fn_82B7BEB0(*(unsigned int *)(self + -4),self + -4);
  }
  return self;
}

