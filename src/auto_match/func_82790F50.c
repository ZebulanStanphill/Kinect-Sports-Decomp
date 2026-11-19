extern int fn_8267BE38();
extern int fn_82790EA0();


unsigned __int64 fn_82790F50(unsigned __int64 self,unsigned int flags)

{
  fn_82790EA0();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

