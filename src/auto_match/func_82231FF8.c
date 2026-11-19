extern int fn_822360C8();
extern int fn_8265CA20();
extern int fn_828A8C98();


__int64 fn_82231FF8(__int64 self,unsigned int flags)

{
  fn_822360C8(self + 0x78);
  fn_822360C8(self + 0x68);
  fn_828A8C98(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

