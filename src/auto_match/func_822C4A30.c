extern int fn_822B8700();
extern int fn_822BD338();
extern int fn_827F57E8();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822C4A30(int param_1,unsigned int *param_2)

{
  int iVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  
  cVar2 = fn_822BD338((unsigned __int64)*param_2 + 4,0xffffffff821aca94);
  if (cVar2 == '\0') {
    cVar2 = fn_822BD338((unsigned __int64)*param_2 + 4,0xffffffff821ace70);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x118);
      fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(unsigned int *)(iVar1 + 0x10));
      uVar4 = *(unsigned int *)(param_1 + 0x118);
      *(unsigned int *)(*(int *)(iVar1 + 0x10) + 0x108) = lbl_821917B4;
      fn_822B8700(uVar4,1);
      uVar4 = 0;
      goto LAB_822c4b64;
    }
    cVar2 = fn_822BD338((unsigned __int64)param_2[2] + 4,0xffffffff821ace70);
    if ((cVar2 == '\0') &&
       (cVar2 = fn_822BD338((unsigned __int64)param_2[2] + 4,0xffffffff821aca94), cVar2 == '\0')) {
      return;
    }
    iVar1 = *(int *)(param_1 + 0x118);
    fn_827F57E8((double)ltcg_pool_0_0f,(double)lbl_8218E8FC,*(unsigned int *)(iVar1 + 0x10));
    uVar3 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x118);
    fn_827F57E8((double)lbl_821CA460,(double)lbl_8218E8FC,*(unsigned int *)(iVar1 + 0x10));
    uVar3 = 1;
  }
  uVar4 = *(unsigned int *)(param_1 + 0x118);
  *(unsigned int *)(*(int *)(iVar1 + 0x10) + 0x108) = lbl_821917B4;
  fn_822B8700(uVar4,uVar3);
  uVar4 = 1;
LAB_822c4b64:
  *(unsigned int *)(*(int *)(param_1 + 0x118) + 0x60) = uVar4;
  return;
}

