extern unsigned int *auStack_58;
extern unsigned int *auStack_64;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b8;
extern unsigned int *auStack_bc;
extern int fn_827E9B80();
extern int fn_8280AD30();
extern int fn_82810328();
extern int fn_8285A808();
extern int fn_8285A830();
extern int fn_8285A980();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_a8;
extern unsigned int uStack_ac;
extern unsigned int uStack_b0;


unsigned __int64 fn_82860588(int param_1,unsigned __int64 param_2,unsigned char *param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned short uVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  unsigned char auStack_bc [4];
  unsigned char auStack_b8 [1];
  struct { unsigned int first; unsigned int second; } stack_pair_b0;

  unsigned int uStack_a8;
  unsigned char auStack_a0 [16];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [16];
  unsigned char auStack_70 [12];
  unsigned char auStack_64 [12];
  unsigned char auStack_58 [88];
  
  stack_pair_b0.first = lbl_821AAD20;
  stack_pair_b0.second = lbl_821AAD20;
  uStack_a8 = lbl_821AAD20;
  iVar2 = fn_8285A808();
  piVar3 = (int *)fn_8285A830(param_1,param_2);
  if (*(int *)(iVar2 + 0x94) == 0) {
    fn_82810328(param_4,param_3,auStack_90);
  }
  else {
    fn_8280AD30(iVar2 + 0x50,param_3,auStack_a0);
    fn_8280AD30(iVar2 + 0x10,param_4,auStack_80);
    fn_82810328(auStack_80,auStack_a0,auStack_90);
    param_3 = auStack_a0;
  }
  iVar2 = 0;
  if (*(short *)(*piVar3 + 0x34) != 0) {
    iVar6 = 0;
    dVar8 = (double)lbl_82002AE0;
    do {
      iVar1 = *(int *)(*(int *)(*piVar3 + 0x30) + iVar6);
      fn_8285A980((double)*(float *)(param_1 + 0x30),*(unsigned int *)(iVar1 + 0x14),
                        *(unsigned short *)(iVar1 + 0x18),*(unsigned int *)(param_1 + 0x2c));
      uVar5 = *(unsigned short *)(iVar1 + 0x18);
      iVar7 = 2;
      if (2 < uVar5) {
        do {
          fn_8285A980((double)*(float *)(param_1 + 0x30),*(unsigned int *)(iVar1 + 0x14),uVar5,
                            *(unsigned int *)(param_1 + 0x2c));
          fn_8285A980((double)*(float *)(param_1 + 0x30),*(unsigned int *)(iVar1 + 0x14),
                            *(unsigned short *)(iVar1 + 0x18),*(unsigned int *)(param_1 + 0x2c));
          iVar4 = fn_827E9B80(dVar8,param_3,auStack_90,auStack_70,auStack_64,auStack_58,
                                  &stack_pair_b0.first,auStack_bc,auStack_b8);
          if (iVar4 != 0) {
            iVar2 = *(int *)(iVar1 + 0x34);
            if (*piVar3 == iVar2) {
              iVar2 = *(int *)(iVar1 + 0x38);
            }
            *piVar3 = iVar2;
            return 1;
          }
          uVar5 = *(unsigned short *)(iVar1 + 0x18);
          iVar7 = iVar7 + 1;
        } while (iVar7 < (int)(unsigned int)uVar5);
      }
      iVar2 = iVar2 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar2 < (int)(unsigned int)*(unsigned short *)(*piVar3 + 0x34));
  }
  return 0;
}

