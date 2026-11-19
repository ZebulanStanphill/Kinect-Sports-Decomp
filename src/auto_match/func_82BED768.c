extern int fn_82BE56C0();
extern int fn_82BED180();


unsigned __int64 fn_82BED768(unsigned __int64 self,unsigned int flags)

{
  fn_82BED180();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

