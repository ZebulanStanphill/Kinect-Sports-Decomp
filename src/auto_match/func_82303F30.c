extern int fn_82303F80();
extern int fn_8265CA20();


unsigned __int64 fn_82303F30(unsigned __int64 self,unsigned int flags)

{
  fn_82303F80();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

