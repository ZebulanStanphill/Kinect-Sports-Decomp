extern int fn_82FA5190();
extern int fn_8302B350();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E0;


__int64 fn_8302B3D0(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  
  lVar3 = (unsigned __int64)lbl_832642E0 + 0x350;
  if ((param_1[10] & 0x40000000) == 0) {
    lVar3 = (unsigned __int64)lbl_832642E0 + 0x328;
  }
  RtlEnterCriticalSection(lVar3);
  uVar1 = param_1[1];
  iVar4 = (int)((unsigned __int64)uVar1 - 1);
  param_1[1] = iVar4;
  if (iVar4 == 0) {
    fn_8302B350(param_1);
    uVar2 = lbl_831BC768;
    (**(int (***)())*param_1)(param_1,0);
    fn_82FA5190(uVar2,param_1);
  }
  RtlLeaveCriticalSection(lVar3);
  return (unsigned __int64)uVar1 - 1;
}

