typedef unsigned char bool;
extern unsigned int *auStack_70;
extern int fn_82AB15D0();
extern int fn_82BA0C40();
extern int fn_82BC24F0();
extern int fn_82BC2580();
extern int fn_82BC5538();
extern int fn_82BC6E18();
extern int fn_82BC90F0();
extern unsigned int lbl_820E4F58;
extern unsigned int lbl_820E4F5C;
extern unsigned int lbl_820E4F60;
extern unsigned int lbl_820E4F64;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82BC93D8(int param_1,int param_2,__int64 param_3,int param_4,int param_5,int param_6,
                  int param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  unsigned int *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned char in_stack_00000067;
  int in_stack_0000006c;
  unsigned int in_stack_00000074;
  unsigned int auStack_70 [5];
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  param_2 = param_2 * 0x10;
  uStack_5c = *(unsigned int *)(&lbl_820E4F5C + param_2);
  uStack_58 = *(unsigned int *)(&lbl_820E4F60 + param_2);
  uStack_54 = *(unsigned int *)(&lbl_820E4F64 + param_2);
  if (((int)param_3 == 0) && ((uStack_5c & 0x80000000) != 0)) {
    puVar11 = *(unsigned int **)(((uStack_58 >> 0x1d) * 6 + (*(unsigned int *)(&lbl_820E4F58 + param_2) >> 0x1d)) *
                         4 + param_4);
    uVar1 = *puVar11;
    uVar2 = *(unsigned int *)((uVar1 >> 0xd & 0x1f8) + *(int *)(param_1 + 0x5c) + 4);
    *(int *)(param_6 + 0x38) = (int)(short)uVar1;
    *(unsigned int *)(param_6 + 0x50) = uVar2;
    fn_82BC90F0(param_1,in_stack_0000005c,param_8,puVar11,0,param_6,in_stack_00000067);
  }
  else {
    uVar1 = *(unsigned int *)(&lbl_820E4F58 + param_2) >> 0x1d;
    iVar9 = ((uStack_58 >> 0x1d) * 6 + uVar1) * 4;
    if ((uStack_5c & 0x80000000) == 0) {
      puVar11 = *(unsigned int **)(iVar9 + param_5);
      puVar7 = puVar11;
    }
    else {
      puVar7 = *(unsigned int **)(iVar9 + param_4);
      puVar11 = auStack_70;
      auStack_70[0] =
           (unsigned int)(unsigned short)*puVar7 | auStack_70[0] & 0xff400000 | *puVar7 & 0x3f0000 |
           *puVar7 & 0x800000;
      puVar7 = (unsigned int *)0x0;
    }
    uVar3 = *puVar11;
    iVar8 = 0;
    bVar4 = (uVar3 >> 0x17 & 1) != 0;
    uVar12 = uVar3 >> 0x10 & 0x3f;
    iVar9 = (int)(short)uVar3;
    if (bVar4) {
      iVar8 = *(int *)((uVar1 + param_7) * 4 + in_stack_0000006c) + (uStack_58 >> 0x1d);
    }
    if (((uStack_5c & 0x40000000) == 0) && (uVar12 == 1)) {
      iVar10 = *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) + -1;
      *(int *)(*(int *)(param_1 + 0xc) + 0x5e4) = iVar10;
      iVar5 = fn_82BC24F0(0x31,*(unsigned int *)(param_1 + 0xc));
      *(int *)(iVar5 + 0x38) = iVar10;
      *(unsigned int *)(iVar5 + 0x50) = 0;
      uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x5c) + 0xc);
      *(int *)(iVar5 + 0x3c) = iVar9;
      *(unsigned int *)(iVar5 + 0x54) = uVar2;
      if (bVar4) {
        *(int *)(iVar5 + 0xcc) = iVar8;
        *puVar11 = *puVar11 & 0xff7fffff;
      }
      fn_82BC6E18(param_1,in_stack_00000054,puVar11,param_3,iVar5);
      fn_82BA0C40(param_1,iVar5);
      fn_82BC5538(in_stack_00000074,iVar5);
      cVar6 = fn_82BC2580(iVar5);
      if (cVar6 == '\0') {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820dece8,0xffffffff820e74a8,0x4ed);
      }
      uVar12 = 4;
      *puVar11 = *puVar11 & 0xff3fffff;
      *(short *)((int)puVar11 + 2) = (short)iVar10;
      *puVar11 = *puVar11 & 0xffc0ffff | 0x40000;
      iVar9 = iVar10;
    }
    else {
      fn_82BC6E18(param_1,in_stack_00000054,puVar7,param_3,param_6);
    }
    *(int *)((int)((param_3 + 0x32U & 0xffffffff) << 2) + param_6) = iVar8;
    uVar2 = *(unsigned int *)(uVar12 * 8 + *(int *)(param_1 + 0x5c) + 4);
    *(int *)((int)((param_3 + 0xeU & 0xffffffff) << 2) + param_6) = iVar9;
    *(unsigned int *)((int)((param_3 + 0x14U & 0xffffffff) << 2) + param_6) = uVar2;
  }
  return;
}

