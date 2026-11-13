#define true 1
extern unsigned int *auStack_a0;
extern int fn_8250C280();
extern int fn_827F6960();
extern int fn_827F6990();
extern int fn_827F7210();
extern int fn_828114A8();
extern int fn_82811500();
extern int fn_828116B8();
extern unsigned int iStack_ac;
extern unsigned int iStack_b0;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


void fn_8250C3B0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  __int64 lVar13;
  int iStack_b0;
  int iStack_ac;
  int aiStack_a8 [2];
  unsigned int auStack_a0 [4];
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  
  uVar2 = fn_827F7210();
  iVar4 = (int)((uVar2 & 0xffff) + 7) >> 3;
  lVar12 = (__int64)iVar4;
  fn_827F6960(param_1,&iStack_ac);
  fn_827F6960(param_2,aiStack_a8);
  fn_827F6960(param_3,&iStack_b0);
  iVar3 = 0;
  if (iVar4 != 0) {
    do {
      *(unsigned char *)(iVar3 + iStack_b0) = *(unsigned char *)(iVar3 + aiStack_a8[0]) | *(unsigned char *)(iVar3 + iStack_ac)
      ;
      iVar3 = iVar3 + 1;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  lVar9 = 0;
  lVar12 = 0;
  lVar8 = 0;
  fn_827F6990(param_1,&iStack_ac);
  fn_827F6990(param_2,aiStack_a8);
  fn_827F6990(param_3,&iStack_b0);
  uVar2 = 0;
  do {
    auStack_a0[0] = uVar2;
    fn_8250C280(param_1,param_2,param_3,auStack_a0);
    uVar11 = 0;
    uVar7 = (unsigned __int64)uStack_88;
    uVar6 = (unsigned __int64)uStack_8c;
    uVar5 = (unsigned __int64)uStack_90;
    if (uVar7 != 0) {
      lVar10 = lVar8 - lVar9;
      lVar13 = lVar9;
      do {
        fn_82811500(iStack_b0,lVar13);
        lVar1 = lVar10;
        if ((uVar11 & 0xffffffff) < uVar5) {
          if ((uVar11 & 0xffffffff) < uVar6) {
            iVar3 = fn_828116B8(iStack_ac,lVar10 + lVar13 + (lVar12 - lVar8));
            iVar4 = aiStack_a8[0];
            if (iVar3 == 0) goto LAB_8250c4f8;
          }
          else {
            lVar1 = lVar10 + (lVar12 - lVar8);
            iVar4 = iStack_ac;
LAB_8250c4f8:
            iVar4 = fn_828116B8(iVar4,lVar1 + lVar13);
            if (iVar4 == 0) goto LAB_8250c510;
          }
          fn_828114A8(iStack_b0,lVar13);
        }
        else {
          iVar4 = aiStack_a8[0];
          if ((uVar11 & 0xffffffff) < uVar6) goto LAB_8250c4f8;
        }
LAB_8250c510:
        uVar11 = uVar11 + 1;
        lVar13 = lVar13 + 1;
      } while ((uVar11 & 0xffffffff) < uVar7);
    }
    uVar2 = uVar2 + 1;
    lVar9 = uVar7 + lVar9;
    lVar12 = uVar5 + lVar12;
    lVar8 = uVar6 + lVar8;
    if (1 < uVar2) {
      return;
    }
  } while( true );
}

