extern int fn_8267BE38();
extern int fn_82684EC0();


unsigned __int64 fn_82684F10(unsigned __int64 self,unsigned int flags)

{
  fn_82684EC0();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

