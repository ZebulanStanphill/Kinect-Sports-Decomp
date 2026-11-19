extern int fn_8267BE38();
extern int fn_82713380();


unsigned __int64 fn_82713740(unsigned __int64 self,unsigned int flags)

{
  fn_82713380();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

