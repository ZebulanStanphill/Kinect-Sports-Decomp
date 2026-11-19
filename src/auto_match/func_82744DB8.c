extern int fn_8267BE38();
extern int fn_82743B80();


unsigned __int64 fn_82744DB8(unsigned __int64 self,unsigned int flags)

{
  fn_82743B80();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

