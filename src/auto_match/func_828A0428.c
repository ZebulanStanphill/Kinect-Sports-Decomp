typedef unsigned char bool;
extern unsigned int *auStack_44;
extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_60;
extern int fn_828A7F70();
extern int fn_8265CA20();
extern int fn_828A2058();
extern int fn_828A7F70();
extern int fn_828E2F58();
extern int fn_828E35B8();
extern int fn_828E3D60();
extern int fn_828E4F28();
extern int fn_82BA02A8();
extern unsigned int uStack_34;


unsigned int * fn_828A0428(unsigned int *param_1,unsigned __int64 param_2)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_60 [4];
  unsigned int auStack_5c;
  unsigned int auStack_50 [3];
  unsigned char auStack_44 [4];
  unsigned int *puStack_40;
  unsigned char uStack_34;

  auStack_5c = 0;
  uVar2 = fn_828A7F70(0x10);
  bVar1 = (uVar2 & 0xffffffff) == 0;
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    fn_828A2058(auStack_50,auStack_60);
    fn_828E2F58(auStack_44,auStack_60,auStack_60);
    uStack_34 = auStack_60[0];
    uVar3 = fn_828A7F70(uVar2,auStack_50,param_2);
  }
  *param_1 = (int)uVar3;
  fn_828E35B8(param_1 + 1,uVar3);
  fn_82BA02A8(param_1,uVar3,uVar3);
  if (!bVar1) {
    fn_828E4F28(&auStack_5c,auStack_44,*puStack_40);
    fn_8265CA20(puStack_40);
    fn_828E3D60(auStack_50);
    fn_8265CA20(auStack_50[0]);
  }
  param_1[2] = **(unsigned int **)*param_1;
  RtlInitializeCriticalSection(param_1 + 3);
  return param_1;
}
