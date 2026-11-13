typedef unsigned char bool;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_e0;
extern int fn_8294AC48();
extern int fn_82964628();
extern unsigned int lbl_82005710;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


unsigned __int64 fn_8294FC18(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int auStack_140 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_130;

  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned char auStack_120 [64];
  unsigned int auStack_e0 [4];
  int aiStack_d0 [44];
  
  uStack_124 = 3;
  uVar2 = **(unsigned int **)(param_1 + 0x104);
  auStack_140[0] = 0;
  uVar9 = uVar2 & 0xfffff;
  stack_pair_130.first = 0;
  stack_pair_130.second = 1;
  uStack_128 = 2;
  uVar3 = fn_8294AC48(param_1,*(unsigned int **)(param_1 + 0x104),0xffffffff82036a90,auStack_120,
                        auStack_140,auStack_e0,&stack_pair_130.first,uVar9);
  bVar1 = (int)uVar3 != 1;
  if (!bVar1) {
    uVar3 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),0xffffffff82036b10,auStack_120,
                          auStack_140,auStack_e0,&stack_pair_130.first,uVar9);
  }
  if ((int)uVar3 == 0) {
    uVar5 = 0;
    if ((uVar2 & 0xfffff) != 0) {
      piVar7 = aiStack_d0;
      do {
        if (((piVar7[-4] != *piVar7) || (*piVar7 != piVar7[4])) || (piVar7[-4] != piVar7[8])) {
          return 1;
        }
        uVar5 = uVar5 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar5 < uVar9);
    }
    if (bVar1) {
      uVar5 = 0x74500000;
    }
    else {
      uVar5 = 0x74400000;
    }
    **(unsigned int **)(param_1 + 0x104) = uVar5 | uVar9;
    iVar4 = fn_82964628(lbl_82005710,param_1,*(unsigned int *)(param_1 + 0x78),0,0);
    if (iVar4 == -1) {
      uVar3 = 0xffffffff8007000e;
    }
    else {
      if ((uVar2 & 0xfffff) != 0) {
        iVar8 = 0;
        iVar6 = (uVar2 & 0xfffff) << 2;
        do {
          *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar8) =
               *(unsigned int *)((int)auStack_e0 + iVar8);
          iVar8 = iVar8 + 4;
          *(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar6) = iVar4;
          iVar6 = iVar6 + 4;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

