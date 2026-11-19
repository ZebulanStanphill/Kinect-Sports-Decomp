extern int fn_8267BE38();
extern int fn_8278AEA0();


unsigned __int64 fn_8278AF00(unsigned __int64 self,unsigned int flags)

{
  fn_8278AEA0();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

