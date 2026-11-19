extern int fn_82BE56C0();
extern int fn_82BE75E0();


unsigned __int64 fn_82BE7DD8(unsigned __int64 self,unsigned int flags)

{
  fn_82BE75E0();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

