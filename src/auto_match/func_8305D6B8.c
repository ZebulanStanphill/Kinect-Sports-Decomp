extern int fn_828106A0();
extern int fn_82810868();
extern void fn_82810A50(unsigned __int64,float);
extern unsigned int fn_8305F7A0();


void fn_8305D6B8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 alStack_40 [2];
  
  fn_828106A0(param_2);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar4 = 0;
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      uVar1 = fn_8305F7A0(*(unsigned int *)(param_1 + 0x28),
                           *(unsigned int *)(iVar3 + *(int *)(param_1 + 0x2c)));
      fn_82810868(alStack_40,param_2,uVar1);
      iVar2 = *(int *)(param_1 + 0x30);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < iVar2);
  }
  alStack_40[0] = (__int64)iVar2;
  fn_82810A50(param_2,(float)alStack_40[0]);
  return;
}

