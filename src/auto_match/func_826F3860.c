extern int fn_8267BE38();
extern int fn_826E4E40();


unsigned __int64 fn_826F3860(unsigned __int64 self,unsigned int flags)

{
  fn_826E4E40();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

