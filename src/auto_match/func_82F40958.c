extern int fn_82F41740();
extern int fn_82F41770();
extern unsigned int uStack_3c;


unsigned __int64 fn_82F40958(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int *puStack_40;
  unsigned int uStack_3c;
  int aiStack_38 [2];
  
  puStack_40 = (unsigned int *)(aiStack_38 + 1);
  uStack_3c = 0;
  aiStack_38[1] = 0;
  uVar1 = 0;
  if ((param_2 & 0x1ffff) != 0 || (param_2 & 0x10001) != 0) {
    if (((param_2 & 1) == 0) ||
       ((iVar2 = fn_82F41740(param_3,&uStack_3c,&puStack_40), iVar2 != 0 &&
        (puStack_40 != (unsigned int *)0x0)))) {
      aiStack_38[0] = 0;
      param_1 = *(int *)(*(int *)(param_1 + -0x18) + 4) + param_1;
      uVar1 = (**(int (***)())(*(int *)(param_1 + -0x18) + 0x50))
                        (param_1 + -0x18,*(unsigned int *)(param_3 + 0x18),param_3 + 0x3c,
                         *(unsigned int *)(param_3 + 0x48),*(unsigned int *)(param_3 + 0x44),uStack_3c,
                         puStack_40,aiStack_38);
      if (-1 < (int)uVar1) {
        if (aiStack_38[0] == 0) {
          uVar3 = *(unsigned int *)(param_3 + 0x44);
          if (((param_2 & 1) != 0) &&
             (uVar1 = fn_82F41770(param_3,*(unsigned int *)(param_3 + 0x48)), (int)uVar1 < 0))
          goto LAB_82f40a58;
        }
        else {
          uVar3 = *puStack_40;
        }
        if (0xffff < uVar3) {
          *(unsigned int *)(param_3 + 8) = 1;
        }
      }
    }
    else {
      uVar1 = 0xffffffff80004005;
    }
  }
LAB_82f40a58:
  *(unsigned int *)(param_3 + 0x48) = 0;
  *(unsigned int *)(param_3 + 0x44) = 0;
  return uVar1;
}

