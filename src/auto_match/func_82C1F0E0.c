extern unsigned int *auStack_68;
extern unsigned int *auStack_80;
extern int fn_82C107F8();
extern int fn_82C1EAB8();
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern int __u64tod();
extern unsigned int lbl_820ED314;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_82C1F0E0(int param_1,__int64 param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  double dVar6;
  double dVar7;
  unsigned int auStack_80 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned char auStack_68 [4];
  unsigned int uStack_64;
  unsigned __int64 uStack_60;
  unsigned __int64 uStack_58;
  unsigned __int64 uStack_50;
  
  piVar1 = *(int **)(param_1 + 0x1c);
  auStack_80[2] = 0;
  auStack_80[0] = 0;
  auStack_80[1] = 0x50;
  uVar4 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,0x50);
  if (-1 < (int)uVar4) {
    if ((*(short *)(piVar1[1] + 0x2a) < 1) && (0x4f < (param_2 - 0x18U & 0xffffffff))) {
      uVar4 = fn_82C1EE20(param_1,&uStack_50,auStack_80 + 2,auStack_80,auStack_80 + 1);
      if (((((((-1 < (int)uVar4) &&
              (uVar4 = fn_82C1EC50(param_1,&uStack_50,auStack_80 + 2,auStack_80,auStack_80 + 1),
              -1 < (int)uVar4)) &&
             (uVar4 = fn_82C1EC50(param_1,&uStack_50,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4)) &&
            ((uVar4 = fn_82C1EC50(param_1,auStack_68,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4 &&
             (uVar4 = fn_82C1EC50(param_1,&uStack_60,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4)))) &&
           ((uVar4 = fn_82C1EC50(param_1,&uStack_58,auStack_80 + 2,auStack_80,auStack_80 + 1),
            -1 < (int)uVar4 &&
            ((uVar4 = fn_82C1EC50(param_1,&uStack_50,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4 &&
             (uVar4 = fn_82C1EAB8(param_1,&stack_pair_70.second,auStack_80 + 2,auStack_80,auStack_80 + 1),
             -1 < (int)uVar4)))))) &&
          (uVar4 = fn_82C1EAB8(param_1,&stack_pair_70.first,auStack_80 + 2,auStack_80,auStack_80 + 1),
          -1 < (int)uVar4)) &&
         ((uVar4 = fn_82C1EAB8(param_1,auStack_80 + 3,auStack_80 + 2,auStack_80,auStack_80 + 1),
          -1 < (int)uVar4 &&
          (uVar4 = fn_82C1EAB8(param_1,&stack_pair_70.first,auStack_80 + 2,auStack_80,auStack_80 + 1),
          -1 < (int)uVar4)))) {
        *(unsigned int *)(piVar1[1] + 8) = auStack_80[3];
        *(unsigned int *)(piVar1[1] + 0xc) = uStack_64;
        dVar6 = (double)__u64tod(uStack_60 >> 0x20);
        uVar2 = uStack_58;
        dVar7 = (double)lbl_820ED314;
        uVar5 = uStack_58 >> 0x20;
        uStack_58 = (unsigned __int64)((double)(float)dVar6 * dVar7);
        *(int *)(piVar1[1] + 0x10) = (((unsigned __int64)(uStack_58) >> 32) & 0xFFFFFFFF) + (int)((uStack_60 & 0xffffffff) / 10000);
        dVar6 = (double)__u64tod(uVar5);
        uVar3 = (((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF);
        uStack_50 = (__int64)((double)(float)dVar6 * dVar7);
        *(int *)(piVar1[1] + 0x18) = (((unsigned __int64)(uStack_50) >> 32) & 0xFFFFFFFF) + (int)((uVar2 & 0xffffffff) / 10000);
        *(unsigned int *)(piVar1[1] + 0x14) = uVar3;
        *(unsigned int *)(piVar1[1] + 0x1c) = stack_pair_70.first;
        *(unsigned int *)(piVar1[1] + 0x20) = stack_pair_70.second;
        *(short *)(piVar1[1] + 0x2a) = *(short *)(piVar1[1] + 0x2a) + 1;
        uVar5 = ((param_2 - 0x18U) - (unsigned __int64)auStack_80[0]) - 0x50;
        uVar4 = fn_82C107F8(piVar1[0x38],6,0xb0040,auStack_80[3]);
        if ((-1 < (int)uVar4) &&
           (((uVar5 & 0xffffffff) != 0 &&
            (uVar4 = (**(int (***)())(*piVar1 + 0x14))(*piVar1,uVar5), -1 < (int)uVar4)))) {
          *(unsigned __int64 *)(piVar1 + 2) = (uVar5 & 0xffffffff) + *(__int64 *)(piVar1 + 2);
        }
      }
    }
    else {
      uVar4 = 0xffffffff8050000c;
    }
  }
  return uVar4;
}

