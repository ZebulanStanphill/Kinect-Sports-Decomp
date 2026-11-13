extern int fn_82BA02A8();
extern int fn_82CE5410();
extern int fn_82CEA160();
extern int fn_82CEA220();
extern int fn_82CEA4B8();
extern int fn_82CEAB00();
extern unsigned int iStack_78;
extern unsigned int uStack_7c;


unsigned char * fn_82D4A3F0(unsigned char *param_1,int param_2)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  int iVar9;
  int iVar10;
  unsigned short *puVar11;
  int iVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  int *piStack_80;
  unsigned int uStack_7c;
  int iStack_78;
  
  piStack_80 = (int *)0x0;
  uStack_7c = 0;
  iStack_78 = -1;
  iVar4 = fn_82CE5410();
  fn_82CEAB00(&piStack_80,*(unsigned int *)(iVar4 + 0x10),0);
  iVar9 = 0;
  iVar10 = 0;
  iVar4 = *(int *)(param_2 + 0x18);
  if (0 < iVar4) {
    do {
      iVar12 = 0;
      puVar11 = (unsigned short *)(iVar9 * 2 + *(int *)(param_2 + 8));
      bVar1 = *(unsigned char *)(*(int *)(param_2 + 0x14) + iVar10);
      uVar8 = (unsigned __int64)puVar11[bVar1 - 1];
      if (bVar1 != 0) {
        do {
          uVar2 = *puVar11;
          uVar13 = (unsigned __int64)uVar2;
          if ((unsigned int)uVar8 < (unsigned int)uVar2) {
            uVar6 = uVar8 << 0x10 | uVar13;
          }
          else {
            uVar6 = uVar13 << 0x10 | uVar8;
          }
          uVar14 = 2;
          if ((unsigned int)uVar2 <= (unsigned int)uVar8) {
            uVar14 = 1;
          }
          iVar5 = fn_82CEA220(&piStack_80,uVar6 + 1);
          if (iStack_78 < iVar5) {
            iVar5 = fn_82CE5410();
            fn_82CEA160(&piStack_80,*(unsigned int *)(iVar5 + 0x10),uVar6 + 1,uVar14);
          }
          else {
            if ((piStack_80[iVar5 * 2 + 1] & uVar14) != 0) goto LAB_82d4a5e0;
            piStack_80[iVar5 * 2 + 1] = piStack_80[iVar5 * 2 + 1] | uVar14;
          }
          iVar12 = iVar12 + 1;
          puVar11 = puVar11 + 1;
          uVar8 = uVar13;
        } while (iVar12 < (int)(unsigned int)bVar1);
      }
      iVar10 = iVar10 + 1;
      iVar9 = (unsigned int)bVar1 + iVar9;
    } while (iVar10 < iVar4);
  }
  iVar4 = 0;
  piVar7 = piStack_80;
  if (-1 < iStack_78) {
    do {
      if (*piVar7 != -1) break;
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar4 <= iStack_78);
  }
joined_r0x82d4a560:
  if (iVar4 <= iStack_78) {
    if (piStack_80[iVar4 * 2 + 1] != 3) goto LAB_82d4a5e0;
    iVar4 = iVar4 + 1;
    if (iStack_78 < iVar4) goto LAB_82d4a5b0;
    piVar7 = piStack_80 + iVar4 * 2;
    do {
      if (*piVar7 != -1) break;
      iVar4 = iVar4 + 1;
      piVar7 = piVar7 + 2;
    } while (iVar4 <= iStack_78);
    goto joined_r0x82d4a560;
  }
LAB_82d4a5b0:
  *param_1 = 1;
  iVar4 = fn_82CE5410();
  uVar3 = *(unsigned int *)(iVar4 + 0x10);
LAB_82d4a5c4:
  fn_82CEA4B8(&piStack_80,uVar3);
  fn_82BA02A8(&piStack_80);
  return param_1;
LAB_82d4a5e0:
  *param_1 = 0;
  iVar4 = fn_82CE5410();
  uVar3 = *(unsigned int *)(iVar4 + 0x10);
  goto LAB_82d4a5c4;
}

