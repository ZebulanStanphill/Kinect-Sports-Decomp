extern int fn_82BE56C0();
extern int fn_82BEBD98();


unsigned __int64 fn_82BEBDF8(unsigned __int64 self,unsigned int flags)

{
  fn_82BEBD98();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

