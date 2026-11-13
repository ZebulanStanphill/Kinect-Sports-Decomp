#define true 1
extern unsigned int *auStack_160;
extern unsigned int *auStack_70;
extern int fn_82491E88();
extern int fn_824925D0();
extern int fn_824973B0();
extern int fn_8249A1F0();
extern unsigned int lbl_821BEBB8;
extern unsigned int uStack_100;
extern unsigned int uStack_108;
extern unsigned int uStack_110;
extern unsigned int uStack_118;
extern unsigned int uStack_128;
extern unsigned int uStack_130;
extern unsigned int uStack_138;
extern unsigned int uStack_14c;
extern unsigned int uStack_78;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_98;
extern unsigned int uStack_a0;
extern unsigned int uStack_a8;
extern unsigned int uStack_bc;
extern unsigned int uStack_ee;
extern unsigned int uStack_ef;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


int fn_82499E30(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  unsigned char auStack_160 [16];
  unsigned char **ppuStack_150;
  unsigned int uStack_14c;
  unsigned __int64 uStack_138;
  unsigned __int64 uStack_130;
  unsigned __int64 uStack_128;
  unsigned __int64 uStack_118;
  unsigned __int64 uStack_110;
  unsigned __int64 uStack_108;
  struct { unsigned int first; unsigned int second; } stack_pair_100;

  unsigned int uStack_f8;
  unsigned char uStack_ef;
  unsigned char uStack_ee;
  int aiStack_d0 [4];
  unsigned char **ppuStack_c0;
  unsigned int uStack_bc;
  unsigned __int64 uStack_a8;
  unsigned __int64 uStack_a0;
  unsigned __int64 uStack_98;
  unsigned __int64 uStack_88;
  unsigned __int64 uStack_80;
  unsigned __int64 uStack_78;
  unsigned char auStack_70 [112];
  
  iVar3 = fn_824973B0();
  iVar1 = *(int *)(param_1 + 4);
  piVar6 = (int *)(iVar3 * 8 + *(int *)(param_1 + 0x10));
  iVar3 = *piVar6;
  piVar2 = (int *)iVar3;
  while( true ) {
    iVar5 = iVar1;
    if (iVar3 != iVar1) {
      iVar5 = *(int *)piVar6[1];
    }
    piVar4 = (int *)iVar1;
    if ((piVar2 == (int *)iVar5) || (piVar4 = piVar2, piVar2[4] == *param_2)) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar4 == (int *)iVar1) {
    aiStack_d0[0] = *param_2;
    uStack_14c = 0;
    ppuStack_150 = &lbl_821BEBB8;
    stack_pair_100.first = 0;
    stack_pair_100.second = 0;
    uStack_f8 = 0;
    uStack_ef = 0;
    uStack_ee = 0;
    ppuStack_c0 = &lbl_821BEBB8;
    uStack_bc = 0;
    uStack_a8 = uStack_138;
    uStack_a0 = uStack_130;
    uStack_98 = uStack_128;
    uStack_88 = uStack_118;
    uStack_80 = uStack_110;
    uStack_78 = uStack_108;
    fn_824925D0(auStack_70,&stack_pair_100.first);
    piVar4 = (int *)fn_8249A1F0(auStack_160,param_1,aiStack_d0);
    ppuStack_c0 = &lbl_821BEBB8;
    piVar4 = (int *)*piVar4;
    fn_82491E88(auStack_70);
    ppuStack_150 = &lbl_821BEBB8;
    fn_82491E88(&stack_pair_100.first);
  }
  return (int)piVar4 + 0x20;
}

