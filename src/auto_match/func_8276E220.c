extern int fn_8267BE38();
extern int fn_8276E010();


unsigned __int64 fn_8276E220(unsigned __int64 self,unsigned int flags)

{
  fn_8276E010();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

