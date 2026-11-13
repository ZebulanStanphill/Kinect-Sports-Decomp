#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_82AA66A8();
extern int fn_82AE60E8();
extern int fn_82AE7110();
extern int fn_82B453E0();
extern int fn_82B45880();
extern int fn_82B462A8();
extern int fn_82B50B00();
extern int fn_82B80658();
extern int fn_82B80940();
extern int fn_82B80A80();
extern int fn_82B80B40();
extern int fn_82B83528();
extern int fn_82B836A8();
extern int fn_82B84820();
extern int fn_82B89838();
extern unsigned int uStack_60;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * fn_82B89CA0(int *param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned int *puVar8;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar9;
  unsigned int uVar10;
  unsigned short uVar12;
  unsigned int *puVar11;
  int iVar13;
  unsigned __int64 uVar14;
  int iVar15;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int auStack_70 [2];
  unsigned int auStack_68 [2];
  unsigned int uStack_60;
  
  iVar13 = param_3 * 0x28;
  iVar15 = iVar13 + *(int *)(param_2 + 0xc);
  iVar9 = *(int *)(iVar15 + 0x18);
  if (iVar9 != 0) {
    iVar3 = (int)((param_4 & 0xffffffff) << 3);
    iVar1 = *(int *)(iVar3 + iVar9);
    iVar9 = *(int *)(iVar3 + iVar9 + 4);
    *param_1 = iVar1;
    param_1[1] = iVar9;
    if (iVar1 != 0) {
      return param_1;
    }
  }
  fn_82B80940(param_2,param_3,param_4,auStack_70,&uStack_7c,&uStack_74,&uStack_78,&uStack_80);
  iVar1 = (int)((param_4 & 0x1fffffff) << 3);
  uVar4 = *(unsigned int *)(iVar1 + *(int *)(iVar15 + 0x1c)) >> 0x12 & 3;
  uVar14 = -((unsigned __int64)(uVar4 < 2) - 1);
  puVar8 = (unsigned int *)
           fn_82AE7110(param_2,*(unsigned int *)(iVar15 + 0x14),
                             *(unsigned int *)(*(int *)(iVar15 + 0x10) + 0x3c),0);
  fn_82B80658(puVar8,param_4);
  fn_82B50B00(puVar8);
  iVar9 = puVar8[2];
  if (iVar9 == 0) {
    uVar6 = fn_82B462A8(param_2,param_3);
    uVar7 = fn_82B453E0(param_2);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_2,0xdae,uVar7,uVar6);
  }
  uVar2 = *(unsigned int *)(iVar1 + *(int *)(iVar15 + 0x1c));
  if ((uVar2 & 0x4000000) == 0) {
    iVar9 = fn_82B45880(param_2,iVar9);
                    /* WARNING: Subroutine does not return */
    fn_82AA66A8(param_2,0x1196,*(unsigned int *)(iVar9 + 0x18));
  }
  auStack_68[0] = 0;
  if ((*(unsigned int *)(param_2 + 0x30) & 0xffff0000) == 0xffff0000) {
    uStack_60 = 0;
    fn_82B836A8(param_2,*(unsigned int *)(iVar15 + 0x10),iVar9,uVar2 >> 0x1b & 0xf,auStack_68,
                  &uStack_7c);
    uVar2 = uStack_60;
    uVar5 = CONCAT44(auStack_68[0],*(unsigned int *)(iVar15 + 4) >> 0xc) & 0xffffffff00020000;
    iVar9 = fn_82B89838(param_2,uVar5,(unsigned __int64)uStack_60 << 0x20,uStack_80,uStack_7c,uVar14,
                          uVar4 == 2);
    if (iVar9 == 0) {
      fn_82B80B40(param_2,uVar5,(unsigned __int64)uVar2 << 0x20,puVar8,iVar15,param_4);
                    /* WARNING: Subroutine does not return */
      fn_82AA66A8(param_2,0x12c0);
    }
  }
  else {
    uStack_60 = 0;
    fn_82B83528();
    iVar9 = fn_82B84820(param_2,(unsigned __int64)auStack_68[0] << 0x20,(unsigned __int64)uStack_60 << 0x20,
                          uStack_80);
    if ((uVar14 & 0xff) != 0) {
      uVar2 = *(unsigned int *)(iVar9 + 0xc);
      if (uVar4 == 2) {
        if ((uVar2 & 0x4444) == 0x4444) goto LAB_82b89e78;
        uVar12 = (unsigned short)uVar2 | 0x4444;
      }
      else {
        if ((uVar2 & 0x6666) == 0x6666) goto LAB_82b89e78;
        uVar12 = (unsigned short)uVar2 | 0x6666;
      }
      *(unsigned short *)(iVar9 + 0xe) = uVar12;
    }
  }
LAB_82b89e78:
  puVar11 = (unsigned int *)(iVar13 + *(int *)(param_2 + 0xc));
  if (puVar11[6] == 0) {
    uVar10 = fn_82AE60E8(param_2,*puVar11 & 0x1fff8,0);
    *(unsigned int *)(iVar13 + *(int *)(param_2 + 0xc) + 0x18) = uVar10;
  }
  fn_82B80A80(param_2,iVar15,auStack_70[0],uStack_74,uStack_78,iVar9);
  iVar9 = *(int *)(iVar13 + *(int *)(param_2 + 0xc) + 0x18);
  iVar13 = *(int *)(iVar9 + iVar1);
  iVar9 = *(int *)(iVar9 + iVar1 + 4);
  *puVar8 = *(unsigned int *)(param_2 + 0x3ec);
  *(unsigned int **)(param_2 + 0x3ec) = puVar8;
  *param_1 = iVar13;
  param_1[1] = iVar9;
  return param_1;
}

