extern int fn_8254BAB8();


void fn_8254BC10(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  
  uVar2 = 0;
  if (*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18) >> 3 != 0) {
    lVar4 = 0;
    do {
      lVar5 = 0;
      lVar6 = 6;
      do {
        lVar3 = lVar4 + lVar5;
        uVar1 = lVar4 + 8 + lVar5;
        lVar5 = lVar5 + 1;
        *(unsigned int *)((int)((lVar3 + 2U & 0xffffffff) << 2) + *(int *)(param_2 + 0xc4)) = 0;
        *(unsigned int *)((int)((uVar1 & 0xffffffff) << 2) + *(int *)(param_2 + 0xc4)) = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0xe;
    } while (uVar2 < (unsigned int)(*(int *)(param_2 + 0x1c) - *(int *)(param_2 + 0x18) >> 3));
  }
  fn_8254BAB8(param_1,param_2,*(unsigned int *)(param_2 + 200),param_3,(int *)(param_2 + 0x18),1
                    ,1);
  fn_8254BAB8(param_1,param_2,*(unsigned int *)(param_2 + 200),param_3);
  return;
}

