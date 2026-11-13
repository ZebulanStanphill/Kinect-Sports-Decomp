extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82B7C3E8();
extern int fn_82B7C438();
extern int fn_82BA02A8();
extern int fn_82BA8A58();
extern int fn_82BA9328();
extern int fn_82BA9590();
extern int fn_82BA9620();
extern int fn_82BAA040();
extern int fn_82BAC630();
extern int fn_82BADC08();
extern int fn_82BAE810();
extern int fn_82BB1D38();
extern int fn_82BC0088();
extern int fn_82BC5AC0();
extern int fn_82BD24B8();
extern int fn_82F68CC0();
extern int fn_82F6C420();
extern unsigned int iStack_7c;
extern unsigned int uStack_a4;
extern unsigned int uStack_a8;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;
extern unsigned int uStack_d8;
extern unsigned int uStack_dc;


void fn_82BAED58(char *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  char cVar6;
  int iVar4;
  int *piVar5;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  int *piVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [4];
  unsigned int uStack_dc;
  unsigned int uStack_d8;
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_a8;
  unsigned int uStack_a4;
  int iStack_7c;
  
  fn_82BAA040(auStack_e0,param_1);
  iVar4 = *(int *)(param_1 + 0xc);
  if (*param_1 == '\0') {
    *(unsigned int *)(iVar4 + 0x5fc) = 0;
  }
  else {
    if (*(int *)(iVar4 + 0x5fc) == 0) {
      *(unsigned int *)(iVar4 + 0x5fc) = 1;
    }
    uVar2 = fn_82B7C438(*(int *)(param_1 + 0xc),*(int *)(*(int *)(param_1 + 0xc) + 0x5fc) << 3
                             );
    *(unsigned int *)(param_1 + 8) = uVar2;
    uStack_cc = fn_82B7C438(*(int *)(param_1 + 0xc),
                                  (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x560) * 6);
    uStack_c8 = uStack_cc;
  }
  puVar3 = (unsigned int *)fn_82BC0088(iStack_7c,*(unsigned int *)(iStack_7c + 4));
  *puVar3 = 0;
  piVar11 = *(int **)(param_1 + 0x88);
  piVar1 = (int *)piVar11[2];
  while (piVar1 != (int *)0x0) {
    cVar6 = (**(int (***)())(*piVar11 + 0xc))(piVar11);
    if ((cVar6 == '\0') || (cVar6 = fn_82BA9620(piVar11,auStack_f0), cVar6 == '\0')) {
      iVar4 = fn_82BC5AC0(piVar11);
      if (0 < iVar4) {
        iVar4 = piVar11[0xf];
        if (*(int *)(iVar4 + 4) == 0) {
          piVar5 = (int *)fn_82BC0088(iVar4,0);
        }
        else {
          piVar5 = *(int **)(iVar4 + 8);
        }
        piVar5 = (int *)*piVar5;
        cVar6 = (**(int (***)())(*piVar5 + 0xc))(piVar5);
        if ((cVar6 != '\0') && (piVar11 == (int *)piVar5[0x25])) {
          fn_82BAE810(auStack_e0,piVar5);
        }
      }
      uVar8 = uStack_a4;
      if (*param_1 == '\0') {
        uVar10 = *(unsigned int *)(iStack_7c + 4) - 1;
        if (uVar10 < *(unsigned int *)(iStack_7c + 4)) {
          puVar3 = (unsigned int *)(uVar10 * 4 + *(int *)(iStack_7c + 8));
        }
        else {
          puVar3 = (unsigned int *)0x0;
        }
        uVar2 = *puVar3;
        for (iVar4 = piVar11[7]; *(int *)(iVar4 + 8) != 0; iVar4 = *(int *)(iVar4 + 8)) {
          if (((*(unsigned int *)(iVar4 + 0xe4) & 1) != 0) && (*(int *)(iVar4 + 0x18) != 0x57)) {
            *(unsigned int *)(iVar4 + 0x34) = uVar2;
          }
        }
      }
      (**(int (***)())(*piVar11 + 0x24))(piVar11,auStack_e0);
      if ((*(char *)(piVar11 + 0x1f) != '\0') && (uVar8 == uStack_a4)) {
        iVar4 = 0;
        for (uVar8 = 1; uVar8 <= *(unsigned int *)(piVar11[0xe] + 4); uVar8 = uVar8 + 1) {
          *(unsigned char *)(*(int *)(*(int *)(piVar11[0xe] + 8) + iVar4) + 0x7c) = 1;
          iVar4 = iVar4 + 4;
        }
      }
    }
    else {
      fn_82BADC08(piVar11,auStack_e0,auStack_f0);
      piVar1 = *(int **)(piVar11[0x26] + 8);
    }
    piVar11 = piVar1;
    piVar1 = (int *)piVar11[2];
  }
  fn_82BA9328(auStack_e0);
  *(unsigned int *)(param_1 + 4) = (uStack_a4 * 2 + uStack_a8) * 6;
  fn_82BA8A58(param_1,auStack_e0);
  iVar4 = *(int *)(param_1 + 0xc);
  if (((*(unsigned int *)(iVar4 + 0x858) >> 0xc & 1) == 0) || (*param_1 != '\0')) {
    lVar13 = (unsigned __int64)uStack_a8 * 6;
    if (*(int *)(*(int *)(iVar4 + 0x550) + 0xc) <
        (int)(((int)uStack_a8 >> 1) + (unsigned int)((int)uStack_a8 < 0 && (uStack_a8 & 1) != 0) + uStack_a4
             )) {
      *(unsigned int *)(iVar4 + 0x554) = 0x17;
                    /* WARNING: Subroutine does not return */
      fn_82F6C420(iVar4 + 0x10,1);
    }
    lVar7 = (unsigned __int64)uStack_a4 * 0xc + lVar13;
    *param_2 = (unsigned int)lVar7;
    lVar7 = fn_82B7C3E8(*(unsigned int *)(param_1 + 0xc),lVar7,param_3);
    fn_82F68CC0(lVar7,uStack_d8,lVar13);
    fn_82F68CC0(lVar7 + lVar13,uStack_dc,(unsigned __int64)uStack_a4 * 0xc);
    *param_2 = (*param_2 / 0xc) * 3;
    fn_82BA9590(auStack_e0,lVar13);
    fn_82BB1D38(param_1);
    if (*(int *)(param_1 + 8) != 0) {
      (**(int (***)())(*(int *)(param_1 + 0xc) + 0x59c))
                (*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5a4));
    }
  }
  else {
    *param_1 = '\x01';
    uVar8 = *(unsigned int *)(param_1 + 4);
    uVar12 = (unsigned __int64)uVar8;
    fn_82BD24B8(auStack_e0,uStack_a4,uStack_dc);
    fn_82BAED58(param_1,param_2,param_3);
    trapWord(6,uVar12,0);
    uVar9 = (uVar12 - *(unsigned int *)(param_1 + 4)) * 100;
    trapWord(5,uVar12 & ~(((uVar9 & 0x7fffffff) << 1 | (uVar9 & 0xffffffff) >> 0x1f) - 1),0xffff);
    fn_82BA02A8(*(unsigned int *)(param_1 + 0xc),0xffffffff820dfa84,uVar12,
                 (unsigned __int64)*(unsigned int *)(param_1 + 4),(int)uVar9 / (int)uVar8);
  }
  fn_82BAC630(auStack_e0);
  return;
}

