#define _iStack00000020 ((*(unsigned __int64*)&iStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
#define _uStack00000038 ((*(unsigned __int64*)&uStack00000038))
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82B7C5A8();
extern int fn_82BAF4A8();
extern int fn_82BC0340();
extern int fn_82BC0400();
extern int fn_82BC38E0();
extern unsigned int iStack00000020;
extern unsigned int iStack_90;
extern unsigned int lbl_820E35F8;
extern unsigned int uStack00000024;
extern unsigned int uStack00000028;
extern unsigned int uStack0000002c;
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;
extern unsigned int uStack0000003c;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


/* WARNING: Removing unreachable block (ram,0x82baf698) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82BB0190(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  __int64 lVar10;
  int iStack00000020;
  unsigned int uStack00000024;
  unsigned int uStack00000028;
  unsigned int uStack0000002c;
  unsigned int uStack00000030;
  unsigned int uStack00000034;
  unsigned int uStack00000038;
  unsigned int uStack0000003c;
  int iStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  
  _uStack00000038 = lbl_820E35F8;
  _iStack00000020 = param_2;
  _uStack00000028 = param_3;
  _uStack00000030 = param_4;
  if (*(char *)(*param_1 + 0x571) == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfb08,0xffffffff820dfb20,0x1a6);
  }
  iVar1 = param_1[4];
  iVar4 = 0;
  iVar7 = 0x3a0;
  lVar10 = 4;
  piVar9 = &iStack_90;
  uStack_78 = uStack00000038;
  iStack_90 = iStack00000020;
  uStack_8c = uStack00000024;
  uStack_88 = uStack00000028;
  uStack_84 = uStack0000002c;
  uStack_80 = uStack00000030;
  uStack_7c = uStack00000034;
  uStack_74 = uStack0000003c;
  do {
    if (iVar4 < 3) {
      *(unsigned int *)(iVar7 + param_1[7]) = 1;
      piVar8 = (int *)((int)piVar9 + param_1[7] + (0x380 - (int)&iStack_90));
      iVar2 = piVar9[1];
      *piVar8 = *piVar9;
      piVar8[1] = iVar2;
    }
    else {
      *(unsigned int *)(iVar7 + param_1[7]) = 0;
    }
    iVar4 = iVar4 + 1;
    iVar7 = iVar7 + 4;
    piVar9 = piVar9 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar4 = fn_82BC0340(iVar1,param_1[7]);
  if (iVar4 == 0) {
    uVar6 = *(unsigned int *)(*param_1 + 0x5ac);
    puVar5 = (unsigned int *)fn_82B7BD28(uVar6,0x3c4);
    *puVar5 = uVar6;
    if (puVar5 + 1 == (unsigned int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = fn_82BC38E0(puVar5 + 1,*param_1);
    }
    if (*(char *)(*param_1 + 0x570) == '\0') {
      iVar7 = param_1[9];
      param_1[9] = iVar7 + 1;
      *(int *)(iVar4 + 0x38) = iVar7 + 1;
      *(unsigned int *)(iVar4 + 0x50) = 0xb;
    }
    else {
      uVar6 = fn_82BAF4A8(param_1);
      *(unsigned int *)(iVar4 + 0x38) = uVar6;
      lVar10 = 0;
      *(unsigned int *)(iVar4 + 0x50) = 0xb;
      piVar9 = &iStack_90;
      do {
        if (*piVar9 != 0) {
          fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfacc,0xffffffff820dfb20,0x1c9);
        }
        fn_82B7C5A8(*param_1,*(unsigned int *)(iVar4 + 0x38),lVar10,*(unsigned __int64 *)piVar9);
        lVar10 = lVar10 + 1;
        piVar9 = piVar9 + 2;
      } while ((int)lVar10 < 3);
    }
    iVar7 = 0;
    piVar8 = &iStack_90;
    puVar5 = (unsigned int *)(iVar4 + 0x3a0);
    piVar9 = (int *)(iVar4 + 0x380);
    lVar10 = 4;
    do {
      if (iVar7 < 3) {
        iVar2 = *piVar8;
        iVar3 = piVar8[1];
        *puVar5 = 1;
        *piVar9 = iVar2;
        piVar9[1] = iVar3;
      }
      else {
        *puVar5 = 0;
      }
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      piVar8 = piVar8 + 2;
      piVar9 = piVar9 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    piVar9 = *(int **)(*(int *)(*param_1 + 0xab0) + 0xa4);
    (**(int (***)())(*piVar9 + 0x28))(piVar9,iVar4);
    fn_82BC0400(iVar1,iVar4);
  }
  return iVar4;
}

