extern unsigned int *auStack_70;
extern int fn_82A1F648();
extern int fn_82A203C0();
extern int fn_82A204C8();
extern int fn_82A22B20();
extern unsigned int iStack_64;
extern unsigned int iStack_80;
extern unsigned int lbl_83219CAC;
extern unsigned int *lbl_83219CB0;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_7c;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned __int64 fn_82A22D48(unsigned short *param_1)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  int iStack_80;
  unsigned int uStack_7c;
  unsigned char auStack_70 [4];
  unsigned int uStack_6c;
  unsigned int uStack_68;
  int iStack_64;
  
  iVar3 = fn_82A1F648();
  if (iVar3 != 0) {
    fn_82A204C8(*(unsigned int *)(param_1 + 2),*param_1,&uStack_90);
    iVar3 = fn_82A22B20(lbl_83219CAC,uStack_90,(unsigned __int64)uStack_84 + (unsigned __int64)uStack_8c,1);
    if ((iVar3 == 0) &&
       ((iStack_80 == 0 || (iVar3 = fn_82A22B20(lbl_83219CAC,iStack_80,uStack_7c,1), iVar3 == 0)))
       ) {
      uVar8 = 0;
      if (lbl_83219CB0[1] != 0) {
        iVar3 = 0;
        piVar6 = lbl_83219CB0;
        do {
          uVar9 = 0;
          iVar2 = *(int *)(*piVar6 + iVar3);
          uVar1 = *(unsigned short *)(iVar2 + 8);
          if (uVar1 != 0) {
            do {
              puVar7 = (unsigned int *)((uVar9 - *(unsigned short *)(iVar2 + 0xc)) * 4 +
                                (unsigned int)*(unsigned short *)(iVar2 + 4) + iVar2);
              iVar4 = (*puVar7 & 0xffff) + iVar2 + 1;
              fn_82A204C8(iVar4,(unsigned __int64)*(unsigned char *)((int)puVar7 + 1) - 1,auStack_70);
              uVar5 = (unsigned __int64)uStack_6c;
              if ((uVar5 == uStack_8c) &&
                 (iVar4 = RtlCompareStringN(iVar4,uVar5,uStack_90,uVar5,1), iVar4 == 0)) {
                if (iStack_64 == 0) {
                  return 0;
                }
                iVar4 = fn_82A203C0(uStack_68,iStack_64,uStack_88,(unsigned __int64)uStack_84);
                if (iVar4 != 0) {
                  return 0;
                }
              }
              uVar9 = uVar9 + 1;
              piVar6 = lbl_83219CB0;
            } while (uVar9 < uVar1);
          }
          uVar8 = uVar8 + 1;
          iVar3 = iVar3 + 4;
        } while (uVar8 < (unsigned int)piVar6[1]);
      }
      return 1;
    }
  }
  return 0;
}

