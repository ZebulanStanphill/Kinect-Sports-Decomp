extern int fn_82902360();
extern int fn_82F6DFB0();


unsigned __int64 fn_829025C0(int param_1,int param_2,double *param_3)

{
  unsigned int *puVar1;
  int iVar3;
  unsigned __int64 uVar2;
  double dStack_30;
  double dStack_28;
  
  puVar1 = *(unsigned int **)(*(int *)(*(int *)(param_1 + 8) + 0x14) + param_2 * 4);
  if ((*puVar1 & 0x80) == 0) {
    uVar2 = fn_82902360(param_1,param_2,&dStack_30);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    if (dStack_30 != dStack_28) {
      return 0xffffffff80004005;
    }
    iVar3 = fn_82F6DFB0(dStack_30);
    if (iVar3 == 0) {
      return 0xffffffff80004005;
    }
    if (param_3 != (double *)0x0) {
      *param_3 = dStack_30;
    }
  }
  else {
    iVar3 = fn_82F6DFB0(*(unsigned __int64 *)(puVar1 + 8));
    if (iVar3 == 0) {
      return 0xffffffff80004005;
    }
    if (param_3 != (double *)0x0) {
      *param_3 = *(double *)(puVar1 + 8);
    }
  }
  return 0;
}

