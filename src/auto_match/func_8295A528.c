extern unsigned int *auStack_1f0;
extern unsigned int *auStack_210;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82935220();
extern int fn_82935258();
extern int fn_829352D0();
extern int fn_82F691F0();
extern unsigned int uStack_1d8;
extern unsigned int uStack_1e0;
extern unsigned int uStack_200;


__int64 fn_8295A528(int param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned int uVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  unsigned char auStack_210 [16];
  unsigned int uStack_200;
  unsigned char auStack_1f0 [8];
  __int64 lStack_1e8;
  unsigned __int64 uStack_1e0;
  unsigned int uStack_1d8;
  
  if (*(int *)(param_1 + 0x15c) == 0) {
    uVar6 = 0x42415443;
  }
  else {
    uVar6 = 0x464e4946;
  }
  fn_82935220(auStack_210,uVar6);
  uStack_1d8 = 0;
  lVar12 = 0;
  uStack_200 = 0;
  lStack_1e8 = (unsigned __int64)*(unsigned int *)(param_1 + 200) << 0x20;
  uStack_1e0 = (unsigned __int64)*(unsigned int *)(param_1 + 0xcc);
  lVar3 = fn_829352D0(auStack_210,auStack_1f0,0x1c,1,0,3);
  if (-1 < lVar3) {
    uVar13 = 0;
    uVar10 = 0;
    uVar9 = 0;
    uVar7 = 0;
    uVar5 = 0;
    if (*(unsigned int *)(param_1 + 8) != 0) {
      iVar8 = 0;
      do {
        puVar2 = *(unsigned int **)(*(int *)(param_1 + 0x14) + iVar8);
        if ((*puVar2 & 0x10000000) == 0) {
          uVar1 = *(unsigned int *)(*(int *)(puVar2[1] * 4 + *(int *)(param_1 + 0x10)) + 4);
          if ((uVar1 & 0x200) != 0) {
            if ((uVar1 & 0x100) == 0) {
              uVar11 = (unsigned __int64)puVar2[3];
              if ((uVar1 & 0x80) == 0) {
                if ((uVar1 & 0x2000) == 0) {
                  if ((uVar1 & 0x40000) == 0) {
                    if ((uVar10 & 0xffffffff) <= uVar11) {
                      uVar10 = uVar11 + 1;
                    }
                  }
                  else if ((uVar7 & 0xffffffff) <= uVar11) {
                    uVar7 = uVar11 + 1;
                  }
                }
                else if ((uVar13 & 0xffffffff) <= uVar11) {
                  uVar13 = uVar11 + 1;
                }
              }
              else if ((uVar9 & 0xffffffff) <= uVar11) {
                uVar9 = uVar11 + 1;
              }
            }
          }
        }
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + 4;
      } while (uVar5 < *(unsigned int *)(param_1 + 8));
    }
    lVar3 = (uVar7 + uVar9 + uVar10 + uVar13 & 0x3fffffff) << 2;
    lVar12 = fn_8265C940(lVar3,0x24810000);
    if (lVar12 != 0) {
      lVar4 = fn_8265C940(lVar3,0x24810000);
      uStack_200 = (unsigned int)lVar4;
      if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar12,0,lVar3);
      }
    }
    lVar3 = -0x7ff8fff2;
  }
  fn_8265C990(0,0x24810000);
  fn_8265C990(lVar12,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(uStack_200,0x24810000);
  fn_82935258(auStack_210);
  return lVar3;
}

