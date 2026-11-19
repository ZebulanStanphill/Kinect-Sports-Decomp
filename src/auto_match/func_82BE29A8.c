extern int fn_82BE56C0();
extern int fn_82BE5230();


unsigned __int64 fn_82BE29A8(unsigned __int64 self,unsigned int flags)

{
  fn_82BE5230();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

