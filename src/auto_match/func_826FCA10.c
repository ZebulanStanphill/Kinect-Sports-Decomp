extern int fn_8267BE38();
extern int fn_826FC910();


unsigned __int64 fn_826FCA10(unsigned __int64 self,unsigned int flags)

{
  fn_826FC910();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

