typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
#define TBLr 0
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DA6A58();
extern int fn_82DA6BA8();
extern int fn_82DBA1E0();
extern int fn_82F69148();
extern int fn_83088518();
extern unsigned int iStack_88;
extern unsigned int iStack_8c;
extern unsigned int lbl_82132BC4;
extern unsigned int lbl_8323B4A0;
extern unsigned int uStack_70;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_90;
extern V16 vectorAddFloatingPoint();


void fn_82D87B28(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 in_r0;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  int *piVar12;
  unsigned __int64 uVar13;
  int iVar14;
  bool bVar15;
  unsigned char in_vs32 [16];
  unsigned char in_vs42 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_00010090;
  unsigned int in_register_00010094;
  unsigned int in_register_00010098;
  unsigned int in_vr9;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  unsigned int uStack_90;
  int iStack_8c;
  struct { int first; unsigned int second; } stack_pair_88;

  unsigned int uStack_80;
  struct { unsigned int first; unsigned int second; } stack_pair_78;

  unsigned int uStack_70;

  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = "TtBroadphase Shift";
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  stack_pair_78.first = 0;
  stack_pair_78.second = 0;
  uStack_70 = 0x80000000;
  (**(int (***)())(**(int **)(param_1 + 0x58) + 0x54))
            (*(int **)(param_1 + 0x58),param_2,param_3,&stack_pair_78.first);
  (**(int (***)())(**(int **)(param_1 + 0x58) + 0x58))
            (*(int **)(param_1 + 0x58),(unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0x20,
             (unsigned __int64)*(unsigned int *)(param_1 + 0x78) + 0x30);
  vectorAddFloatingPoint(in_vs32,in_vs45);
  puVar1 = (unsigned int *)((int)in_r0 + param_1 + 0x310 & 0xfffffff0);
  *puVar1 = in_register_000100c0;
  puVar1[1] = in_register_000100c4;
  puVar1[2] = in_register_000100c8;
  puVar1[3] = in_vr12;
  vectorAddFloatingPoint(in_vs43,in_vs42);
  puVar1 = (unsigned int *)((int)in_r0 + param_1 + 800 & 0xfffffff0);
  *puVar1 = in_register_00010090;
  puVar1[1] = in_register_00010094;
  puVar1[2] = in_register_00010098;
  puVar1[3] = in_vr9;
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7c) + 8;
  if ((unsigned __int64)*(unsigned int *)(param_1 + 0x7c) == 0) {
    lVar9 = 0;
  }
  fn_83088518(*(unsigned int *)(param_1 + 100),stack_pair_78.first,stack_pair_78.second,lVar9);
  if (*(int *)(param_1 + 0x1bc) != 0) {
    piVar7 = (int *)(*(int *)(param_1 + 0x1bc) + 0x18);
    lVar9 = 6;
    do {
      piVar12 = (int *)*piVar7;
      uVar5 = (**(int (***)())(*piVar12 + 0x14))(piVar12);
      iVar4 = (int)in_r0;
      if (uVar5 == 0) {
        vectorAddFloatingPoint(in_vs45,in_vs32);
        puVar1 = (unsigned int *)((int)piVar12 + iVar4 + 0xb0 & 0xfffffff0);
        *puVar1 = in_register_000100c0;
        puVar1[1] = in_register_000100c4;
        puVar1[2] = in_register_000100c8;
        puVar1[3] = in_vr12;
        vectorAddFloatingPoint(in_vs42,in_vs43);
        puVar1 = (unsigned int *)((int)piVar12 + iVar4 + 0xc0 & 0xfffffff0);
        *puVar1 = in_register_00010090;
        puVar1[1] = in_register_00010094;
        puVar1[2] = in_register_00010098;
        puVar1[3] = in_vr9;
      }
      else if (uVar5 < 3) {
        vectorAddFloatingPoint(in_vs45,in_vs32);
        puVar1 = (unsigned int *)((int)piVar12 + iVar4 + 0xe0 & 0xfffffff0);
        *puVar1 = in_register_000100c0;
        puVar1[1] = in_register_000100c4;
        puVar1[2] = in_register_000100c8;
        puVar1[3] = in_vr12;
      }
      lVar9 = lVar9 + -1;
      piVar7 = piVar7 + 1;
    } while (lVar9 != 0);
  }
  if (param_4 != 0) goto LAB_82d87ee0;
  iVar4 = *(int *)(param_1 + 0x20);
  stack_pair_88.first = 0;
  stack_pair_88.second = 0;
  lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38) + (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) + 1;
  uStack_80 = 0x80000000;
  uStack_90 = (unsigned int)lVar9;
  iStack_8c = iVar4;
  if (lVar9 == 0) {
    piVar7 = (int *)0x0;
    uVar11 = 0;
LAB_82d87d20:
    uVar13 = 0xffffffff80000000;
  }
  else {
    iVar6 = fn_82CE5410();
    piVar7 = (int *)(**(int (***)())(**(int **)(iVar6 + 0x10) + 0xc))
                              (*(int **)(iVar6 + 0x10),&uStack_90,4);
    uVar11 = (unsigned __int64)uStack_90;
    uVar13 = uVar11;
    if (uStack_90 == 0) goto LAB_82d87d20;
  }
  bVar15 = iVar4 != 0;
  if (bVar15) {
    fn_82F69148(piVar7,-(unsigned int)(iVar4 != 0) & (unsigned int)&iStack_8c,4);
  }
  uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  piVar12 = piVar7 + bVar15;
  if (0 < (int)*(unsigned int *)(param_1 + 0x2c)) {
    iVar4 = *(int *)(param_1 + 0x28) - (int)piVar12;
    do {
      *piVar12 = *(int *)(iVar4 + (int)piVar12);
      piVar12 = piVar12 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0x38);
  piVar12 = piVar7 + (unsigned int)bVar15 + *(int *)(param_1 + 0x2c);
  if (0 < (int)*(unsigned int *)(param_1 + 0x38)) {
    iVar4 = *(int *)(param_1 + 0x34) - (int)piVar12;
    do {
      *piVar12 = *(int *)(iVar4 + (int)piVar12);
      piVar12 = piVar12 + 1;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  piVar12 = piVar7;
  if (0 < (int)uVar11) {
    do {
      iVar4 = *piVar12;
      iVar6 = 0;
      if (0 < *(int *)(iVar4 + 0x4c)) {
        iVar14 = 0;
        do {
          iVar2 = *(int *)(iVar4 + 0x48);
          if (*(int *)(*(int *)(iVar2 + iVar14) + 0x10) != 0) {
            iVar8 = fn_82CE5410();
            if (stack_pair_88.second == (uStack_80 & 0x3fffffff)) {
              fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),&stack_pair_88.first,4);
            }
            *(unsigned int *)(stack_pair_88.second * 4 + stack_pair_88.first) = *(unsigned int *)(iVar2 + iVar14);
            stack_pair_88.second = stack_pair_88.second + 1;
          }
          iVar6 = iVar6 + 1;
          iVar14 = iVar14 + 4;
        } while (iVar6 < *(int *)(iVar4 + 0x4c));
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 1;
    } while (uVar11 != 0);
  }
  fn_82DBA1E0(*(unsigned int *)(param_1 + 0x78),stack_pair_88.first,stack_pair_88.second);
  iVar4 = fn_82CE5410();
  if ((uVar13 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),piVar7,uVar13 & 0x3fffffff,4);
  }
  iVar4 = fn_82CE5410();
  stack_pair_88.second = 0;
  if ((uStack_80 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),stack_pair_88.first,uStack_80 & 0x3fffffff,4);
  }
  stack_pair_88.first = 0;
  uStack_80 = 0x80000000;
LAB_82d87ee0:
  lVar9 = (unsigned __int64)*(unsigned int *)(param_1 + 0x94) - 1;
  *(int *)(param_1 + 0x94) = (int)lVar9;
  if ((lVar9 == 0) && (*(char *)(param_1 + 0x9c) == '\0')) {
    if (*(int *)(param_1 + 0x8c) != 0) {
      *(unsigned int *)(param_1 + 0x8c) = 0;
      fn_82DA6BA8(*(unsigned int *)(param_1 + 0x88));
    }
    if ((*(int *)(param_1 + 0xa4) == 1) && (*(int *)(param_1 + 0x90) != 0)) {
      *(unsigned int *)(param_1 + 0x90) = 0;
      fn_82DA6A58(*(unsigned int *)(param_1 + 0x88));
    }
  }
  iVar4 = KeTlsGetValue(lbl_8323B4A0);
  puVar1 = *(unsigned int **)(iVar4 + 4);
  if (puVar1 < *(unsigned int **)(iVar4 + 0xc)) {
    *puVar1 = &lbl_82132BC4;
    uVar3 = TBLr;
    puVar1[1] = (int)uVar3;
    *(unsigned int **)(iVar4 + 4) = puVar1 + 3;
  }
  iVar4 = fn_82CE5410();
  stack_pair_78.second = 0;
  if ((uStack_70 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),stack_pair_78.first,uStack_70 & 0x3fffffff,8);
  }
  return;
}
