extern unsigned int *auStack_2c;
extern int fn_82681898();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696D38();
extern int fn_82697610();
extern int fn_8269A1F0();
extern int fn_826BC950();
extern int fn_82F6A3E8();


void fn_826A6AC0(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned int *puStack_30;
  unsigned int auStack_2c [11];
  
  if (*(int *)(param_1 + 0x1c) < 1) {
    return;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  uVar6 = 10;
  uVar4 = fn_826957D0(param_1,0);
  fn_82696D38(&puStack_30,uVar4,uVar2,0xffffffffffffffff,0);
  lVar5 = 0;
  if (*(int *)(param_1 + 0x1c) < 2) {
    if ((1 < puStack_30[4]) && (*(char *)*puStack_30 == '0')) {
      cVar1 = ((char *)*puStack_30)[1];
      lVar5 = 1;
      uVar6 = 8;
      if ((cVar1 == 'x') || (cVar1 == 'X')) {
        uVar6 = 0x10;
        lVar5 = 2;
      }
    }
LAB_826a6b4c:
    uVar3 = *puStack_30;
    auStack_2c[0] = 0;
    uVar4 = fn_82F6A3E8((unsigned __int64)*puStack_30 + lVar5,auStack_2c,uVar6);
    if ((((unsigned __int64)uVar3 + lVar5 & 0xffffffff) != (unsigned __int64)auStack_2c[0]) || ((int)uVar6 == 8))
    {
      fn_8269A1F0(*(unsigned int *)(param_1 + 4),uVar4);
      goto LAB_826a6be4;
    }
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    uVar6 = fn_82697610(uVar4,uVar2);
    if ((1 < (int)uVar6) && ((int)uVar6 < 0x25)) goto LAB_826a6b4c;
  }
  fn_826BC950();
  fn_82681898(*(unsigned int *)(param_1 + 4));
LAB_826a6be4:
  uVar3 = puStack_30[2];
  puStack_30[2] = (unsigned int)((unsigned __int64)uVar3 - 1);
  if ((unsigned __int64)uVar3 - 1 == 0) {
    fn_826944C8(puStack_30);
  }
  return;
}

