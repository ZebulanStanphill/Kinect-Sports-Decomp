typedef unsigned char bool;
extern int fn_82BD51F0();
extern int fn_82BD6260();
extern int fn_82BDC130();
extern unsigned int lbl_821AAD20;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82BD6990(__int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int *puVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  
  lVar4 = param_1 + 0x54;
  XMsgCancelIORequest(param_1 + 0xa0,1);
  iVar2 = (int)param_1;
  uVar3 = *(unsigned int *)(iVar2 + 0x54);
  while (uVar3 != 0) {
    do {
      puVar5 = (unsigned int *)lVar4;
      uVar3 = *puVar5;
      if (uVar3 != 2) {
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)uVar3,0,lVar4);
          *puVar5 = uVar1;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(3,0,lVar4);
        *puVar5 = uVar1;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar3 == 2) goto LAB_82bd6a3c;
    do {
      if (*puVar5 != 1) {
        if (in_RESERVE != '\0') {
          uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar5,0,lVar4);
          *puVar5 = uVar3;
          in_cr0 = 2;
        }
        break;
      }
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed(0,0,lVar4);
        *puVar5 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    uVar3 = *puVar5;
  }
LAB_82bd6a48:
  if (*(int *)(iVar2 + 0xc) != 0) {
    XamVoiceClose();
    *(unsigned int *)(iVar2 + 0xc) = 0;
  }
  fn_82BDC130(*(unsigned int *)(iVar2 + 8));
  *(unsigned int *)(iVar2 + 0xc4) = lbl_821AAD20;
  fn_82BD51F0(*(unsigned int *)(iVar2 + 0x9c),param_1);
  *(unsigned int *)(iVar2 + 4) = 1;
  fn_82BD6260(*(unsigned int *)(iVar2 + 0x9c));
  uVar3 = 0;
  if (*(int *)(iVar2 + 0x2c) != 0) {
    param_1 = param_1 + 0x20;
    do {
      (**(int (***)())(**(int **)((int)param_1 + -0x10) + 0xc))();
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 4;
      *(unsigned int *)param_1 = 0;
    } while (uVar3 < *(unsigned int *)(iVar2 + 0x2c));
  }
  return;
LAB_82bd6a3c:
  do {
  } while (*puVar5 != 0);
  goto LAB_82bd6a48;
}

