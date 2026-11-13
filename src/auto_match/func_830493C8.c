extern unsigned int *auStack_28;
extern int fn_83048F80();
extern int fn_8307E570();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


unsigned __int64 fn_830493C8(int param_1,unsigned int *param_2,int param_3,int param_4,int param_5)

{
  unsigned int *puVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
  int iStack_30;
  int iStack_2c;
  unsigned int auStack_28;
  
  puVar4 = (unsigned int *)(param_4 + param_5);
  iVar3 = 0;
  uVar5 = *puVar4;
  puVar1 = puVar4;
  while (uVar5 < *param_2) {
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + 1;
    uVar5 = *puVar1;
  }
  iVar6 = *(int *)(param_3 + 0x1c) * iVar3;
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = puVar4[iVar3 + -1];
  }
  iStack_30 = *param_2 - uVar5;
  iVar3 = fn_83048F80(*(int *)(param_1 + 0x30) + iVar6 + param_5,
                            *(int *)(param_1 + 0x2c) - iVar6,&iStack_30,&iStack_2c,&auStack_28);
  if (iVar3 == 1) {
    fn_8307E570(*(unsigned int *)(param_1 + 0x28),0,iVar6 * 8 + iStack_2c,auStack_28);
    uVar2 = 1;
    *param_2 = *param_2 - iStack_30;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

