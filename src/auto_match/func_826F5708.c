extern int fn_8267BE38();
extern int fn_826F54F8();


unsigned __int64 fn_826F5708(unsigned __int64 self,unsigned int flags)

{
  fn_826F54F8();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

