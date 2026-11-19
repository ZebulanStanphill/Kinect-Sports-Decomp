extern int fn_82359C18();
extern int fn_8265CA20();
extern unsigned int lbl_821C0648;


unsigned int * fn_824C2AA8(unsigned int *self,unsigned int flags)

{
  unsigned int *puVar1;
  
  fn_82359C18(self + 4);
  puVar1 = (unsigned int *)self[2];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  *self = &lbl_821C0648;
  if ((flags & 1) != 0) {
    fn_8265CA20(self);
  }
  return self;
}

