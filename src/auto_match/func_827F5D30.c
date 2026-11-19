extern int fn_827F38B0();
extern int fn_827F38B8();
extern int fn_827F4780();


__int64 fn_827F5D30(__int64 self,unsigned int flags)

{
  fn_827F38B0(self + 0x48);
  fn_827F38B8(self);
  if ((flags & 1) != 0) {
    fn_827F4780(self);
  }
  return self;
}

