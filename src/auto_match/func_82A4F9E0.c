extern int fn_82A4F4E0();
extern int fn_82A4F980();


unsigned __int64 fn_82A4F9E0(unsigned __int64 self,unsigned int flags)

{
  fn_82A4F980();
  if ((flags & 1) != 0) {
    fn_82A4F4E0(self);
  }
  return self;
}

