extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern int fn_82522D98();
extern int fn_82549610();
extern int fn_82569B10();
extern int fn_8256B190();
extern int fn_8259C738();
extern int fn_82837D98();
extern int fn_828385E0();
extern int fn_8284C860();
extern int fn_82A1BB18();
extern int fn_82A1DD38();
extern unsigned int uStack_34;
extern unsigned int uStack_50;


unsigned __int64 fn_82569CF8(unsigned __int64 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 in_r0;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  char cVar9;
  unsigned __int64 uVar7;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned __int64 uStack_50;
  unsigned int auStack_48 [2];
  unsigned char auStack_40 [12];
  unsigned int uStack_34;
  
  uVar6 = fn_82569B10();
  fn_82549610(auStack_48,uVar6);
  iVar5 = (int)in_r0;
  uVar6 = 1;
  if ((param_2 != 0) && (iVar1 = *(int *)(param_2 + 0x14), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      uVar6 = fn_828385E0(*(unsigned int *)(*(int *)(iVar1 + 8) + 0x14));
      if (*(int *)(iVar1 + 0x10) == 0) {
        uVar8 = fn_82522D98();
        *(unsigned int *)(iVar1 + 0x10) = uVar8;
      }
      fn_82A1DD38(*(unsigned int *)(iVar1 + 0x10),*(unsigned int *)(*(int *)(iVar1 + 8) + 0x14),
                        uVar6);
      uVar10 = 0;
      iVar2 = *(int *)(iVar1 + 8);
      cVar9 = fn_8284C860(*(unsigned int *)(iVar2 + 0x14));
      iVar5 = (int)in_r0;
      if (cVar9 != '\0') {
        do {
          fn_82837D98(*(unsigned int *)(iVar2 + 0x14),uVar10,&uStack_50);
          uVar10 = uVar10 + 1;
          *(unsigned int *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x2c) = *(unsigned int *)((((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF) + 0x2c) & 0xffffffc3 | 4;
          uVar7 = fn_8284C860(*(unsigned int *)(iVar2 + 0x14));
          iVar5 = (int)in_r0;
        } while ((uVar10 & 0xffffffff) < (uVar7 & 0xff));
      }
    }
    *(unsigned char *)(iVar1 + 0x28) = *(unsigned char *)(iVar1 + 0x28) & 0xf7;
    uStack_50 = (unsigned __int64)*(unsigned char *)(*(int *)(*(int *)(iVar1 + 8) + 0x14) + 0x30);
    uVar6 = fn_8256B190((double)uStack_50,param_1);
    uStack_34 = (((unsigned __int64)(uStack_50) >> 0) & 0xFFFFFFFF);
    puVar3 = (unsigned int *)((unsigned int)(auStack_40 + iVar5) & 0xfffffff0);
    uVar8 = puVar3[1];
    uVar11 = puVar3[2];
    uVar12 = puVar3[3];
    puVar4 = (unsigned int *)(iVar5 + param_2 & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar8;
    puVar4[2] = uVar11;
    puVar4[3] = uVar12;
  }
  fn_82A1BB18();
  fn_8259C738(auStack_48[0]);
  return uVar6;
}

