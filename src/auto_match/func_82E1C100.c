extern int fn_8265CA20();
extern int fn_82E1C040();


unsigned __int64 fn_82E1C100(unsigned __int64 self,unsigned int flags)

{
  fn_82E1C040();
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

