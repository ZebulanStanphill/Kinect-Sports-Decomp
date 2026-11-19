extern int fn_82359C18();
extern int fn_8265CA20();
extern int fn_828E32A0();


__int64 fn_8223A580(__int64 self,unsigned int flags)

{
  fn_82359C18(self + 0x50);
  fn_82359C18(self + 0x38);
  fn_828E32A0(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

