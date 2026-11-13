extern int fn_82CE5410();
extern int fn_82CE6460();


void fn_82D7C2C0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  
  uVar1 = *param_1;
  *param_1 = (unsigned int)((unsigned __int64)uVar1 - 0x80);
  if ((unsigned __int64)uVar1 - 0x80 == 0) {
    uVar2 = *(unsigned int *)(param_1[2] * 4 + param_1[1] + -4);
    param_1[2] = param_1[2] - 1;
    iVar7 = fn_82CE5410();
    (**(int (***)())(**(int **)(iVar7 + 0x10) + 8))(*(int **)(iVar7 + 0x10),uVar2,0x200);
    *param_1 = 0x200;
  }
  if ((param_1[3] & 0x80000000) == 0) {
    uVar9 = (unsigned __int64)param_1[2] + 3;
    uVar3 = (uVar9 & 0xffffffff) >> 0x10;
    uVar4 = (uVar3 | uVar9 & 0xffffffff) >> 8;
    uVar5 = (uVar4 | uVar3 | uVar9 & 0xffffffff) >> 4;
    uVar6 = (uVar5 | uVar4 | uVar3 | uVar9 & 0xffffffff) >> 2;
    lVar10 = ((uVar6 | uVar5 | uVar4 | uVar3 | uVar9 & 0xffffffff) >> 1 |
             uVar6 | uVar5 | uVar4 | uVar3 | uVar9) + 1;
    if ((int)lVar10 < 1) {
      iVar7 = fn_82CE5410();
      lVar10 = 1;
      puVar8 = param_1 + 4;
    }
    else {
      if ((int)(param_1[3] & 0x3fffffff) <= (int)lVar10) {
        return;
      }
      iVar7 = fn_82CE5410();
      puVar8 = (unsigned int *)0x0;
    }
    fn_82CE6460(*(unsigned int *)(iVar7 + 0x10),param_1 + 1,4,puVar8,lVar10);
  }
  return;
}

