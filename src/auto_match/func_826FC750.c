extern int fn_8267BE38();
extern int fn_826FC640();


unsigned __int64 fn_826FC750(unsigned __int64 self,unsigned int flags)

{
  fn_826FC640();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

