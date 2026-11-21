extern unsigned int fn_8228C280;
extern unsigned int fn_82BA02A8;
extern unsigned int lbl_821A8C90;

/* WARNING: Inlined function: __savegprlr_26 */

int fn_8228BD50(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  
  memcpy(param_1,param_2,0x1c);
  iVar4 = param_1 + 0x30;
  *(unsigned char ***)(param_1 + 0x1c) = &lbl_821A8C90;
  puVar3 = (unsigned int *)(param_1 + 0x28);
  lVar5 = 3;
  do {
    puVar3 = puVar3 + 6;
    *puVar3 = 0;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int *)(param_1 + 0x78) = (int)param_3;
  *(int *)(param_1 + 0x7c) = (int)param_4;
  *(int *)(param_1 + 0x20) = param_1;
  *(int (***)())(param_1 + 0x24) = fn_8228C280;
  *(int (***)())(param_1 + 0x28) = fn_82BA02A8;
  *(int (***)())(param_1 + 0x2c) = fn_82BA02A8;
  uVar1 = fn_8265C9E0(0x78);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = fn_82267460(uVar1,param_1 + 0x1c,0,0,param_1 + 0xc,param_3,param_4);
  }
  *(unsigned int *)(param_1 + 0x80) = uVar2;
  lVar5 = 3;
  do {
    fn_82359C18(iVar4);
    *(unsigned int *)(iVar4 + 0x10) = 0;
    lVar5 = lVar5 + -1;
    iVar4 = iVar4 + 0x18;
  } while (lVar5 != 0);
  return param_1;
}
