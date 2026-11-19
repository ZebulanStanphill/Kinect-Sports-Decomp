extern int fn_82BE56C0();
extern int fn_82BF8F10();


unsigned __int64 fn_82BF8FE8(unsigned __int64 self,unsigned int flags)

{
  fn_82BF8F10();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

