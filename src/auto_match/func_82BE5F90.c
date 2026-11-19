extern int fn_82BE56C0();
extern int fn_82BE5998();


unsigned __int64 fn_82BE5F90(unsigned __int64 self,unsigned int flags)

{
  fn_82BE5998();
  if ((flags & 1) != 0) {
    fn_82BE56C0(self);
  }
  return self;
}

