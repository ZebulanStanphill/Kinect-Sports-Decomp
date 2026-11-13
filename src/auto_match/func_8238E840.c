extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_823748D0();


void fn_8238E840(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_20 [8];
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  uVar2 = fn_82365BD8(auStack_20);
  fn_823748D0(uVar1,uVar2);
  if (*(int *)(param_2 + 4) != 0) {
    fn_822315A0();
  }
  return;
}

