extern int fn_827F38B0();
extern int fn_827F38B8();
extern int fn_827FA500();


__int64 fn_827FA6C8(__int64 self,unsigned int flags)

{
  fn_827F38B0(self + 0x20);
  fn_827F38B8(self);
  if ((flags & 1) != 0) {
    fn_827FA500(self);
  }
  return self;
}

