typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_8294AC48();
extern int fn_82963FA8();
extern int fn_82964628();
extern unsigned int lbl_82005710;
extern unsigned int lbl_8200E890;
extern unsigned int uStack_134;
extern unsigned int uStack_138;
extern unsigned int uStack_13c;
extern unsigned int uStack_140;


unsigned __int64 fn_8294E2C8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned int uVar7;
  double dVar8;
  unsigned int auStack_150 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_140;

  unsigned int uStack_138;
  unsigned int uStack_134;
  unsigned char auStack_130 [64];
  unsigned char auStack_f0 [16];
  unsigned int auStack_e0 [1];
  int aiStack_d0 [40];

  uStack_138 = 2;
  auStack_150[0] = 0;
  stack_pair_140.first = 0;
  stack_pair_140.second = 1;
  uStack_134 = 3;
  if ((**(unsigned int **)(param_1 + 0x104) & 0xfffff) == 1) {
    uVar5 = fn_8294AC48(param_1,*(unsigned int **)(param_1 + 0x104),0xffffffff820363d0,auStack_130,
                          auStack_150,auStack_f0,&stack_pair_140.first,1);
    if ((((int)uVar5 == 1) &&
        (uVar5 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),0xffffffff82036430,
                               auStack_130,auStack_150,auStack_f0,&stack_pair_140.first,1), (int)uVar5 == 1))
       && (uVar5 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),0xffffffff82036490,
                                 auStack_130,auStack_150,auStack_f0,&stack_pair_140.first,1), (int)uVar5 == 1)
       ) {
      uVar5 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),0xffffffff820364f0,auStack_130,
                            auStack_150,auStack_f0,&stack_pair_140.first,1);
    }
    if ((int)uVar5 == 0) {
      uVar7 = 4;
      do {
        iVar1 = *(int *)(*(int *)(uVar7 + *(int *)(*(int *)(param_1 + 0x104) + 8)) * 4 +
                        *(int *)(param_1 + 0x14));
        if ((((*(unsigned int *)(*(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100)
              == 0) || (*(double *)(iVar1 + 0x20) != lbl_82005710)) || (*(int *)(iVar1 + 8) != -1))
        goto LAB_8294e314;
        uVar7 = uVar7 + 4;
      } while (uVar7 < 8);
      bVar4 = false;
      iVar1 = *(int *)(aiStack_d0[0] * 4 + *(int *)(param_1 + 0x14));
      if ((*(int *)(iVar1 + 8) == -1) &&
         ((*(unsigned int *)(*(int *)(*(int *)(iVar1 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0
         )) {
        bVar4 = true;
      }
      uVar7 = 0;
      dVar8 = lbl_8200E890;
      do {
        iVar1 = *(int *)((int)aiStack_d0 + uVar7);
        *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + uVar7) =
             *(unsigned int *)((int)auStack_e0 + uVar7);
        iVar2 = *(int *)(iVar1 * 4 + *(int *)(param_1 + 0x14));
        iVar6 = fn_82964628(*(unsigned __int64 *)(iVar2 + 0x20),param_1,*(unsigned int *)(iVar2 + 4),
                                  *(unsigned int *)(iVar2 + 0xc),*(unsigned int *)(iVar2 + 0x10));
        if (iVar6 == -1) {
          return 0xffffffff8007000e;
        }
        iVar3 = *(int *)(iVar6 * 4 + *(int *)(param_1 + 0x14));
        fn_82963FA8(iVar3,iVar2);
        if (bVar4) {
          *(double *)(iVar3 + 0x20) = *(double *)(iVar3 + 0x20) * dVar8;
        }
        else {
          if (*(int *)(iVar3 + 0x38) == -1) {
            *(int *)(iVar3 + 0x38) = iVar1;
          }
          *(unsigned int *)(iVar3 + 0x3c) = *(unsigned int *)(iVar3 + 0x3c) ^ 0x80000;
        }
        iVar1 = *(int *)(*(int *)(param_1 + 0x104) + 8) + uVar7;
        uVar7 = uVar7 + 4;
        *(int *)(iVar1 + 4) = iVar6;
      } while (uVar7 < 4);
      uVar5 = 0;
    }
  }
  else {
LAB_8294e314:
    uVar5 = 1;
  }
  return uVar5;
}
