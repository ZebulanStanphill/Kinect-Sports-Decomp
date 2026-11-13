extern int fn_82CE5410();
extern int fn_82D3BE58();
extern int fn_82D40860();
extern unsigned int lbl_8205751C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82D68AD0(unsigned int *param_1,int param_2,unsigned int *param_3,int param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  __int64 lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  param_2 = param_2 - (int)param_1;
  param_4 = param_4 - (int)param_1;
  dVar8 = (double)lbl_8205751C;
  lVar5 = 2;
  do {
    if (*(int *)(param_2 + (int)param_1) == 0) {
      *(unsigned int *)(param_4 + (int)param_1) = 0;
    }
    else {
      iVar1 = **(int **)*param_1;
      iVar3 = fn_82CE5410();
      iVar3 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x40);
      *(unsigned short *)(iVar3 + 4) = 0x40;
      dVar7 = (double)*(float *)(iVar1 + 0x10);
      dVar6 = (double)fn_82D40860(iVar1);
      uVar4 = fn_82D3BE58((double)(float)((double)(float)(dVar6 + dVar7) + dVar8),iVar3,
                           iVar1 + 0x20,iVar1 + 0x30);
      if (param_3 != (unsigned int *)0x0) {
        uVar2 = *(unsigned int *)(*(int *)*param_1 + 8);
        param_3[3] = *(int *)*param_1;
        param_3[2] = uVar2;
      }
      *param_3 = uVar4;
      param_3[1] = 0xffffffff;
      *(unsigned int *)(param_4 + (int)param_1) = *(unsigned int *)*param_1;
      *(unsigned int **)*param_1 = param_3;
    }
    lVar5 = lVar5 + -1;
    param_3 = param_3 + 4;
    param_1 = param_1 + 1;
  } while (lVar5 != 0);
  return;
}

