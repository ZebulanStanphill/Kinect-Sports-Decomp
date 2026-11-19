extern int fn_8267BE38();
extern int fn_8274E398();


unsigned __int64 fn_8274E4D8(unsigned __int64 self,unsigned int flags)

{
  fn_8274E398();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

