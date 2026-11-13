extern int fn_82BD3A30();
extern int fn_82BD81E0();
extern int fn_82BD8E30();


__int64 fn_82BD4088(int param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  
  *(unsigned int *)(param_1 + 0xc) = param_4;
  *(int *)(param_1 + 8) = param_3;
  uVar3 = -(unsigned __int64)(*(int *)(param_1 + 0x24) != 1) & 2;
  lVar2 = fn_82BD81E0(*(unsigned int *)(*(int *)(param_3 + 0x18) + 0x1c) + uVar3,0x18,
                            *(unsigned int *)(param_1 + 0x14),uVar3,(int *)(param_1 + 0x10));
  if (-1 < lVar2) {
    uVar4 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar5 = 0;
      do {
        iVar1 = *(int *)(param_1 + 0x10);
        *(unsigned int *)(iVar5 + *(int *)(param_1 + 0x28)) =
             *(int *)(iVar1 + 8) * uVar4 + *(int *)(iVar1 + 4);
        fn_82BD3A30(param_1,iVar5 + *(int *)(param_1 + 0x28));
        uVar4 = uVar4 + 1;
        iVar5 = iVar5 + 8;
      } while (uVar4 < *(unsigned int *)(param_1 + 0x14));
    }
    if (*(int *)(param_1 + 0x24) == 1) {
      lVar2 = fn_82BD8E30(*(unsigned int *)(param_1 + 8),param_1 + 0x4c);
    }
  }
  return lVar2;
}

