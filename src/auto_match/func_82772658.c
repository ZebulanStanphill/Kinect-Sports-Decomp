extern int fn_8267BE38();
extern int fn_82772608();


unsigned __int64 fn_82772658(unsigned __int64 self,unsigned int flags)

{
  fn_82772608();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

