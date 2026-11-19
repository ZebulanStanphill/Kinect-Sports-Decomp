extern int fn_8267BE38();
extern int fn_82772B80();


unsigned __int64 fn_82772DF8(unsigned __int64 self,unsigned int flags)

{
  fn_82772B80();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

