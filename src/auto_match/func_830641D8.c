extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c8;
extern unsigned int *auStack_d8;
extern unsigned int *auStack_e8;
extern unsigned int *auStack_f8;
extern int fn_828102A8();
extern int fn_82810558();
extern int fn_8305D5F0();
extern int fn_8305D5F8();
extern int fn_8305D618();
extern int fn_8305D740();
extern int fn_8305D7C8();
extern int fn_8305D7D0();
extern int fn_8305E0F8();
extern int fn_8305F320();
extern int fn_83064008();
extern int fn_83065C40();
extern int fn_83065E50();
extern int fn_83065E70();
extern int fn_83066770();
extern int fn_83066778();
extern int fn_83066928();
extern int fn_83066F18();
extern int fn_83068358();
extern int fn_83068418();
extern unsigned int lbl_8200D898;
extern unsigned int lbl_8200D8B4;
extern unsigned int uStack_108;
extern unsigned int uStack_10c;
extern unsigned int uStack_110;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


void fn_830641D8(int param_1,int param_2,unsigned __int64 param_3,int (**param_4)(),unsigned __int64 param_5)

{
  char cVar6;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char *puVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  double dVar11;
  double dVar12;
  char cStack_140;
  struct { unsigned int first; unsigned int second; } stack_pair_130;

  unsigned int uStack_128;
  unsigned int *puStack_120;
  struct { unsigned int first; unsigned int second; } stack_pair_110;

  unsigned int uStack_108;
  unsigned int *puStack_100;
  unsigned char auStack_f8 [1];
  unsigned char auStack_e8 [16];
  unsigned char auStack_d8 [16];
  unsigned char auStack_c8 [24];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [80];

  cVar6 = fn_83068418(param_2);
  if (cVar6 != '\0') {
    if ((param_4 != (int (**)())0x0) &&
       (cVar6 = (*param_4)((double)*(float *)(param_1 + 0x30),param_2,param_3), cVar6 == '\0')) {
      return;
    }
    stack_pair_130.first = 0;
    stack_pair_130.second = 0;
    uStack_128 = 0;
    puStack_120 = (unsigned int *)0x0;
    stack_pair_110.first = 0;
    stack_pair_110.second = 0;
    uStack_108 = 0;
    puStack_100 = (unsigned int *)0x0;
    if (((*(unsigned int *)(param_1 + 0xc) & 4) != 0) && (*(int (***)())(param_1 + 4) != (int (**)())0x0)) {
      (**(int (***)())(param_1 + 4))
                (param_1,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc) & 4,param_2);
    }
    fn_8305D7D0(param_3,param_2 + 0x10);
    fn_83064008(param_1,param_2 + 0x10,param_2 + 0x44,&stack_pair_130.first,&stack_pair_110.first);
    iVar4 = fn_83065E70();
    *(int *)(iVar4 + 0x2c) = param_2;
    fn_83068358(iVar4 + 0x44,&stack_pair_130.first);
    iVar5 = fn_83065E70();
    *(int *)(iVar5 + 0x2c) = param_2;
    fn_83068358(iVar5 + 0x44,&stack_pair_110.first);
    *(int *)(param_2 + 0x30) = iVar4;
    *(int *)(param_2 + 0x34) = iVar5;
    if (((*(unsigned int *)(param_1 + 0xc) & 1) != 0) && (*(int (***)())(param_1 + 4) != (int (**)())0x0)) {
      (**(int (***)())(param_1 + 4))
                (param_1,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc) & 1,iVar5);
    }
    if (((*(unsigned int *)(param_1 + 0xc) & 1) != 0) && (*(int (***)())(param_1 + 4) != (int (**)())0x0)) {
      (**(int (***)())(param_1 + 4))
                (param_1,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc) & 1,iVar4);
    }
    for (; puStack_100 != (unsigned int *)0x0; puStack_100 = (unsigned int *)puStack_100[2]) {
      puStack_100[3] = 0;
      *puStack_100 = 0;
    }
    for (; puStack_120 != (unsigned int *)0x0; puStack_120 = (unsigned int *)puStack_120[2]) {
      puStack_120[3] = 0;
      *puStack_120 = 0;
    }
    return;
  }
  iVar5 = param_2 + 0x10;
  uVar10 = 0;
  iVar4 = fn_83066928((double)*(float *)(param_1 + 0x30),iVar5,param_3);
  if (cStack_140 != '\0') {
    if (param_4 != (int (**)())0x0) {
      (*param_4)((double)*(float *)(param_1 + 0x30),param_2,param_3);
    }
    if ((*(unsigned int *)(param_1 + 0xc) & 8) == 0) {
      return;
    }
    if (*(int (***)())(param_1 + 4) == (int (**)())0x0) {
      return;
    }
    (**(int (***)())(param_1 + 4))
              (param_1,*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc) & 8,param_2);
    return;
  }
  uVar9 = 0;
  uVar8 = 0;
  if (iVar4 == 3) {
    uVar9 = fn_83065E50();
    uVar8 = fn_83065E50();
    fn_8305D5F0(uVar9);
    fn_8305D5F0(uVar8);
    uVar1 = fn_8305D7C8(param_3);
    fn_8305E0F8(uVar9,uVar1);
    uVar1 = fn_8305D7C8(param_3);
    fn_8305E0F8(uVar8,uVar1);
    uVar1 = fn_8305D618(param_3);
    fn_8305D5F8(uVar9,uVar1);
    uVar1 = fn_8305D618(param_3);
    fn_8305D5F8(uVar8,uVar1);
    fn_8305F320((double)*(float *)(param_1 + 0x30),param_3,iVar5,uVar8,uVar9);
    uVar10 = uVar8;
    param_3 = uVar9;
  }
  else {
    if (iVar4 == 5) {
      uVar2 = fn_83065E50();
      fn_8305D5F0();
      uVar1 = fn_8305D7C8(param_3);
      fn_8305E0F8(uVar2,uVar1);
      uVar1 = fn_8305D618(param_3);
      fn_8305D5F8(uVar2,uVar1);
      dVar11 = (double)*(float *)(param_1 + 0x30);
      uVar1 = fn_83066778(iVar5);
      uVar3 = fn_83066770(iVar5);
      dVar12 = (double)lbl_8200D898;
      fn_82810558((double)(float)(dVar11 * dVar12),uVar3,uVar1);
      uVar1 = fn_83066770(iVar5);
      fn_83066F18(auStack_b0,uVar1,auStack_d8);
      fn_8305F320((double)*(float *)(param_1 + 0x30),param_3,auStack_b0,uVar2,0);
      dVar11 = (double)*(float *)(param_1 + 0x30);
      uVar1 = fn_83066770(iVar5);
      fn_828102A8((double)(float)(dVar11 * dVar12),uVar1,auStack_c8);
      puVar7 = auStack_c8;
      uVar8 = uVar2;
      uVar10 = uVar2;
    }
    else {
      if (iVar4 != 6) {
        if ((iVar4 != 1) && (uVar10 = param_3, param_3 = 0, iVar4 != 2)) {
          return;
        }
        goto LAB_83064654;
      }
      uVar2 = fn_83065E50();
      fn_8305D5F0();
      uVar1 = fn_8305D7C8(param_3);
      fn_8305E0F8(uVar2,uVar1);
      uVar1 = fn_8305D618(param_3);
      fn_8305D5F8(uVar2,uVar1);
      dVar11 = (double)*(float *)(param_1 + 0x30);
      uVar1 = fn_83066778(iVar5);
      uVar3 = fn_83066770(iVar5);
      fn_82810558((double)(float)(dVar11 * (double)lbl_8200D8B4),uVar3,uVar1);
      uVar1 = fn_83066770(iVar5);
      fn_83066F18(auStack_90,uVar1,auStack_e8);
      fn_8305F320((double)*(float *)(param_1 + 0x30),param_3,auStack_90,0,uVar2);
      dVar11 = (double)*(float *)(param_1 + 0x30);
      uVar1 = fn_83066770(iVar5);
      fn_828102A8((double)(float)(dVar11 * (double)lbl_8200D898),uVar1,auStack_f8);
      puVar7 = auStack_f8;
      uVar9 = uVar2;
      uVar10 = param_3;
      param_3 = uVar2;
    }
    fn_8305D740(uVar2,puVar7);
  }
LAB_83064654:
  if (((param_3 & 0xffffffff) != 0) && (*(int *)(param_2 + 0x30) != 0)) {
    fn_830641D8(param_1,*(int *)(param_2 + 0x30),param_3,param_4,param_5);
  }
  if (((uVar10 & 0xffffffff) != 0) && (*(int *)(param_2 + 0x34) != 0)) {
    fn_830641D8(param_1,*(int *)(param_2 + 0x34),uVar10,param_4,param_5);
  }
  if ((uVar9 & 0xffffffff) != 0) {
    fn_83065C40(uVar9);
  }
  if ((uVar8 & 0xffffffff) != 0) {
    fn_83065C40(uVar8);
  }
  return;
}
