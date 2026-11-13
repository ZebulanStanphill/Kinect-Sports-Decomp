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
extern unsigned int iStack_94;
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


int fn_82BAF628(int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                 unsigned __int64 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int iVar6;
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
  int aiStack_a4 [4];
  int iStack_94;
  int iStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  
  _iStack00000020 = param_3;
  _uStack00000028 = param_4;
  _uStack00000030 = param_5;
  _uStack00000038 = param_6;
  if (*(char *)(*param_1 + 0x571) == '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfb08,0xffffffff820dfb20,0x1a6);
  }
  if ((param_2 < 1) || (4 < param_2)) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfadc,0xffffffff820dfb20,0x1a7);
  }
  aiStack_a4[1] = param_1[2];
  aiStack_a4[2] = param_1[3];
  aiStack_a4[3] = param_1[4];
  iVar6 = 0;
  iVar3 = 0x3a0;
  iStack_94 = param_1[5];
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
    if (iVar6 < param_2) {
      *(unsigned int *)(iVar3 + param_1[7]) = 1;
      piVar8 = (int *)((int)piVar9 + param_1[7] + (0x380 - (int)&iStack_90));
      iVar7 = piVar9[1];
      *piVar8 = *piVar9;
      piVar8[1] = iVar7;
    }
    else {
      *(unsigned int *)(iVar3 + param_1[7]) = 0;
    }
    iVar6 = iVar6 + 1;
    iVar3 = iVar3 + 4;
    piVar9 = piVar9 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar6 = aiStack_a4[param_2];
  iVar3 = fn_82BC0340(iVar6,param_1[7]);
  if (iVar3 == 0) {
    uVar5 = *(unsigned int *)(*param_1 + 0x5ac);
    puVar4 = (unsigned int *)fn_82B7BD28(uVar5,0x3c4);
    *puVar4 = uVar5;
    if (puVar4 + 1 == (unsigned int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_82BC38E0(puVar4 + 1,*param_1);
    }
    if (*(char *)(*param_1 + 0x570) == '\0') {
      iVar7 = param_1[9];
      param_1[9] = iVar7 + 1;
      *(int *)(iVar3 + 0x38) = iVar7 + 1;
      *(unsigned int *)(iVar3 + 0x50) = 0xb;
    }
    else {
      uVar5 = fn_82BAF4A8(param_1);
      *(unsigned int *)(iVar3 + 0x38) = uVar5;
      lVar10 = 0;
      *(unsigned int *)(iVar3 + 0x50) = 0xb;
      if (0 < param_2) {
        piVar9 = &iStack_90;
        do {
          if (*piVar9 != 0) {
            fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfacc,0xffffffff820dfb20,0x1c9);
          }
          fn_82B7C5A8(*param_1,*(unsigned int *)(iVar3 + 0x38),lVar10,*(unsigned __int64 *)piVar9);
          lVar10 = lVar10 + 1;
          piVar9 = piVar9 + 2;
        } while ((int)lVar10 < param_2);
      }
    }
    iVar7 = 0;
    piVar8 = &iStack_90;
    puVar4 = (unsigned int *)(iVar3 + 0x3a0);
    piVar9 = (int *)(iVar3 + 0x380);
    lVar10 = 4;
    do {
      if (iVar7 < param_2) {
        iVar1 = *piVar8;
        iVar2 = piVar8[1];
        *puVar4 = 1;
        *piVar9 = iVar1;
        piVar9[1] = iVar2;
      }
      else {
        *puVar4 = 0;
      }
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 1;
      piVar8 = piVar8 + 2;
      piVar9 = piVar9 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    piVar9 = *(int **)(*(int *)(*param_1 + 0xab0) + 0xa4);
    (**(int (***)())(*piVar9 + 0x28))(piVar9,iVar3);
    fn_82BC0400(iVar6,iVar3);
  }
  return iVar3;
}

