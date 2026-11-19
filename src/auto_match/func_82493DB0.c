extern int fn_8248F8E8();
extern int fn_82493E80();


unsigned __int64 fn_82493DB0(unsigned __int64 self,unsigned int flags)

{
  fn_82493E80();
  if ((flags & 1) != 0) {
    fn_8248F8E8(self);
  }
  return self;
}

