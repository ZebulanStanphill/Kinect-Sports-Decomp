extern int fn_82FA5190();
extern int fn_8302BC00();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;


int fn_8302BC60(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = lbl_832642E0;
  RtlEnterCriticalSection(uVar3 + 0x998);
  uVar1 = param_1[1];
  iVar4 = (int)(uVar1 - 1);
  param_1[1] = iVar4;
  if (iVar4 == 0) {
    fn_8302BC00(param_1);
    uVar2 = lbl_831BC768;
    (*(int (**)())*param_1)(param_1,0);
    fn_82FA5190(uVar2,param_1);
  }
  RtlLeaveCriticalSection(uVar3 + 0x998);
  return (unsigned __int64)uVar1 - 1;
}

