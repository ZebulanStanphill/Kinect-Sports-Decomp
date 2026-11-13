extern unsigned int *auStack_30;
extern int fn_8265C990();
extern int memcpy();


unsigned __int64 fn_82A81840(int param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int auStack_30;
  
  uVar3 = (**(int (***)())*param_2)(param_2,0xffffffff82089748,(unsigned int *)(param_1 + 8));
  if (-1 < (__int64)uVar3) {
    uVar3 = (**(int (***)())*param_2)(param_2,0xffffffff82089db0,param_1 + 0xc);
    uVar3 = -(unsigned __int64)(uVar3 != 0xffffffff80004002) & uVar3;
    if (-1 < (int)uVar3) {
      piVar1 = *(int **)(param_1 + 8);
      auStack_30 = 0;
      iVar4 = (**(int (***)())(*piVar1 + 0xc))(piVar1,&auStack_30);
      uVar2 = auStack_30;
      if (-1 < iVar4) {
        memcpy(param_1 + 100,auStack_30,0x10);
        fn_8265C990(uVar2,0x20970000);
      }
    }
  }
  return uVar3;
}

