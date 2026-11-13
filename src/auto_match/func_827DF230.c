extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_822315A0();
extern int fn_823F2E20();
extern int fn_8256BE68();
extern int fn_827DF1D0();
extern int fn_827E2598();
extern int fn_827E2790();
extern unsigned int iStack_44;


void fn_827DF230(__int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned char auStack_50 [8];
  unsigned char auStack_48 [4];
  int iStack_44;
  
  RtlEnterCriticalSection(param_1 + 400);
  lVar1 = fn_827DF1D0(param_1,param_2);
  if (lVar1 == 0) {
    *param_3 = 0;
    fn_8256BE68(auStack_50,0);
    fn_823F2E20(param_4,auStack_50);
  }
  else {
    uVar3 = fn_827E2598(lVar1);
    *param_3 = uVar3;
    uVar2 = fn_827E2790(auStack_48,lVar1);
    fn_823F2E20(param_4,uVar2);
    if (iStack_44 != 0) {
      fn_822315A0();
    }
  }
  RtlLeaveCriticalSection(param_1 + 400);
  return;
}

