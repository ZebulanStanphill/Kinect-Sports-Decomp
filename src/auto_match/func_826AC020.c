extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_82696330();
extern int fn_82696958();
extern int fn_82696AD0();
extern int fn_82696D38();
extern int fn_82697610();
extern int fn_82697700();
extern int fn_82711100();
extern unsigned int iStack_84;
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_820071C4;
extern unsigned int uStack_60;
extern unsigned int uStack_68;


void fn_826AC020(int param_1)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  unsigned char bVar10;
  unsigned char bVar11;
  char cVar12;
  __int64 lVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int aiStack_80 [4];
  unsigned char *puStack_70;
  int *piStack_6c;
  unsigned int uStack_68;
  unsigned char bStack_64;
  unsigned char bStack_63;
  unsigned char uStack_60;
  unsigned char bStack_5f;
  
  iVar9 = *(int *)(param_1 + 0x18);
  cVar12 = *(char *)(iVar9 + 0x7c);
  uVar4 = fn_826957D0(param_1,0);
  piVar5 = (int *)fn_82696AD0(uVar4,iVar9);
  if (piVar5 == (int *)0x0) {
    return;
  }
  pcVar6 = (char *)fn_826957D0(param_1,1);
  cVar1 = *pcVar6;
  iVar9 = 0;
  if (cVar1 == '\x05') {
    fn_82696D38(&iStack_8c,pcVar6,*(unsigned int *)(param_1 + 0x18),0xffffffffffffffff,0);
    piVar7 = (int *)fn_82711100(&iStack_84,*(unsigned int *)(param_1 + 0x18),&iStack_8c,
                                      0xffffffff82196fac,0x3fffffff);
    iVar9 = *piVar7;
    if (iVar9 != 0) {
      *(unsigned int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1U & 0x8fffffff;
    }
    iVar9 = *piVar7;
    iStack_88 = iStack_8c;
    if (iStack_84 != 0) {
      fn_826824B0();
      iStack_88 = iStack_8c;
    }
  }
  else {
    if (cVar1 != '\x06') {
      if (cVar1 != '\x01') {
        return;
      }
      goto LAB_826ac1f0;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,1);
    iVar8 = fn_82696958(uVar4,uVar2);
    if (iVar8 == 0) goto LAB_826ac1f0;
    piVar7 = (int *)(iVar8 + 0x10);
    iVar9 = (**(int (***)())(*(int *)(iVar8 + 0x10) + 8))(piVar7);
    if (iVar9 == 7) {
      *(unsigned int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1U & 0x8fffffff;
      iVar9 = iVar8;
      goto LAB_826ac1f0;
    }
    iVar9 = (**(int (***)())(*piVar7 + 8))(piVar7);
    if (iVar9 != 8) {
      return;
    }
    fn_82696D38(&iStack_88,pcVar6,*(unsigned int *)(param_1 + 0x18),0xffffffffffffffff,0);
    piVar7 = (int *)fn_82711100(aiStack_80,*(unsigned int *)(param_1 + 0x18),&iStack_88,
                                      0xffffffff82196fac,0x3fffffff);
    iVar9 = *piVar7;
    if (iVar9 != 0) {
      *(unsigned int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1U & 0x8fffffff;
    }
    iVar9 = *piVar7;
    if (aiStack_80[0] != 0) {
      fn_826824B0();
    }
  }
  lVar13 = (unsigned __int64)*(unsigned int *)(iStack_88 + 8) - 1;
  *(int *)(iStack_88 + 8) = (int)lVar13;
  if (lVar13 == 0) {
    fn_826944C8(iStack_88);
  }
LAB_826ac1f0:
  uVar2 = *(unsigned int *)(param_1 + 0x18);
  uVar4 = fn_826957D0(param_1,2);
  bVar10 = fn_82697610(uVar4,uVar2);
  if (*(int *)(param_1 + 0x1c) == 3) {
    bVar11 = -(cVar12 == '\x05');
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,3);
    bVar11 = fn_82697700(uVar4,uVar2);
  }
  lVar13 = (unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78;
  if (iVar9 == 0) {
    uStack_68 = (unsigned int)lVar13;
    puStack_70 = &lbl_820071C4;
    piStack_6c = piVar5;
    bStack_64 = bVar10 & 7;
    bStack_63 = bVar11 & 7;
    (**(int (***)())(*piVar5 + 0x20))(piVar5,lVar13,&puStack_70,0xc,0);
  }
  else {
    uVar15 = (unsigned __int64)*(unsigned int *)(iVar9 + 0x38);
    if (0 < (int)*(unsigned int *)(iVar9 + 0x38)) {
      iVar8 = 0;
      do {
        iVar3 = *(int *)(iVar8 + *(int *)(iVar9 + 0x34));
        if (iVar3 != 0) {
          fn_82696D38(&iStack_90,iVar3,*(unsigned int *)(param_1 + 0x18),0xffffffffffffffff,0);
          uStack_60 = 0;
          bStack_5f = 0;
          cVar12 = (**(int (***)())(*piVar5 + 0x14))(piVar5,lVar13,&iStack_90,&uStack_60);
          if (cVar12 != '\0') {
            (**(int (***)())(*piVar5 + 0x1c))
                      (piVar5,lVar13,&iStack_90,bStack_5f & ~(bVar11 & 7) | bVar10 & 7);
          }
          fn_82696330(&uStack_60);
          lVar14 = (unsigned __int64)*(unsigned int *)(iStack_90 + 8) - 1;
          *(int *)(iStack_90 + 8) = (int)lVar14;
          if (lVar14 == 0) {
            fn_826944C8(iStack_90);
          }
        }
        uVar15 = uVar15 - 1;
        iVar8 = iVar8 + 4;
      } while (uVar15 != 0);
    }
    fn_826824B0(iVar9);
  }
  return;
}

