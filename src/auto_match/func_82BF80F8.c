extern int fn_82BE56C0();
extern int fn_82BF7A60();


unsigned __int64 fn_82BF80F8(unsigned __int64 self,unsigned int flags)

{
  fn_82BF7A60();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

