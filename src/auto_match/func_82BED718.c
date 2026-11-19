extern int fn_82BE56C0();
extern int fn_82BECD20();


unsigned __int64 fn_82BED718(unsigned __int64 self,unsigned int flags)

{
  fn_82BECD20();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

