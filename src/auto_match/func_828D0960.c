typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_8288CBD8();
extern int fn_828A0AC8();
extern int fn_828AC488();
extern int fn_828ACCE8();
extern int fn_828AD0F8();
extern int fn_828AD488();
extern int fn_828AD740();
extern int fn_828CFC68();
extern int fn_828D0590();
extern int fn_828D0890();
extern int memmove();


void fn_828D0960(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  char cVar4;
  unsigned __int64 uVar3;
  bool bVar5;
  int *piVar6;
  unsigned int auStack_30 [12];
  
  cVar4 = fn_828ACCE8(param_2);
  if (((cVar4 != '\0') && (cVar4 = fn_828AD740(param_2), cVar4 != '\0')) &&
     ((cVar4 = fn_828AD0F8(param_2), cVar4 != '\0' ||
      (cVar4 = fn_828AD488(param_2), cVar4 != '\0')))) {
    cVar4 = fn_828A0AC8(param_2);
    bVar5 = true;
    if (cVar4 != '\0') goto LAB_828d09e0;
  }
  bVar5 = false;
LAB_828d09e0:
  piVar1 = *(int **)(param_1 + 8);
  piVar6 = *(int **)(param_1 + 4);
  if (piVar6 != piVar1) {
    do {
      if (*(int *)(*(int *)(*piVar6 + 8) + 0x28) == *(int *)(param_2 + 0x28)) break;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar1);
    if (piVar6 != piVar1) {
      iVar2 = *piVar6;
      cVar4 = fn_828D0590(iVar2);
      if (cVar4 == '\0') {
        return;
      }
      memmove(piVar6,piVar6 + 1,(*(int *)(param_1 + 8) - (int)(piVar6 + 1) >> 2) << 2);
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
      if (iVar2 == 0) {
        return;
      }
      if (*(char *)(iVar2 + 0xc) != '\0') {
        fn_828CFC68(iVar2);
      }
      fn_828AC488(iVar2 + 0x18);
      fn_8265CA20(iVar2);
      return;
    }
  }
  if (bVar5) {
    uVar3 = fn_8265C9E0(0x34);
    if ((uVar3 & 0xffffffff) == 0) {
      auStack_30[0] = 0;
      fn_8288CBD8(param_1 + 4,auStack_30);
    }
    else {
      auStack_30[0] = fn_828D0890(uVar3,param_2);
      fn_8288CBD8(param_1 + 4,auStack_30);
    }
  }
  return;
}

