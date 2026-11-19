extern int fn_8267BE38();
extern int fn_82766B58();


unsigned __int64 fn_82768A40(unsigned __int64 self,unsigned int flags)

{
  fn_82766B58();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

