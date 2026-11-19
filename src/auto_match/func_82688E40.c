extern int fn_8267BE38();
extern int fn_82688D30();


unsigned __int64 fn_82688E40(unsigned __int64 self,unsigned int flags)

{
  fn_82688D30();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

