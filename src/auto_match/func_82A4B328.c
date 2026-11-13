extern int fn_82A5D068();


__int64 fn_82A4B328(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,int *param_7)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  int *piVar4;
  int aiStack_50 [20];
  
  piVar4 = (int *)(param_1 + 0x1c);
  (**(int (***)())(*(int *)(param_1 + 0x1c) + 8))(piVar4);
  puVar3 = *(unsigned int **)(param_1 + 0x16c);
  do {
    if (puVar3 == (unsigned int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (unsigned __int64)*puVar3;
      puVar3 = (unsigned int *)puVar3[1];
    }
  } while (uVar2 != (param_5 & 0xffffffff));
  lVar1 = param_3 + 4;
  if ((param_3 & 0xffffffff) == 0) {
    lVar1 = 0;
  }
  aiStack_50[0] = 0;
  lVar1 = fn_82A5D068(param_1 + 4,param_2,uVar2 + 4,lVar1,param_4,
                          *(unsigned int *)(param_1 + 0x44),*(unsigned int *)(param_1 + 0x4c),aiStack_50
                         );
  if (-1 < lVar1) {
    *param_7 = aiStack_50[0];
    *(unsigned int *)(param_1 + 0x180) = *(unsigned int *)(aiStack_50[0] + 0x1c);
  }
  (**(int (***)())(*piVar4 + 0x14))(piVar4);
  return lVar1;
}

