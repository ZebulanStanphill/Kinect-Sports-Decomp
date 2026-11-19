extern int fn_8267BE38();
extern int fn_8279DA20();


unsigned __int64 fn_8279E018(unsigned __int64 self,unsigned int flags)

{
  fn_8279DA20();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

