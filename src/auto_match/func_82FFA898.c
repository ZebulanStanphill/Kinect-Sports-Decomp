extern unsigned int _uStack00000020;
extern unsigned int _uStack00000028;
extern unsigned int _uStack00000030;
extern unsigned int fn_82FE72A0;
extern unsigned int lbl_832642E4;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;
#define CONCAT44(a, b) ((unsigned __int64)(((unsigned __int64)(a) << 32) | (unsigned __int64)(unsigned int)(b)))
#define ZEXT48(v) ((unsigned __int64)(unsigned int)(v))

/* WARNING: Inlined function: __savegprlr_23 */

unsigned __int64
fn_82FFA898(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
           unsigned __int64 param_5,unsigned __int64 param_6)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar4;
  int *piVar5;
  unsigned __int64 uVar3;
  unsigned short uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned int uStack00000020;
  unsigned int uStack00000028;
  unsigned int uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  int iStack_b0;
  unsigned int uStack_ac;
  int iStack_a8;
  int iStack_a4;
  unsigned char auStack_a0 [80];
  
  uVar7 = ZEXT48(&stack0x00000000);
  puVar1 = (unsigned int *)(uVar7 - 0x100);
  *puVar1 = register0x0000000c;
  lVar12 = 0;
  lVar9 = 0;
  _uStack00000020 = param_2;
  _uStack00000028 = param_3;
  _uStack00000030 = param_4;
  uStack00000038 = param_5;
  uStack00000040 = param_6;
  fn_8302B530();
  iVar4 = fn_8302B550(param_1 + 0x39c);
  if (*(unsigned int *)(iVar4 + 0x7c) != 0) {
    uVar10 = ((unsigned __int64)*(unsigned int *)(iVar4 + 0x7c) & 0x3fffffff) * -4 & 0xfffffff0;
    _RtlCheckStack(iVar4,iVar4);
    lVar11 = (uVar7 - 0x100) + uVar10;
    *(unsigned int *)lVar11 = *puVar1;
    lVar9 = lVar11 + 0x50;
    fn_82FFDE10(uVar7 - 0xb0);
    if (iStack_a8 != 0) {
      lVar11 = lVar11 + 0x4c;
      iVar4 = iStack_b0;
      uVar8 = uStack_ac;
      do {
        while ((*(unsigned char *)(iStack_a8 + 0x48) & 0x80) == 0) {
          iVar2 = *(int *)(iStack_a8 + 8);
          iStack_a4 = iStack_a8;
          while (iStack_a8 = iVar2, iStack_a8 == 0) {
            uStack_ac = uVar8 + 1;
            if (0x1e < uStack_ac) goto LAB_82ffa9d0;
            iStack_a4 = 0;
            uVar8 = uStack_ac;
            iVar2 = *(int *)(uStack_ac * 4 + iVar4);
          }
        }
        lVar11 = lVar11 + 4;
        *(int *)lVar11 = iStack_a8;
        lVar12 = lVar12 + 1;
        piVar5 = (int *)fn_8302B6A0(uVar7 - 0x90,param_1 + 0x39c,CONCAT44(iStack_b0,uStack_ac),
                                    CONCAT44(iStack_a8,iStack_a4));
        iStack_b0 = *piVar5;
        uStack_ac = piVar5[1];
        iStack_a8 = piVar5[2];
        iStack_a4 = piVar5[3];
        iVar4 = iStack_b0;
LAB_82ffa9d0:
        uVar8 = uStack_ac;
      } while (iStack_a8 != 0);
    }
  }
  fn_8302B540();
  uVar10 = lVar12 - 1;
  if (-1 < (__int64)uVar10) {
    lVar9 = (uVar10 & 0x3fffffff) * 4 + lVar9;
    do {
      iVar4 = *(int *)lVar9;
      fn_82FE71B8(uVar7 - 0xa0);
      uVar3 = fn_8300ECF8(param_1 + 0x4a4,uVar7 - 0xa0);
      if ((int)uVar3 == 1) {
        fn_82FF9FA8(iVar4);
        *(unsigned char **)(iVar4 + 0x30) = auStack_a0;
        *(int (***)())(iVar4 + 0x2c) = fn_82FE72A0;
        uVar6 = fn_8300F1A8();
        fn_8300F208(lbl_832642E4,uVar7 - 0x80,uVar6);
        uVar3 = fn_82FE6608();
      }
      fn_82FE7220(uVar7 - 0xa0,uVar3);
      uVar10 = uVar10 - 1;
      lVar9 = lVar9 + -4;
    } while (-1 < (__int64)uVar10);
  }
  uVar10 = 0xffffffffffffffff;
  uVar7 = 0;
  if (uStack00000020 < 8) {
    if (uStack00000020 == 1) {
LAB_82ffaaa8:
      uVar10 = _uStack00000030 & 0xffffffff;
LAB_82ffaaac:
      uVar7 = (unsigned __int64)uStack00000030;
      goto LAB_82ffaacc;
    }
    if ((uStack00000020 != 2) && (uStack00000020 != 3)) {
      if (uStack00000020 == 4) goto LAB_82ffaacc;
      if (uStack00000020 != 5) {
        if ((uStack00000020 != 6) && (uStack00000020 == 0)) goto LAB_82ffaaa8;
        goto LAB_82ffaaac;
      }
    }
  }
  uVar7 = -(unsigned __int64)(uStack00000030 == 1) & _uStack00000030 & 0xffffffff;
LAB_82ffaacc:
  fn_8300EE60(param_1 + 0x4a4,_uStack00000020 & 0xffffffff,uVar7,1,uVar10,uStack00000028);
  return 1;
}
