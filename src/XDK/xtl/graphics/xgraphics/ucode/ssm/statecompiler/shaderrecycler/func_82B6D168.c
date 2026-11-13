extern int fn_82AB15D0();
extern int fn_82AB60F0();
extern int fn_82AB63F8();
extern int fn_82AB66F8();
extern int fn_82AB67A8();
extern int fn_82AB6DA0();
extern int fn_82AB6EC0();
extern int fn_82AB7718();
extern int fn_82AB9898();
extern int fn_82B69A00();
extern int fn_82B6CD48();
extern int fn_82B7FEE0();
extern int fn_82B7FFE8();
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_b0;
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


unsigned __int64 fn_82B6D168(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar7;
  unsigned int uVar8;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int uVar9;
  int *piVar10;
  unsigned __int64 uStack_c0;
  unsigned __int64 uStack_b8;
  unsigned __int64 uStack_b0;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  
  if (param_1 == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9c10,0xffffffff820d9c18,0x318);
  }
  if ((param_2 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d6854,0xffffffff820d9c18,0x319);
  }
  if ((param_3 & 0xffffffff) == 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f38,0xffffffff820d9c18,0x31a);
  }
  uVar1 = fn_82AB6EC0(param_2,1);
  uVar2 = fn_82AB6EC0(param_2,0);
  iVar7 = fn_82B69A00(*(unsigned int *)(param_1 + 0x10),9);
  if (iVar7 != 0) {
    uStack_c0 = 0;
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uVar1 = fn_82AB9898(*(unsigned int *)(param_1 + 0xc),uVar1);
    uVar2 = fn_82AB9898(*(unsigned int *)(param_1 + 0xc),uVar2);
    uVar8 = fn_82AB60F0();
    iVar7 = fn_82AB60F0(uVar1);
    if ((iVar7 != 0) && (uVar8 != 0)) {
      for (lVar3 = fn_82AB63F8(uVar1); lVar3 != 0; lVar3 = fn_82AB66F8(uVar1,lVar3)) {
        lVar4 = fn_82AB67A8(lVar3);
        if (lVar4 == 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce8,0xffffffff820d9c18,0x33a);
        }
        iVar7 = fn_82AB7718(lVar4,param_2);
        if (iVar7 != 0) {
          uVar5 = fn_82AB63F8(uVar2);
          uVar9 = 0;
          if (uVar8 != 0) {
            piVar10 = (int *)&uStack_c0;
            do {
              if ((uVar5 & 0xffffffff) == 0) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9f2c,0xffffffff820d9c18,0x348);
              }
              lVar6 = fn_82AB67A8(uVar5);
              if (lVar6 == 0) {
                fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d9ce0,0xffffffff820d9c18,0x34b);
              }
              if (*piVar10 == 0) {
                iVar7 = fn_82AB7718(lVar6,param_2);
                if (iVar7 == 0) {
                  *piVar10 = 2;
                  goto LAB_82b6d388;
                }
                *piVar10 = 1;
LAB_82b6d394:
                iVar7 = fn_82B6CD48(lVar4,lVar6);
                if (iVar7 != 0) {
                  fn_82AB6DA0(lVar4);
                  fn_82AB6DA0(lVar6);
                  fn_82B7FEE0(param_3,lVar4,param_2);
                  fn_82B7FFE8(param_3,lVar6,param_2);
                  return 1;
                }
              }
              else {
LAB_82b6d388:
                if (*piVar10 == 1) goto LAB_82b6d394;
              }
              uVar9 = uVar9 + 1;
              piVar10 = piVar10 + 1;
            } while (uVar9 < uVar8);
          }
        }
      }
    }
  }
  return 0;
}

