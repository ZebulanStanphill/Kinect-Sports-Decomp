extern unsigned int *auStack_48;
extern int fn_82E41F18();
extern int fn_82E74A28();


/* WARNING: Type propagation algorithm not settling */

__int64 fn_82E421F8(int param_1,unsigned int param_2,int *param_3,unsigned __int64 param_4)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int aiStack_50 [2];
  unsigned __int64 auStack_48;
  
  if (param_3 == (int *)0x0) {
    return -0x7ff8ffa9;
  }
  param_2 = param_2 & 0xffff;
  if ((0x7f < param_2) || (iVar2 = (param_2 + 0x1b) * 4, *(int *)(iVar2 + param_1) == 0)) {
    return -0x3ff2c94d;
  }
  aiStack_50[1] = 0;
  auStack_48 = 0x7fffffffffffffff;
  if (*(int *)(param_1 + 0x594) == 0) {
    (**(int (***)())(*param_3 + 0x8c))(param_3,&auStack_48);
    (**(int (***)())(*param_3 + 0xb4))(param_3,aiStack_50 + 1);
    piVar1 = *(int **)(iVar2 + param_1);
    uVar3 = (**(int (***)())(*piVar1 + 4))(piVar1,param_3);
    lVar4 = fn_82E41F18(param_1,uVar3);
    if (-1 < lVar4) {
      aiStack_50[0] = 0;
      lVar4 = (**(int (***)())(*piVar1 + 8))
                        (piVar1,param_3,param_4,*(unsigned int *)(param_1 + 0x5a0),aiStack_50);
      if (-1 < lVar4) {
        if (aiStack_50[0] != 0) {
          lVar4 = fn_82E74A28(*(unsigned int *)(param_1 + 0x4b0),*(unsigned int *)(param_1 + 0x5a0))
          ;
        }
        piVar1 = *(int **)((param_2 + 0xac) * 4 + param_1);
        *piVar1 = *piVar1 + 1;
        if (*(int *)(param_1 + 0x5c0) == 0) {
          return lVar4;
        }
        uVar3 = 0;
        goto LAB_82e4236c;
      }
    }
  }
  else {
    lVar4 = -0x3ff2c94b;
  }
  iVar2 = *(int *)((param_2 + 0xac) * 4 + param_1);
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  if (*(int *)(param_1 + 0x5c0) == 0) {
    return lVar4;
  }
  uVar3 = 1;
LAB_82e4236c:
  (**(int (***)())(**(int **)(param_1 + 0x5c0) + 0xc))(*(int **)(param_1 + 0x5c0),uVar3,1);
  return lVar4;
}

