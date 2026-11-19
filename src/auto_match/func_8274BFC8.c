extern int fn_8267BE38();
extern int fn_8274BA20();


unsigned __int64 fn_8274BFC8(unsigned __int64 self,unsigned int flags)

{
  fn_8274BA20();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

