extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CF1548();
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned int
fn_82CF24D0(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,int param_5,
             int *param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  double dVar4;
  unsigned __int64 uStack_60;
  unsigned int uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0x80000000;
  dVar4 = (double)(float)(param_1 / (double)(__int64)(int)param_7);
  iVar2 = fn_82CE5410();
  if ((int)(uStack_58 & 0x3fffffff) < (int)param_7) {
    fn_82CE6310(*(unsigned int *)(iVar2 + 0x10),&uStack_60,param_7,4);
  }
  uVar3 = 0;
  if (0 < *(int *)(*(int *)(param_4 * 4 + *param_6) + 0x34)) {
    uStack_60 = uStack_60 & 0xffffffff00000000;
    fn_82CF1548(param_2,dVar4,*(unsigned int *)(param_4 * 4 + *param_6));
    if (param_5 < (((unsigned __int64)(uStack_60) >> 32) & 0xFFFFFFFF)) {
      uVar3 = *(unsigned int *)(param_5 * 4 + (((unsigned __int64)(uStack_60) >> 0) & 0xFFFFFFFF));
    }
  }
  iVar2 = fn_82CE5410();
  uVar1 = uStack_60 >> 0x20;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
              (*(int **)(iVar2 + 0x10),(int)uVar1,uStack_58 & 0x3fffffff,4);
  }
  return uVar3;
}

