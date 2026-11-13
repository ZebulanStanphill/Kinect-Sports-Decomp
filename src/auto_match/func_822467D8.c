typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82246A40();
extern int fn_82247000();
extern int fn_82247068();
extern int fn_822471C8();
extern int fn_822473D0();
extern int fn_828AAF70();
extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828B0360();
extern int fn_828B0378();
extern unsigned int lbl_8329615C;


void fn_822467D8(int param_1)

{
  bool bVar1;
  char cVar6;
  int iVar3;
  __int64 lVar2;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar7;
  int *piVar8;
  
  cVar6 = fn_828ACCE8(*(unsigned int *)(param_1 + 8));
  if (cVar6 == '\0') {
LAB_82246814:
    bVar1 = false;
  }
  else {
    cVar6 = fn_828AD740(*(unsigned int *)(param_1 + 8));
    bVar1 = true;
    if (cVar6 == '\0') goto LAB_82246814;
  }
  if (bVar1) {
    iVar3 = (**(int (***)())(**(int **)(param_1 + 0x38) + 8))();
    cVar6 = (**(int (***)())(*(int *)(iVar3 + 0x144) + 0x3c))();
    if (cVar6 != '\0') {
      cVar6 = fn_82247068(*(unsigned int *)(param_1 + 0x38),1);
      if (cVar6 == '\0') {
        lVar2 = (**(int (***)())(**(int **)(param_1 + 0x38) + 8))();
        fn_828AAF70(lVar2 + 0x144,0);
      }
    }
  }
  uVar4 = fn_82247000(*(unsigned int *)(param_1 + 0x38));
  if (uVar4 == 0) {
    if (bVar1) goto LAB_82246948;
    iVar3 = 0;
    piVar8 = &lbl_8329615C;
    lVar2 = 4;
    do {
      if (*piVar8 != 0) {
        iVar3 = iVar3 + 1;
      }
      piVar8 = piVar8 + -0xc;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    if (iVar3 != 1) goto LAB_82246948;
    cVar6 = fn_82246A40(param_1);
LAB_82246934:
    if (cVar6 == '\0') goto LAB_82246948;
LAB_8224693c:
    uVar5 = *(unsigned int *)(param_1 + 0x38);
LAB_82246940:
    uVar7 = 1;
  }
  else {
    if (uVar4 != 1) {
      if (uVar4 < 3) {
        if (bVar1) {
          cVar6 = fn_828B0360(*(unsigned int *)(param_1 + 8));
          if (cVar6 != '\0') {
            cVar6 = fn_828B0378(*(unsigned int *)(param_1 + 8));
            goto LAB_82246934;
          }
        }
        goto LAB_8224693c;
      }
      if (uVar4 != 3) goto LAB_82246948;
      uVar5 = *(unsigned int *)(param_1 + 0x38);
      if (bVar1) {
        cVar6 = fn_822473D0(uVar5);
        goto LAB_82246934;
      }
      goto LAB_82246940;
    }
    uVar5 = *(unsigned int *)(param_1 + 0x38);
    uVar7 = 0;
  }
  fn_822471C8(uVar5,uVar7);
LAB_82246948:
  iVar3 = *(int *)(param_1 + 0x38);
  uVar5 = fn_82247000(iVar3);
  *(unsigned int *)(iVar3 + 0x84) = uVar5;
  return;
}

