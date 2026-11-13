typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82239010();
extern int fn_825178E0();
extern int fn_828A1C38();
extern int fn_828ACC40();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828C3E70();
extern int fn_828C4240();
extern unsigned int uStack_50;


__int64 fn_828C1DE0(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  __int64 lVar6;
  int *piVar7;
  unsigned char uStack_50;
  
  cVar4 = fn_828AD0F8();
  if ((cVar4 == '\0') && (cVar4 = fn_828AD488(param_1), cVar4 == '\0')) {
    cVar4 = fn_828C4240(param_1);
    bVar2 = false;
    if (cVar4 != '\0') goto LAB_828c1e30;
  }
  else {
LAB_828c1e30:
    bVar2 = true;
  }
  if (bVar2) {
    cVar4 = fn_828ACC40(param_1);
    bVar2 = true;
    if (cVar4 != '\0') goto LAB_828c1e5c;
  }
  bVar2 = false;
LAB_828c1e5c:
  if ((!bVar2) || (bVar2 = true, *(int *)(param_1 + 0x8c) == 0)) {
    bVar2 = false;
  }
  if ((!bVar2) || (lVar5 = 1, *(int *)(*(int *)(param_1 + 0x8c) + 8) != 0)) {
    lVar5 = 0;
  }
  if (lVar5 != 0) {
    fn_828C3E70(param_1);
    if (*(int *)(param_1 + 0x8c) != 0) {
      fn_828A1C38((unsigned int *)(param_1 + 0x8c));
      *(unsigned int *)(param_1 + 0x8c) = 0;
    }
    *(unsigned int *)(param_1 + 0xa0) = 0;
    piVar7 = (int *)(param_1 + 0x10c);
    lVar6 = 4;
    do {
      iVar1 = *piVar7;
      if (piVar7[-1] != iVar1) {
        uVar3 = fn_825178E0(iVar1,iVar1,piVar7[-1],uStack_50);
        fn_82239010(uVar3,*piVar7,piVar7 + 2,uStack_50);
        *piVar7 = (int)uVar3;
      }
      iVar1 = piVar7[0x10];
      if (piVar7[0xf] != iVar1) {
        uVar3 = fn_825178E0(iVar1,iVar1,piVar7[0xf],uStack_50);
        fn_82239010(uVar3,piVar7[0x10],piVar7 + 0x12,uStack_50);
        piVar7[0x10] = (int)uVar3;
      }
      lVar6 = lVar6 + -1;
      piVar7 = piVar7 + 4;
    } while (lVar6 != 0);
  }
  return lVar5;
}

