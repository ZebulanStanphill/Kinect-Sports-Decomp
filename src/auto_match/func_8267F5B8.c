extern int fn_8267BE38();
extern int fn_8267EE90();


unsigned __int64 fn_8267F5B8(unsigned __int64 self,unsigned int flags)

{
  fn_8267EE90();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

