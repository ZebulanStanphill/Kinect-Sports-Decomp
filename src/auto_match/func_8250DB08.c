extern int fn_8250DB58();
extern int fn_827F4780();


unsigned __int64 fn_8250DB08(unsigned __int64 self,unsigned int flags)

{
  fn_8250DB58();
  if ((flags & 1) != 0) {
    fn_827F4780(self);
  }
  return self;
}

