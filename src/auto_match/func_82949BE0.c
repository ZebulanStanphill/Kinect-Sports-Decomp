extern int fn_82949AB0();


int fn_82949BE0(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  int iVar2;
  int count;
  int aiStack_30;
  
  uVar1 = **(unsigned int **)(param_1 + 0x104) & 0xfff00000;
  if ((**(unsigned int **)(param_1 + 0x104) & 0xfffff) == 4) {
    aiStack_30 = 0;
    count = (uVar1 == 0x70700000) + 3;
    if (count > 0) {
      do {
        fn_82949AB0(param_1,0,param_3,0,&aiStack_30);
        aiStack_30 = aiStack_30 + 1;
      } while (aiStack_30 < count);
    }
  }
  else {
    if (uVar1 == 0x70700000) {
      iVar2 = 4;
    }
    else {
      iVar2 = (uVar1 == 0x70600000) + 2;
    }
    aiStack_30 = 0;
    if (iVar2 > 0) {
      do {
        fn_82949AB0(param_1,0,param_2,0,&aiStack_30);
        aiStack_30 = aiStack_30 + 1;
      } while (aiStack_30 < iVar2);
    }
  }
  return 0;
}

