typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_110;
extern unsigned int *auStack_160;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern int fn_825402B0();
extern int fn_82540438();
extern int fn_82540870();
extern int fn_82540B48();
extern int fn_82540EF0();
extern int fn_825C7348();
extern int fn_825D5FE8();
extern int fn_825D6090();
extern int fn_825D6140();
extern int fn_825EE970();
extern int fn_82622CC0();
extern int fn_82623298();
extern int fn_82623338();
extern int fn_82639EA8();
extern int fn_82F68CC0();
extern unsigned int uStack_16c;


void fn_825EE638(int param_1)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  bool bVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  int iVar11;
  unsigned char auStack_1b0 [68];
  unsigned int uStack_16c;
  unsigned char auStack_160 [80];
  unsigned char auStack_110 [80];
  unsigned char auStack_c0 [64];
  unsigned char auStack_80 [128];
  
  piVar2 = *(int **)((*(unsigned int *)(*(int *)(param_1 + 4) + 0xaf0) % 3 + 9) * 4 + param_1);
  iVar1 = *piVar2;
  if (*(char *)(*(int *)(param_1 + 4) + 0xbdc) == '\0') {
    fn_825C7348(1);
    uVar4 = fn_825C7348(0);
    fn_82623298(piVar2,uVar4);
    fn_82622CC0(param_1,piVar2);
    fn_82639EA8(iVar1,((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                            (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174);
    *(unsigned int *)(iVar1 + 0x2f14) = 1;
    *(unsigned int *)(iVar1 + 0x2934) =
         (-(unsigned int)(*(int *)(iVar1 + 0x3158) != 0) & 1) << 1 | *(unsigned int *)(iVar1 + 0x2934) & 0xfffffffd;
    uVar6 = *(unsigned __int64 *)(iVar1 + 0x10);
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x800;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x20800;
    *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) | 4;
    *(unsigned __int64 *)(iVar1 + 0x10) = *(unsigned __int64 *)(iVar1 + 0x10) | 0x800;
    *(unsigned int *)(iVar1 + 0x2934) = *(unsigned int *)(iVar1 + 0x2934) & 0xffffff8f | 0x60;
    uVar6 = *(unsigned __int64 *)(iVar1 + 0x10);
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x800;
    *(unsigned __int64 *)(iVar1 + 0x10) = uVar6 | 0x20800;
    uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0xae4) + 2;
    fn_825402B0(auStack_110,*(unsigned int *)(param_1 + 0x18),0x40,
                    uVar6 + ((__int64)((int)uVar6 >> 2) +
                             (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 3) != 0) & 0x3fffffff) * -4,
                    *(unsigned int *)(param_1 + 0x10),1,0);
    uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0xae4) + 2;
    fn_825402B0(auStack_160,*(unsigned int *)(param_1 + 0x18),8,
                    uVar6 + ((__int64)((int)uVar6 >> 2) +
                             (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 3) != 0) & 0x3fffffff) * -4,
                    *(unsigned int *)(param_1 + 0x10));
    uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0xae4) + 2;
    fn_825402B0(auStack_1b0,*(unsigned int *)(param_1 + 0x18),1,
                    uVar6 + ((__int64)((int)uVar6 >> 2) +
                             (unsigned __int64)((int)uVar6 < 0 && (uVar6 & 3) != 0) & 0x3fffffff) * -4,
                    *(unsigned int *)(param_1 + 0x10));
    uStack_16c = 1;
    fn_82540EF0((double)*(float *)(*(int *)(param_1 + 4) + 0xaec),
                      *(unsigned int *)(param_1 + 0x18));
    lVar9 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
            (unsigned __int64)*(unsigned int *)(param_1 + 4);
    fn_82F68CC0(auStack_c0,lVar9 + 0x50,0x40);
    fn_82F68CC0(auStack_80,lVar9 + 0x90,0x40);
    fn_82540870(*(unsigned int *)(param_1 + 0x18),auStack_c0);
    fn_82540B48(*(unsigned int *)(param_1 + 0x18),auStack_80);
    fn_82540438(((unsigned __int64)*(unsigned int *)(param_1 + 0x10) & 0x7fffff) * 0x200 +
                    (unsigned __int64)*(unsigned int *)(param_1 + 4) + 0x174,*(unsigned int *)(param_1 + 0x18),8);
    fn_825D6140(*(unsigned int *)(param_1 + 0x1c),iVar1);
    fn_825D5FE8(*(unsigned int *)(param_1 + 0x1c));
    uVar3 = *(unsigned int *)((*(int *)(param_1 + 0x10) + 1) * 4 + *(int *)(param_1 + 8));
    uVar6 = (unsigned __int64)uVar3;
    if (0 < (int)uVar3) {
      iVar8 = 0;
      iVar10 = 0;
      do {
        piVar7 = (int *)(*(int *)((*(int *)(param_1 + 0x10) + 3) * 4 + *(int *)(param_1 + 8)) +
                        iVar8);
        if ((piVar7[4] == 0) || (bVar5 = true, *(int *)(*(int *)*piVar7 + 0x90) == 0)) {
          bVar5 = false;
        }
        iVar11 = iVar10;
        if (bVar5) {
          iVar11 = *piVar7;
          if (((*(int *)(iVar11 + 0x84) == 0) ||
              (*(int *)(iVar11 + 0x84) + -1 != *(int *)(param_1 + 0x10))) || (iVar10 != 0)) {
            fn_825EE970(param_1,iVar11,auStack_160,auStack_110,auStack_1b0);
            iVar11 = iVar10;
          }
        }
        uVar6 = uVar6 - 1;
        iVar8 = iVar8 + 0x18;
        iVar10 = iVar11;
      } while (uVar6 != 0);
      if (iVar11 != 0) {
        fn_825EE970(param_1,iVar11,auStack_160,auStack_110,auStack_1b0);
      }
    }
    fn_825D6090(*(unsigned int *)(param_1 + 0x1c),iVar1,0x40);
  }
  else {
    fn_82623298(piVar2,0,0);
  }
  fn_82623338(piVar2);
  return;
}

