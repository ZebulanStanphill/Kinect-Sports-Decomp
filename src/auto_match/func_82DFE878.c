extern int fn_82CE5410();
extern int fn_82DFC8F8();
extern int fn_82DFE6F8();


/* WARNING: Removing unreachable block (ram,0x82dfe910) */

void fn_82DFE878(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  fn_82DFC8F8();
  cVar1 = *(char *)(*(int *)(param_1 + 0x1c) + 0x20);
  piVar5 = (int *)fn_82CE5410();
  iVar3 = *piVar5;
  fVar2 = *(float *)(param_2 + 8);
  *piVar5 = (cVar1 * 0x60 + 0x7fU & 0xffffff80) + iVar3;
  iVar4 = **(int **)(param_1 + 0x3c);
  (**(int (***)())(iVar4 + 0x10))((double)fVar2,*(int **)(param_1 + 0x3c),iVar4,param_1,iVar3);
  fn_82DFE6F8(param_1,param_2,iVar3);
  piVar5 = (int *)fn_82CE5410();
  *piVar5 = iVar3;
  fn_82CE5410();
  return;
}

