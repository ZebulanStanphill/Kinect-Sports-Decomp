extern int fn_82C10B28();


unsigned __int64 fn_82C29390(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int * apiStack_30;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar3 = 0;
  if (*(int *)(iVar1 + 0x18) != 0) {
    piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 8);
    do {
      do {
        apiStack_30 = piVar2;
        if (apiStack_30 == (int *)0x0) {
          return uVar3;
        }
        if (*(unsigned __int64 *)(*apiStack_30 + 8) < param_2) {
          return uVar3;
        }
        piVar2 = (int *)apiStack_30[2];
      } while (apiStack_30[1] != 0);
      uVar3 = (**(int (***)())(*(int *)(iVar1 + 0x34) + 8))(*(int *)(iVar1 + 0x34));
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) - *(int *)(iVar1 + 0x74);
      *(int *)(apiStack_30[3] + 8) = apiStack_30[2];
      if (apiStack_30[2] == 0) {
        *(int *)(iVar1 + 0x14) = apiStack_30[3];
      }
      else {
        *(int *)(apiStack_30[2] + 0xc) = apiStack_30[3];
      }
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x18) - 1;
      *(int *)(iVar1 + 0x18) = (int)lVar4;
      if (lVar4 == 0) {
        *(unsigned int *)(*(int *)(iVar1 + 0x10) + 8) = 0;
        *(unsigned int *)(iVar1 + 0x14) = 0;
      }
      uVar3 = fn_82C10B28(*(unsigned int *)(iVar1 + 0x30),0x1e,&apiStack_30);
    } while (-1 < (int)uVar3);
  }
  return uVar3;
}

