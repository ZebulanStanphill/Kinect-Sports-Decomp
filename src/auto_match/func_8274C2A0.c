extern int fn_8267BE38();
extern int fn_8274C190();


unsigned __int64 fn_8274C2A0(unsigned __int64 self,unsigned int flags)

{
  fn_8274C190();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

