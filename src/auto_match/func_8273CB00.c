extern int fn_826944C8();
extern int fn_82696958();
extern int fn_82696D38();


void fn_8273CB00(int param_1,int *param_2,unsigned char *param_3)

{
  unsigned char bVar1;
  int iVar2;
  __int64 lVar3;
  int aiStack_20 [4];
  
  iVar2 = *(int *)(*param_2 + 0x10) + *(int *)(param_1 + 8);
  *(int *)(param_1 + 8) = iVar2;
  bVar1 = *param_3;
  if (2 < bVar1) {
    if (bVar1 < 5) {
      *(int *)(param_1 + 8) = iVar2 + 4;
    }
    else if (bVar1 == 5) {
      fn_82696D38(aiStack_20,param_3,*(unsigned int *)(param_1 + 4),0xffffffffffffffff,0);
      *(int *)(param_1 + 8) = *(int *)(aiStack_20[0] + 0x10) + *(int *)(param_1 + 8);
      lVar3 = (unsigned __int64)*(unsigned int *)(aiStack_20[0] + 8) - 1;
      *(int *)(aiStack_20[0] + 8) = (int)lVar3;
      if (lVar3 == 0) {
        fn_826944C8(aiStack_20[0]);
      }
    }
    else if (bVar1 == 6) {
      iVar2 = fn_82696958(param_3,*(unsigned int *)(param_1 + 4));
      (**(int (***)())(*(int *)(iVar2 + 0x10) + 0x20))
                (iVar2 + 0x10,(unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x78,param_1,0,0);
    }
  }
  return;
}

