extern int fn_82D839C0();
extern int fn_82DAF5A0();


int fn_82DA3170(unsigned int *self)

{
  unsigned int iVar1;
  
  if ((self[10] == 0) || (self[10] == 1)) {
    (*(int (**)())(*self + 0x10))(self);
  }
  if ((self[10] == 0) || (self[10] == 2)) {
    (*(int (**)())(*self + 0x14))(self);
  }
  if ((self[10] == 0) || (self[10] == 3)) {
    (*(int (**)())(*self + 0x18))(self);
  }
  if ((self[10] != 0) && (iVar1 = fn_82D839C0(self[3]), iVar1 != 0)) {
    fn_82DAF5A0(self[3]);
  }
  return self[10];
}

