#define _uStack00000020 ((*(unsigned __int64*)&uStack00000020))
#define _uStack00000028 ((*(unsigned __int64*)&uStack00000028))
#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
#define _uStack00000038 ((*(unsigned __int64*)&uStack00000038))
extern int fn_82AB15D0();
extern int fn_82BAF560();
extern int fn_82BC0088();
extern int fn_82BC0340();
extern int fn_82BC0400();
extern unsigned int lbl_820E35F8;
extern unsigned int uStack00000020;
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
extern unsigned int uStack_90;


/* WARNING: Removing unreachable block (ram,0x82baff70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82BB1A80(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  __int64 lVar10;
  unsigned int uStack00000020;
  unsigned int uStack00000024;
  unsigned int uStack00000028;
  unsigned int uStack0000002c;
  unsigned int uStack00000030;
  unsigned int uStack00000034;
  unsigned int uStack00000038;
  unsigned int uStack0000003c;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  
  _uStack00000028 = lbl_820E35F8;
  _uStack00000030 = lbl_820E35F8;
  _uStack00000038 = lbl_820E35F8;
  _uStack00000020 = param_2;
  if (*(char *)(*param_1 + 0x571) != '\0') {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfb98,0xffffffff820dfb20,0x157);
  }
  iVar1 = param_1[2];
  iVar4 = 0;
  iVar6 = 0x3a0;
  lVar10 = 4;
  puVar8 = &uStack_90;
  uStack_88 = uStack00000028;
  uStack_90 = uStack00000020;
  uStack_8c = uStack00000024;
  uStack_84 = uStack0000002c;
  uStack_80 = uStack00000030;
  uStack_7c = uStack00000034;
  uStack_78 = uStack00000038;
  uStack_74 = uStack0000003c;
  do {
    if (iVar4 < 1) {
      *(unsigned int *)(iVar6 + param_1[7]) = 1;
      puVar7 = (unsigned int *)((int)puVar8 + param_1[7] + (0x380 - (int)&uStack_90));
      uVar2 = puVar8[1];
      *puVar7 = *puVar8;
      puVar7[1] = uVar2;
    }
    else {
      *(unsigned int *)(iVar6 + param_1[7]) = 0;
    }
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + 4;
    puVar8 = puVar8 + 2;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  iVar4 = fn_82BC0340(iVar1,param_1[7]);
  if (iVar4 == 0) {
    param_1[9] = param_1[9] + 1;
    iVar4 = fn_82BAF560(param_1,0xb);
    if (*(int *)(*(int *)(iVar4 + 0x28) + 4) != 1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dfb7c,0xffffffff820dfb20,0x178);
    }
    iVar6 = *(int *)(iVar4 + 0x28);
    if (*(int *)(iVar6 + 4) == 0) {
      piVar5 = (int *)fn_82BC0088(iVar6,0);
    }
    else {
      piVar5 = *(int **)(iVar6 + 8);
    }
    iVar6 = 0;
    puVar7 = &uStack_90;
    puVar9 = (unsigned int *)(*piVar5 + 0x3a0);
    puVar8 = (unsigned int *)(*piVar5 + 0x380);
    lVar10 = 4;
    do {
      if (iVar6 < 1) {
        uVar2 = *puVar7;
        uVar3 = puVar7[1];
        *puVar9 = 1;
        *puVar8 = uVar2;
        puVar8[1] = uVar3;
      }
      else {
        *puVar9 = 0;
      }
      iVar6 = iVar6 + 1;
      puVar9 = puVar9 + 1;
      puVar7 = puVar7 + 2;
      puVar8 = puVar8 + 2;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    fn_82BC0400(iVar1);
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x1c);
  }
  return iVar4;
}

