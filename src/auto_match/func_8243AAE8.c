typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_8242C6A0();
extern int fn_8242CFE0();
extern int fn_8242D0B8();
extern int fn_82437EC8();
extern int fn_8243AEE8();
extern int fn_8243B6E8();
extern int fn_8243B938();
extern int fn_8243E1C0();
extern int fn_8243EB18();
extern int fn_82508078();
extern unsigned int lbl_821CA460;
extern unsigned int lbl_832975B0;


unsigned __int64 fn_8243AAE8(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int *piVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned int uVar9;
  bool bVar10;
  __int64 lVar11;
  
  iVar5 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar5 = fn_82250A18();
  }
  if (*(char *)(iVar5 + 4) == '\0') {
    iVar5 = (**(int (***)())(*param_2 + 0x24))(param_2);
    if (iVar5 != 0) goto LAB_8243ab40;
    if (*(char *)(*(int *)(param_1 + 0x40) + 0x214) != '\0') {
      iVar5 = *(int *)(param_1 + 0x40);
      if (*(int *)(iVar5 + 0x1d4) == (*(int *)(iVar5 + 0x1c8) - *(int *)(iVar5 + 0x1c4) >> 2) + -1)
      goto LAB_8243ab40;
      goto LAB_8243ab80;
    }
  }
  iVar5 = param_2[5];
  iVar8 = 0;
  if ((iVar5 == 0x11) || (bVar10 = false, iVar5 == 0x13)) {
    bVar10 = true;
  }
  if (!bVar10) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (((*(char *)(iVar1 + 0x1e8) != '\0') ||
      (*(char *)(*(int *)(*(int *)(iVar1 + 0x1d8) + 0x174) + 0xc9) != '\0')) || (iVar5 == 0x13)) {
    return 1;
  }
  if (*(int *)(param_2[0x10] + 0x14c) + 1U < *(unsigned int *)(param_2[0x10] + 0x158)) {
    bVar10 = true;
  }
  else {
    bVar10 = (unsigned __int64)*(unsigned int *)(param_2[0x10] + 0x148) + 1 <
             (unsigned __int64)*(unsigned int *)(param_2[0x10] + 0x154);
  }
  if (!bVar10) {
    fn_8243E1C0(iVar1 + 0x1f0,(unsigned __int64)(unsigned int)param_2[0x10] + 0x120,1);
    iVar5 = *(int *)(*(int *)(param_1 + 0x40) + 0x1f8);
    iVar1 = *(int *)(*(int *)(param_1 + 0x40) + 500);
    fn_8243EB18(iVar1,iVar5,(iVar5 - iVar1) / 0x5c,0);
    iVar5 = *(int *)(param_1 + 0x40);
    iVar1 = *(int *)(*(int *)(iVar5 + 0x1d8) + 0xa0);
    if ((((iVar1 == 0) || (*(int *)(iVar1 + 0x40) != 1)) &&
        ((iVar1 = *(int *)(*(int *)(iVar5 + 0x1d8) + 0xa0), iVar1 == 0 ||
         (*(int *)(iVar1 + 0x40) != 2)))) &&
       (uVar9 = 0, (*(int *)(iVar5 + 0x1f8) - *(int *)(iVar5 + 500)) / 0x5c != 0)) {
      do {
        piVar6 = (int *)(*(int *)(*(int *)(param_1 + 0x40) + 500) + iVar8);
        piVar2 = *(int **)(**(int **)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d8) + 8) + *piVar6 * 4)
        ;
        uVar4 = fn_822ABA88((double)(unsigned int)piVar6[0x11],*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
        fn_8242C6A0(*(unsigned int *)(iVar5 + 0x1d8),uVar4);
        iVar5 = *(int *)(param_1 + 0x40);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + 0x5c;
      } while (uVar9 < (unsigned int)((*(int *)(iVar5 + 0x1f8) - *(int *)(iVar5 + 500)) / 0x5c));
    }
    uVar3 = lbl_821CA460;
    iVar8 = *(int *)(param_1 + 0x40);
    bVar10 = (__int64)(*(int *)(iVar8 + 0x1c8) - *(int *)(iVar8 + 0x1c4) >> 2) - 1U !=
             (unsigned __int64)*(unsigned int *)(iVar8 + 0x1d4);
    if ((*(int *)(iVar5 + 0x1c8) - *(int *)(iVar5 + 0x1c4) & 0xfffffffcU) == 8) {
      iVar8 = *(int *)(param_1 + 0x40);
      bVar10 = (__int64)(*(int *)(iVar8 + 0x1c8) - *(int *)(iVar8 + 0x1c4) >> 2) - 1U ==
               (unsigned __int64)*(unsigned int *)(iVar8 + 0x1d4) && bVar10;
    }
    if (bVar10) {
      lVar11 = 2;
      puVar7 = (unsigned int *)
               (*(int *)(*(int *)(*(int *)(*(int *)(iVar5 + 0x1d8) + 0x174) + 0x9c) + 0x1a8) + 0xc);
      do {
        puVar7 = puVar7 + 0x7c;
        *puVar7 = uVar3;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      fn_82437EC8(param_1,4);
      fn_8242CFE0(*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x1d8),0,1,0);
      fn_8242CFE0(*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x1d8),1,0,0);
      fn_8242D0B8(*(unsigned int *)(*(int *)(param_1 + 0x40) + 0x1d8),1);
      iVar5 = *(int *)(param_1 + 0x40);
      if (*(int *)(iVar5 + 0x1d4) == (*(int *)(iVar5 + 0x1c8) - *(int *)(iVar5 + 0x1c4) >> 2) + -1)
      {
        return 0;
      }
      fn_82508078(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x40) + 0x1d8) + 0xa4),
                        0xffffffff821b9470,0);
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x40);
    if (*(int *)(iVar8 + 0x1d4) == (*(int *)(iVar8 + 0x1c8) - *(int *)(iVar8 + 0x1c4) >> 2) + -1) {
      if (((*(int *)(iVar5 + 0x1c8) - *(int *)(iVar5 + 0x1c4) & 0xfffffffcU) == 4) &&
         ((iVar5 = *(int *)(*(int *)(iVar5 + 0x1d8) + 0xa0), iVar5 == 0 ||
          (*(int *)(iVar5 + 0x40) != 1)))) {
        fn_8243B938(param_1);
      }
LAB_8243ab40:
      uVar4 = fn_8243AEE8(param_1);
      return uVar4;
    }
  }
LAB_8243ab80:
  fn_8243B6E8(param_1);
  return 2;
}

