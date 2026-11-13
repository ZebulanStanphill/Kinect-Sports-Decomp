typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_d8;
extern unsigned int fStack_100;
extern unsigned int fStack_11c;
extern unsigned int fStack_120;
extern unsigned int fStack_fc;
extern int fn_8267BE38();
extern int fn_8268CC00();
extern int fn_8268CCB0();
extern int fn_8268CD40();
extern int fn_8268CEC0();
extern int fn_8268D008();
extern int fn_8269A240();
extern int fn_826C58D8();
extern int fn_826CDE90();
extern int fn_82758F98();
extern unsigned int iStack_10c;
extern unsigned int iStack_110;
extern unsigned int iStack_dc;
extern unsigned int iStack_e0;
extern unsigned int iStack_e4;
extern unsigned int iStack_e8;
extern unsigned int iStack_ec;
extern unsigned int iStack_f0;
extern unsigned int uStack_108;


unsigned __int64 fn_826CF350(int *param_1,float *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  bool bVar2;
  int iVar3;
  float *pfVar4;
  char cVar6;
  int *piVar5;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  struct { float first; float second; } stack_pair_120;

  struct { int first; int second; } stack_pair_110;

  unsigned int uStack_108;
  struct { float first; float second; } stack_pair_100;

  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  unsigned char auStack_d8 [1];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [64];

  if (((unsigned int)param_1[0x23] >> 0xb & 1) == 0) {
    if ((*(unsigned char *)((int)param_1 + 0x66) & 1) == 0) {
      fn_8268CC00(auStack_70);
      pfVar4 = (float *)(**(int (***)())(*param_1 + 0x28))(&stack_pair_110.first,param_1,auStack_70);
      if ((((pfVar4[2] < *param_2) || (*param_2 < *pfVar4)) || (pfVar4[3] < param_2[1])) ||
         (bVar2 = true, param_2[1] < pfVar4[1])) {
        bVar2 = false;
      }
      if (!bVar2) {
        return 0;
      }
    }
    if (((param_3 & 2) == 0) || (cVar6 = (**(int (***)())(*param_1 + 8))(param_1), cVar6 != '\0')) {
      uVar1 = param_1[0x2b];
      piVar5 = (int *)fn_826C58D8(param_1);
      if ((piVar5 != (int *)0x0) &&
         ((cVar6 = (**(int (***)())(*piVar5 + 0xa0))(piVar5), cVar6 != '\0' &&
          ((*(unsigned char *)((int)piVar5 + 0x66) & 0x10) == 0)))) {
        fn_8268CC00(auStack_d0);
        fn_8268CC00(auStack_b0);
        fn_8269A240(piVar5,auStack_b0);
        fn_8268CD40(auStack_d0,auStack_b0);
        fn_8268CC00(auStack_90);
        fn_8269A240(param_1,auStack_90);
        fn_8268CEC0(auStack_d0,auStack_90);
        fn_8268CCB0(auStack_d0,auStack_d8,param_2);
        cVar6 = (**(int (***)())(*piVar5 + 0x30))(piVar5,auStack_d8,param_3);
        if (cVar6 == '\0') {
          return 0;
        }
      }
      stack_pair_110.first = 0;
      stack_pair_110.second = 0;
      uStack_108 = 0;
      fn_826CDE90(param_1,&stack_pair_110.first,param_2,param_3 & 1);
      fn_8268CC00(&iStack_f0);
      iVar3 = stack_pair_110.first;
      stack_pair_120.first = *param_2;
      stack_pair_120.second = param_2[1];
      uVar8 = (unsigned __int64)uVar1 - 1;
      if (-1 < (__int64)uVar8) {
        lVar7 = (uVar8 & 0x3fffffff) << 2;
        do {
          piVar5 = *(int **)((int)lVar7 + param_1[0x2a]);
          if ((((param_3 & 2) == 0) || (cVar6 = (**(int (***)())(*piVar5 + 8))(piVar5), cVar6 != '\0'))
             && ((stack_pair_110.second == 0 ||
                 ((*(char *)(iVar3 + (int)uVar8) != '\0' && (*(short *)(piVar5 + 0x19) == 0)))))) {
            iStack_f0 = piVar5[0x11];
            iStack_ec = piVar5[0x12];
            iStack_e8 = piVar5[0x13];
            iStack_e4 = piVar5[0x14];
            iStack_e0 = piVar5[0x15];
            iStack_dc = piVar5[0x16];
            fn_8268D008(&iStack_f0,&stack_pair_100.first,param_2);
            stack_pair_120.first = stack_pair_100.first;
            stack_pair_120.second = stack_pair_100.second;
            cVar6 = (**(int (***)())(*piVar5 + 0x30))(piVar5,&stack_pair_120.first,param_3);
            if (cVar6 != '\0') {
              fn_8267BE38(iVar3);
              return 1;
            }
          }
          uVar8 = uVar8 - 1;
          lVar7 = lVar7 + -4;
        } while (-1 < (__int64)uVar8);
      }
      if ((param_1[0x6e] == 0) ||
         (cVar6 = fn_82758F98(param_1[0x6e],param_2,param_3 & 1,param_1), cVar6 == '\0')) {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
      fn_8267BE38(iVar3);
      return uVar9;
    }
  }
  return 0;
}
