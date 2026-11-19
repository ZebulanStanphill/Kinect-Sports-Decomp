extern int fn_8267BE38();
extern int fn_826C2EA0();
extern int fn_8273CEF0();


__int64 fn_8273E8F8(__int64 self,unsigned int flags)

{
  fn_8273CEF0(self + 0x34);
  fn_826C2EA0(self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

