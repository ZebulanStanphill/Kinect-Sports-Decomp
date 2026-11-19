extern int fn_8265CA20();
extern int fn_828B55B0();
extern int fn_828DF3B8();


__int64 fn_828CB430(__int64 self,unsigned int flags)

{
  fn_828B55B0(self + 0x10);
  fn_828DF3B8(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

