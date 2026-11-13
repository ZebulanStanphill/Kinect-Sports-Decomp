extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern int fn_822E83E0();
extern int fn_8240DEC0();
extern int fn_8240E5F8();
extern int fn_824108A0();
extern int fn_824118B0();
extern int fn_82411E50();
extern int fn_82412040();
extern int fn_82412308();
extern int fn_8253F598();
extern int fn_8253F768();
extern int fn_82571418();
extern int fn_82CE4118();
extern int fn_82D85148();
extern int fn_82D89B48();
extern int fn_82D89BD8();
extern int fn_82F6DA24();
extern int fn_82F6DCBC();


void fn_8240EF10(void)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  int in_r0;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 extraout_f1;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned char auStack_90 [1];
  unsigned char auStack_80 [128];
  
  iVar4 = fn_82F6DA24();
  if ((*(int *)(iVar4 + 8) != 0) && (iVar1 = *(int *)(iVar4 + 0x28), iVar1 != 0)) {
    *(unsigned int *)(iVar1 + 2000) = *(unsigned int *)(iVar1 + 2000) | 4;
  }
  uVar5 = extraout_f1;
  fn_82D89BD8(*(unsigned int *)(*(int *)(iVar4 + 0x28) + 0x7c0));
  if ((((*(int *)(**(int **)(iVar4 + 0x24) + 0x2b40) == 0) &&
       (iVar1 = *(int *)(iVar4 + 0x2c), iVar1 != 2)) && (iVar1 != 9)) && (iVar1 != 1)) {
    if (*(int *)(**(int **)(iVar4 + 0x24) + 0x174) == 2) {
      fn_824118B0(uVar5,iVar4);
      fn_82411E50(iVar4);
    }
    fn_82412040(iVar4);
  }
  if ((3 < *(int *)(iVar4 + 0x2c)) && (*(int *)(iVar4 + 0x2c) < 9)) {
    fn_82412308(iVar4);
    fn_824108A0(uVar5,iVar4);
  }
  if (*(int *)(iVar4 + 0x170) != 0) {
    iVar1 = *(int *)(*(int *)(iVar4 + 0x28) + 0x7c0);
    puVar3 = (unsigned int *)(iVar1 + 0x1b0U & 0xfffffff0);
    uVar11 = *puVar3;
    uVar12 = puVar3[1];
    uVar13 = puVar3[2];
    uVar14 = puVar3[3];
    puVar3 = (unsigned int *)(iVar1 + 0x1c0U & 0xfffffff0);
    uVar7 = *puVar3;
    uVar8 = puVar3[1];
    uVar9 = puVar3[2];
    uVar10 = puVar3[3];
    fn_8253F768();
    if (*(int *)(iVar4 + 0x270) != 0) {
      fn_82D89B48(*(unsigned int *)(*(int *)(iVar4 + 0x28) + 0x7c0));
      piVar2 = *(int **)(iVar4 + 0x270);
      if (piVar2 != (int *)0x0) {
        (**(int (***)())(*piVar2 + 0xc))(piVar2,1);
      }
      *(unsigned int *)(iVar4 + 0x270) = 0;
    }
    fn_82CE4118(iVar1);
    *(unsigned int *)(*(int *)(iVar4 + 0x28) + 0x7c0) = 0;
    *(unsigned int *)(*(int *)(iVar4 + 0x28) + 0x7c4) = 0;
    fn_8240E5F8(iVar4,*(unsigned int *)(iVar4 + 0x24),*(unsigned int *)(iVar4 + 0x174));
    fn_8253F598(*(unsigned int *)(iVar4 + 0x28));
    iVar1 = *(int *)(iVar4 + 0x28);
    uVar5 = 10;
    uVar6 = 5;
    if ((*(unsigned int *)(iVar1 + 0x4b8) & 0x200) != 0) {
      uVar5 = 1;
      uVar6 = 1;
    }
    fn_82571418(iVar1 + 0x380,*(unsigned int *)(iVar1 + 0x7c0),*(unsigned int *)(iVar1 + 0x4c),
                      uVar5,uVar6,*(unsigned int *)(iVar1 + 0x4b8) & 4,*(unsigned int *)(iVar1 + 0x4b8) & 8);
    puVar3 = (unsigned int *)((unsigned int)(auStack_90 + in_r0) & 0xfffffff0);
    *puVar3 = uVar11;
    puVar3[1] = uVar12;
    puVar3[2] = uVar13;
    puVar3[3] = uVar14;
    fn_822E83E0(*(unsigned int *)(*(int *)(iVar4 + 0x28) + 0x7c0),auStack_90);
    puVar3 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
    *puVar3 = uVar7;
    puVar3[1] = uVar8;
    puVar3[2] = uVar9;
    puVar3[3] = uVar10;
    fn_8240DEC0(*(unsigned int *)(*(int *)(iVar4 + 0x28) + 0x7c0),auStack_80);
    *(unsigned int *)(iVar4 + 0x170) = 0;
  }
  if (((*(int *)(iVar4 + 0x2c) != 2) && (*(int *)(iVar4 + 0x178) != 0)) &&
     (iVar1 = *(int *)(*(int *)(iVar4 + 0x28) + 0x7c0), *(int *)(iVar1 + 8) != 0)) {
    *(unsigned int *)(iVar1 + 0x2c) = *(unsigned int *)(iVar4 + 0x174);
    iVar1 = *(int *)(*(int *)(iVar4 + 0x28) + 0x7c0);
    fn_82D85148(*(unsigned int *)(iVar1 + 8),iVar1,0,1);
    *(unsigned int *)(iVar4 + 0x178) = 0;
  }
  fn_82F6DCBC();
  return;
}

