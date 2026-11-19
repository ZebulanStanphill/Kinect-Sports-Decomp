extern int fn_8267BE38();
extern int fn_826C1AD8();
extern int fn_827A80F8();


__int64 fn_827AE4F8(__int64 self,unsigned int flags)

{
  fn_827A80F8(self + 0x30);
  fn_826C1AD8(self);
  if ((flags & 1) != 0) {
    fn_8267BE38(self);
  }
  return self;
}

