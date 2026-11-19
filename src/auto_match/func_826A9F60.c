extern int fn_8267BE38();
extern int fn_826A9F10();


unsigned __int64 fn_826A9F60(unsigned __int64 self,unsigned int flags)

{
  fn_826A9F10();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

