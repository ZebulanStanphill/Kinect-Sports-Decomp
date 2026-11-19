extern int fn_82BE56C0();
extern int fn_82BF5F50();


unsigned __int64 fn_82BF64F0(unsigned __int64 self,unsigned int flags)

{
  fn_82BF5F50();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

