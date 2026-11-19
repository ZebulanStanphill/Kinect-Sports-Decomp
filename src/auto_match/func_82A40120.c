extern int fn_82A40018();
extern int fn_82A4F4E0();


unsigned __int64 fn_82A40120(unsigned __int64 self,unsigned int flags)

{
  fn_82A40018();
  if ((flags & 1) != 0) {
    fn_82A4F4E0(self);
  }
  return self;
}

