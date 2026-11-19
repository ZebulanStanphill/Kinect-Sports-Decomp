extern int fn_8267BE38();
extern int fn_82704CB0();


unsigned __int64 fn_82704D08(unsigned __int64 self,unsigned int flags)

{
  fn_82704CB0();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

