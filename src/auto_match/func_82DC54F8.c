typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
#define TBLr 0
extern unsigned int *auStack_c0;
extern int fn_82CE8E78();
extern int memcpy();
extern int fn_830A2398();
extern int fn_830A4688();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_8202CF7C;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_84;
extern unsigned int uStack_88;


void fn_82DC54F8(__int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  short *psVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  bool bVar10;
  int iVar11;
  unsigned int *puVar12;
  unsigned int *apuStack_d0 [4];
  unsigned char auStack_c0 [48];
  int iStack_90;
  int iStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar7 + 4);
  if (puVar1 < *(unsigned int **)(iVar7 + 0xc)) {
    *puVar1 = "LtIntegrate";
    puVar1[3] = "StBuildJacobians";
    uVar6 = TBLr;
    puVar1[1] = (int)uVar6;
    *(unsigned int **)(iVar7 + 4) = puVar1 + 4;
  }
  memcpy(auStack_c0,param_1 + 0x10,0x60);
  piVar2 = *(int **)(param_3 + 0x20);
  puVar12 = (unsigned int *)(piVar2 + 6);
  apuStack_d0[0] = (unsigned int *)piVar2[3];
  uVar9 = ZEXT48(apuStack_d0[0]);
  iVar7 = piVar2[5];
  iVar3 = piVar2[2];
  uVar4 = piVar2[4];
  if ((*(char *)(param_3 + 0x28) == '\0') || (bVar10 = true, *piVar2 == 0)) {
    bVar10 = false;
  }
  iVar11 = 0;
  if (0 < iVar7) {
    do {
      iVar11 = iVar11 + 1;
      if (iVar11 < iVar7) {
        uVar8 = (unsigned __int64)puVar12[7];
        dataCacheBlockTouch(uVar8);
        dataCacheBlockTouch(uVar8 + 0x80);
        dataCacheBlockTouch((unsigned __int64)puVar12[9]);
        dataCacheBlockTouch(uVar9 + 0x200);
      }
      uStack_88 = puVar12[3];
      uStack_84 = puVar12[4];
      iStack_90 = (unsigned int)*(unsigned short *)(puVar12 + 6) * 0x80 + iVar3;
      iStack_8c = (unsigned int)*(unsigned short *)((int)puVar12 + 0x1a) * 0x80 + iVar3;
      uStack_70 = (unsigned int)*(unsigned short *)(puVar12 + 6);
      uStack_6c = (unsigned int)*(unsigned short *)((int)puVar12 + 0x1a);
      uStack_78 = puVar12[1];
      uStack_74 = puVar12[2];
      uStack_68 = puVar12[2];
      psVar5 = (short *)*puVar12;
      if (*psVar5 == 0x16) {
        fn_830A4688(psVar5,auStack_c0,1);
      }
      else {
        fn_830A2398(psVar5,*(unsigned short *)(puVar12 + 5),auStack_c0,apuStack_d0);
      }
      uVar9 = ZEXT48(apuStack_d0[0]);
      puVar12 = puVar12 + 7;
    } while (iVar11 < iVar7);
  }
  puVar1 = (unsigned int *)uVar9;
  if (bVar10) {
    if (0 < (__int64)(uVar4 - uVar9)) {
      puVar1[1] = (int)(uVar4 - uVar9);
      apuStack_d0[0] = puVar1 + 4;
      *(unsigned char *)((int)puVar1 + 3) = 2;
    }
  }
  else {
    apuStack_d0[0] = puVar1 + 4;
    *puVar1 = 0;
  }
  iVar7 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar7 + 4);
  if (puVar1 < *(unsigned int **)(iVar7 + 0xc)) {
    *puVar1 = &lbl_8202CF7C;
    uVar6 = TBLr;
    puVar1[1] = (int)uVar6;
    *(unsigned int **)(iVar7 + 4) = puVar1 + 3;
  }
  fn_82CE8E78(param_2,param_3,param_3,0);
  return;
}

