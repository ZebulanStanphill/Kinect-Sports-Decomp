extern int fn_8267BE38();
extern int fn_826F4650();


unsigned __int64 fn_826F4DC8(unsigned __int64 self,unsigned int flags)

{
  fn_826F4650();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

