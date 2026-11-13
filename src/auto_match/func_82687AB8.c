extern int fn_8267B890();
extern int fn_8267C4C8();
extern int fn_82686608();
extern int fn_82686758();
extern int fn_82686BD0();
extern int fn_82687310();
extern int fn_826877D8();
extern unsigned int iStack_3c;
extern unsigned int lbl_831E7E64;
extern unsigned int uStack_40;


unsigned int fn_82687AB8(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int iVar2;
  char cVar3;
  unsigned __int64 uVar1;
  int *piVar4;
  int *piVar5;
  unsigned int uVar6;
  struct { unsigned int first; int second; } stack_pair_40;

  
  RtlEnterCriticalSection(param_1 + 0xc);
  piVar5 = (int *)(param_1 + 0x28);
  iVar2 = fn_82686758(piVar5,param_3);
  if (iVar2 < 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)((iVar2 + 1) * 0x10 + *piVar5);
  }
  if (piVar4 != (int *)0x0) {
    if (*piVar4 != 0) {
      iVar2 = piVar4[1];
      *param_2 = 2;
      param_2[1] = iVar2;
      fn_8267C4C8(iVar2);
      uVar6 = *param_2;
      goto LAB_82687b40;
    }
    cVar3 = fn_82686BD0(piVar4[1]);
    if (cVar3 != '\0') {
      iVar2 = piVar4[1];
      uVar6 = 1;
      *param_2 = 1;
      param_2[1] = iVar2;
      goto LAB_82687b40;
    }
    fn_82686608(piVar5,param_3);
  }
  uVar1 = fn_8267B890(lbl_831E7E64,0x4c,0);
  if ((uVar1 & 0xffffffff) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_82687310(uVar1,param_1,param_3);
  }
  if (iVar2 == 0) {
    uVar6 = 4;
  }
  else {
    stack_pair_40.first = 1;
    stack_pair_40.second = iVar2;
    fn_826877D8(piVar5,&stack_pair_40.first);
    param_2[1] = iVar2;
    uVar6 = 3;
    *param_2 = 3;
  }
LAB_82687b40:
  RtlLeaveCriticalSection(param_1 + 0xc);
  return uVar6;
}

