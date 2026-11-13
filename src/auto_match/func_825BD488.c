extern unsigned int *auStack_90;
extern unsigned int *auStack_a8;
extern unsigned int *auStack_b0;
extern int fn_8251FA58();
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_8259A070();
extern int fn_8259C040();
extern int fn_825BD990();
extern int fn_825BDA18();
extern int fn_8265BC60();
extern int fn_8265C9E0();
extern int fn_827D5070();
extern int fn_827D50B8();
extern int fn_827D9630();
extern int fn_827D96A0();
extern int fn_827D9720();
extern int fn_82816E40();
extern int fn_82816E90();
extern int fn_82816F98();
extern int fn_82A1E810();
extern unsigned int iStack_9c;
extern unsigned int lbl_82193CC0;
extern unsigned int lbl_82195CE8;
extern unsigned int lbl_82195CEC;
extern unsigned int uStack_a0;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_825BD488(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar5;
  unsigned __int64 uVar3;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar4;
  int iVar8;
  unsigned int uVar9;
  unsigned int *puVar10;
  unsigned int *puVar11;
  double dVar12;
  unsigned char auStack_b0 [8];
  unsigned char auStack_a8 [8];
  unsigned int uStack_a0;
  int iStack_9c;
  unsigned char auStack_90 [144];
  
  if (*(int *)(param_1 + 0x1e8) == 0) {
    if (*(char *)(param_1 + 0x214) == '\0') {
      uVar3 = fn_827D50B8(*(unsigned int *)(param_1 + 0x50));
      iVar5 = (int)uVar3;
      if (iVar5 == 0x3e5) {
        return uVar3;
      }
      if (iVar5 != 0x3e4) {
        if (iVar5 == 0) goto LAB_825bd538;
        iVar5 = fn_827D50B8(*(unsigned int *)(param_1 + 0x48));
        if ((iVar5 == 0) || (uVar3 = fn_827D50B8(*(unsigned int *)(param_1 + 0x48)), uVar3 == 0))
        goto LAB_825bd754;
        goto LAB_825bd738;
      }
LAB_825bd754:
      iVar5 = (int)uVar3;
      if (iVar5 == 0x3e5) {
        return uVar3;
      }
      if (iVar5 == 0x3e4) {
        return uVar3;
      }
      if (iVar5 == 0) {
LAB_825bd76c:
        if (*(int *)(*(int *)(param_1 + 0x8c) + 0x1c) != 0) {
                    /* WARNING: Subroutine does not return */
          fn_82522D98(0x148);
        }
        if (*(int *)(param_1 + 0x1e8) == 0) {
          iVar5 = fn_825BD990(param_1);
          if (iVar5 == 0) {
            return 0xd;
          }
          fn_82A1E810(*(unsigned int *)(param_1 + 0x1d8));
LAB_825bd4ec:
          fn_825BDA18(param_1);
          return 0;
        }
        goto LAB_825bd4fc;
      }
    }
    else {
LAB_825bd538:
      if ((*(char *)(param_1 + 0x214) == '\0') &&
         (uVar3 = fn_827D50B8(*(unsigned int *)(param_1 + 0x48)), uVar3 != 0)) {
LAB_825bd738:
        iVar5 = fn_827D50B8(*(unsigned int *)(param_1 + 0x40));
        if (iVar5 != 0) {
          uVar3 = fn_827D50B8(*(unsigned int *)(param_1 + 0x40));
        }
        goto LAB_825bd754;
      }
      if (*(char *)(param_1 + 0x214) == '\0') {
        uVar7 = fn_827D5070(*(unsigned int *)(param_1 + 0x48));
        *(unsigned int *)(param_1 + 0x88) = uVar7;
      }
      else {
        uVar7 = *(unsigned int *)(param_1 + 0x210);
        puVar11 = (unsigned int *)(param_1 + 0x210);
        iVar5 = fn_82816E40(uVar7);
        if (iVar5 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = fn_8259A070(puVar11,&uStack_a0,auStack_a8,auStack_b0,puVar11,0,
                                    param_1 + 0x90);
        }
        *(unsigned int *)(param_1 + 0x88) = uVar6;
        fn_8251FA58(uVar7);
        *puVar11 = 0;
      }
      puVar10 = (unsigned int *)(param_1 + 0x8c);
      uVar4 = fn_82816E90(*(unsigned int *)(param_1 + 0x88));
      fn_82816F98(*(unsigned int *)(param_1 + 0x88),uVar4,puVar10);
      dVar12 = (double)fn_8265BC60(0xffffffff821c8d08);
      fVar1 = **(float **)(param_1 + 0x8c);
      if ((((float)(dVar12 - (double)lbl_82193CC0) <= fVar1) &&
          (fVar1 <= (float)(dVar12 + (double)lbl_82193CC0))) ||
         ((lbl_82195CE8 <= fVar1 && (fVar1 <= lbl_82195CEC)))) {
        uVar9 = 0;
        if ((*(float **)(param_1 + 0x8c))[5] != 0.0) {
          iVar5 = 0;
          do {
            fn_825200F0(auStack_90,*(int *)(*puVar10 + 0x10) + iVar5);
            fn_827D9720(auStack_90,(unsigned __int64)*puVar10 + 8);
            iVar8 = fn_8265C9E0(0x20);
            if (iVar8 == 0) {
              iVar8 = 0;
            }
            else {
              iVar2 = *(int *)(*puVar10 + 0x10);
              fn_827D9630(iVar8,auStack_90);
              *(unsigned int *)(iVar8 + 0x18) = *(unsigned int *)(iVar2 + iVar5 + 4);
            }
            uStack_a0 = fn_827D96A0(iVar8);
            iStack_9c = iVar8;
            fn_8259C040(auStack_a8,param_1 + 0x5c,&uStack_a0);
            uVar9 = uVar9 + 1;
            iVar5 = iVar5 + 8;
          } while (uVar9 < *(unsigned int *)(*puVar10 + 0x14));
        }
        goto LAB_825bd76c;
      }
      uVar3 = 0xb;
    }
    fn_82A1E810(*(unsigned int *)(param_1 + 0x1d8));
    if ((int)uVar3 == 0) {
      iVar5 = fn_825BD990(param_1);
      if (iVar5 == 0) {
        uVar3 = 0xd;
      }
      else {
        fn_825BDA18(param_1);
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x1e8) == *(int *)(param_1 + 0x1ec)) {
      if ((unsigned __int64)*(unsigned int *)(param_1 + 0x1f0) != 0) {
        return (unsigned __int64)*(unsigned int *)(param_1 + 0x1f0);
      }
      fn_82A1E810(*(unsigned int *)(param_1 + 0x1d8));
      if (*(int *)(param_1 + 0x218) == 0) {
        return 0;
      }
      iVar5 = fn_825BD990(param_1);
      if (iVar5 == 0) {
        return 0xd;
      }
      goto LAB_825bd4ec;
    }
LAB_825bd4fc:
    uVar3 = 0x3e5;
  }
  return uVar3;
}

