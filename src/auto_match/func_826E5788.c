extern int fn_8267BE38();
extern int fn_826E5540();


unsigned __int64 fn_826E5788(unsigned __int64 self,unsigned int flags)

{
  fn_826E5540();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

