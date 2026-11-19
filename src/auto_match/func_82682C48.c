extern int fn_8267BE38();
extern int fn_82682BD8();


unsigned __int64 fn_82682C48(unsigned __int64 self,unsigned int flags)

{
  fn_82682BD8();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

