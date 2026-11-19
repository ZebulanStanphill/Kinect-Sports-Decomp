extern int fn_8267BE38();
extern int fn_8274CE00();


unsigned __int64 fn_8274CEE0(unsigned __int64 self,unsigned int flags)

{
  fn_8274CE00();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

