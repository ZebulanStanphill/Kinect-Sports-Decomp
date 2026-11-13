extern int fn_82822300();
extern int fn_82F6E1C8();


void fn_828252E8(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x314) == 0) || (*(unsigned int *)(*(int *)(param_1 + 0x314) + 0xc) < param_2)) {
    iVar1 = fn_82F6E1C8(0x1000,1);
    *(int *)(iVar1 + 8) = iVar1 + 0x10;
    *(unsigned int *)(iVar1 + 0xc) = 0xff0;
    iVar2 = *(int *)(param_1 + 0x314);
    if (iVar2 == 0) {
      iVar2 = param_1 + 0x30c;
    }
    fn_82822300(iVar2,iVar1);
    *(int *)(param_1 + 0x314) = iVar1;
  }
  iVar2 = *(int *)(param_1 + 0x314);
  *(unsigned int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + param_2;
  *(unsigned int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) - param_2;
  return;
}

