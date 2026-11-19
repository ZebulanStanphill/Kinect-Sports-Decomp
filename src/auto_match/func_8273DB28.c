extern int fn_8267BE38();
extern int fn_8273CC40();


unsigned __int64 fn_8273DB28(unsigned __int64 self,unsigned int flags)

{
  fn_8273CC40();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

