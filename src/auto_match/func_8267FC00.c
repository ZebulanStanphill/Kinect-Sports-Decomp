extern int fn_8267BE38();
extern int fn_8267F3B8();


unsigned __int64 fn_8267FC00(unsigned __int64 self,unsigned int flags)

{
  fn_8267F3B8();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

