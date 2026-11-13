extern int fn_8267C4C8();
extern int fn_82687270();
extern int fn_826DBE10();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;


void fn_826DDC60(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iStack_40;
  int iStack_3c;
  unsigned int *puStack_38;
  int *piStack_34;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x74) < 2) {
    RtlEnterCriticalSection(param_1 + 0xac);
    iVar1 = param_1;
  }
  iStack_3c = (int)param_3;
  iStack_40 = 0;
  if ((param_3 & 0xffffffff) != 0) {
    fn_8267C4C8(param_3);
  }
  piStack_34 = &iStack_40;
  puStack_38 = param_2;
  fn_826DBE10(param_1 + 200,param_1 + 200,&puStack_38,*param_2 >> 8 ^ *param_2);
  if ((iStack_40 == 0) && (iStack_3c != 0)) {
    fn_82687270();
  }
  if (iVar1 != 0) {
    RtlLeaveCriticalSection(iVar1 + 0xac);
  }
  return;
}

