extern int fn_8267BE38();
extern int fn_82725A58();


unsigned __int64 fn_82726200(unsigned __int64 self,unsigned int flags)

{
  fn_82725A58();
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

