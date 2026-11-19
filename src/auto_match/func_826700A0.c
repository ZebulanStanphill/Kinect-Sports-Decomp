extern int fn_8266C828();
extern int fn_8266EC60();


void fn_826700A0(int self)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(self + 0xc);
  if (iVar1 != 0) {
    uVar2 = fn_8266EC60();
    fn_8266C828(uVar2,iVar1);
  }
  return;
}

