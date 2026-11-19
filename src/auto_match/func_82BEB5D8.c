extern int fn_82BE56C0();
extern int fn_82BEB540();


unsigned __int64 fn_82BEB5D8(unsigned __int64 self,unsigned int flags)

{
  fn_82BEB540();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

