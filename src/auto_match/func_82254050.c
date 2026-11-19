extern int fn_822315A0();
extern int fn_82359C18();
extern int fn_8265CA20();
extern int fn_828E32A0();


int fn_82254050(int self,int flags)

{
  if (*(unsigned int *)(self + 0x74) != 0) {
    fn_822315A0(*(int *)(self + 0x74));
  }
  if (*(unsigned int *)(self + 0x6c) != 0) {
    fn_822315A0(*(unsigned int *)(self + 0x6c));
  }
  fn_82359C18(self + 0x50);
  fn_82359C18(self + 0x38);
  fn_828E32A0(self);
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

