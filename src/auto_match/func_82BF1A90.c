extern int fn_82BE56C0();
extern int fn_82BF1800();


unsigned __int64 fn_82BF1A90(unsigned __int64 self,unsigned int flags)

{
  fn_82BF1800();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

