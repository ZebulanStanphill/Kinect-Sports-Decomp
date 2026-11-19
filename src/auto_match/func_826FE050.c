extern int fn_8267BE38();
extern int fn_826FDF58();


unsigned __int64 fn_826FE050(unsigned __int64 self,unsigned int flags)

{
  fn_826FDF58();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

