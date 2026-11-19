extern int fn_8267BE38();
extern int fn_826C1AD8();
extern int fn_827121D0();


__int64 fn_8271B800(__int64 self,unsigned int flags)

{
  fn_827121D0(self + 0x30);
  fn_826C1AD8(self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

