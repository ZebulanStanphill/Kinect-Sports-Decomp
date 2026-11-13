typedef unsigned char bool;
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_e0;
extern int fn_8294AC48();
extern unsigned int lbl_82005710;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


unsigned __int64 fn_8294FA78(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int auStack_140 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_130;

  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned char auStack_120 [64];
  unsigned char auStack_e0 [16];
  int aiStack_d0 [44];
  
  uStack_124 = 3;
  uVar2 = **(unsigned int **)(param_1 + 0x104);
  auStack_140[0] = 0;
  uVar8 = uVar2 & 0xfffff;
  stack_pair_130.first = 0;
  stack_pair_130.second = 1;
  uStack_128 = 2;
  uVar4 = fn_8294AC48(param_1,*(unsigned int **)(param_1 + 0x104),0xffffffff820369d0,auStack_120,
                        auStack_140,auStack_e0,&stack_pair_130.first,uVar8);
  bVar1 = (int)uVar4 != 1;
  if (!bVar1) {
    uVar4 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),0xffffffff82036a30,auStack_120,
                          auStack_140,auStack_e0,&stack_pair_130.first,uVar8);
  }
  if ((int)uVar4 == 0) {
    uVar6 = 0;
    if ((uVar2 & 0xfffff) != 0) {
      iVar7 = (uVar2 & 0xfffff) << 2;
      piVar5 = aiStack_d0;
      do {
        if ((((*piVar5 != piVar5[4]) ||
             (iVar3 = *(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar7) * 4 +
                              *(int *)(param_1 + 0x14)),
             (*(unsigned int *)(*(int *)(*(int *)(iVar3 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
             == 0)) || (*(double *)(iVar3 + 0x20) != lbl_82005710)) || (*(int *)(iVar3 + 8) != -1))
        {
          return 1;
        }
        uVar6 = uVar6 + 1;
        piVar5 = piVar5 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar6 < uVar8);
    }
    if (bVar1) {
      uVar6 = uVar8 | 0x74500000;
    }
    else {
      uVar6 = uVar8 | 0x74400000;
    }
    **(unsigned int **)(param_1 + 0x104) = uVar6;
    if ((uVar2 & 0xfffff) != 0) {
      iVar7 = 0;
      do {
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar7) =
             *(unsigned int *)((int)aiStack_d0 + iVar7);
        iVar7 = iVar7 + 4;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}

