extern unsigned int *auStack_b0;
extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern int fn_8267BED0();
extern int fn_8267C498();
extern int fn_8268CCB0();
extern int fn_82758408();
extern int fn_82758448();
extern int fn_82758700();
extern int fn_82758A28();
extern int fn_82758C40();
extern int fn_82F68918();
extern int fn_82F6A534();
extern int fn_82F6A580();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int uStack_80;


void fn_827A8DC8(unsigned __int64 param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  float *in_r8;
  int in_r9;
  int in_r10;
  double dVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned int in_stack_00000054;
  unsigned int in_stack_0000005c;
  unsigned int in_stack_00000064;
  unsigned int auStack_b0 [2];
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  unsigned __int64 uStack_80;
  __int64 lStack_78;
  
  iVar1 = fn_82F6A534();
  dVar7 = (double)*in_r8;
  dVar5 = dVar7;
  if ((dVar7 < extraout_f1) && (dVar5 = extraout_f1, (double)in_r8[2] <= extraout_f1)) {
    dVar5 = (double)in_r8[2];
  }
  dVar11 = (double)in_r8[1];
  dVar9 = dVar11;
  if ((dVar11 < param_2) && (dVar9 = param_2, (double)in_r8[3] <= param_2)) {
    dVar9 = (double)in_r8[3];
  }
  dVar8 = (double)lbl_82005344;
  uStack_80 = (__int64)in_r9;
  dVar4 = param_3;
  if (in_r10 == 2) {
    dVar4 = param_3 * dVar8;
  }
  dVar6 = (double)(float)(param_2 + dVar4);
  dVar4 = (double)(float)((double)uStack_80 + extraout_f1);
  if ((dVar4 <= dVar7) || (dVar7 = (double)in_r8[2], (double)in_r8[2] <= dVar4)) {
    dVar4 = dVar7;
  }
  if ((dVar11 < dVar6) && (dVar11 = dVar6, (double)in_r8[3] <= dVar6)) {
    dVar11 = (double)in_r8[3];
  }
  dVar6 = (double)lbl_82002C5C;
  dVar7 = (double)fn_82F68918((double)(float)(dVar4 + dVar6));
  dVar4 = (double)(float)dVar7;
  dVar7 = (double)fn_82F68918((double)(float)(dVar11 + dVar6));
  dVar7 = (double)(float)dVar7;
  if (*(int *)(iVar1 + 0xc4) == 0) {
    auStack_b0[0] = 0x142;
    iVar2 = fn_8267BED0(iVar1,0x88,auStack_b0);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82758A28();
    }
    if (*(int *)(iVar1 + 0xc4) != 0) {
      fn_8267C498();
    }
    *(unsigned int *)(iVar1 + 0xc4) = uVar3;
  }
  fn_82758C40(*(unsigned int *)(iVar1 + 0xc4),in_stack_00000054);
  dVar11 = dVar8;
  if (in_r10 != 3) {
    if (in_r10 < 1) goto LAB_827a9218;
    if (in_r10 < 3) {
      fn_82758408(dVar5,dVar9,*(unsigned int *)(iVar1 + 0xc4));
      fn_82758448(dVar4,dVar9,*(unsigned int *)(iVar1 + 0xc4));
      fn_82758448(dVar4,dVar7,*(unsigned int *)(iVar1 + 0xc4));
      fn_82758448(dVar5,dVar7,*(unsigned int *)(iVar1 + 0xc4));
      fn_82758448(dVar5,dVar9,*(unsigned int *)(iVar1 + 0xc4));
      fn_82758700(*(unsigned int *)(iVar1 + 0xc4));
      goto LAB_827a9218;
    }
    dVar11 = (double)lbl_82002AE0;
    if (4 < in_r10) {
      if (in_r10 == 5) {
        iVar2 = 0;
        do {
          lStack_78 = (__int64)iVar2;
          dVar7 = (double)(float)((double)lStack_78 * param_4 + dVar5);
          if (dVar7 < dVar4) {
            dVar11 = (double)(float)(param_4 * dVar8);
            do {
              fStack_a8 = (float)dVar7;
              fStack_a4 = (float)dVar9;
              fn_8268CCB0(in_stack_0000005c,&fStack_98,&fStack_a8);
              fStack_a8 = fStack_98;
              fStack_a4 = fStack_94;
              dVar7 = (double)fn_82F68918((double)(float)((double)fStack_98 + dVar6));
              fStack_a8 = (float)dVar7;
              dVar7 = (double)fn_82F68918((double)(float)((double)fStack_a4 + dVar6));
              fStack_a4 = (float)dVar7;
              fn_8268CCB0(in_stack_00000064,&fStack_90,&fStack_a8);
              fStack_a8 = fStack_90;
              fStack_a4 = fStack_8c;
              dVar7 = (double)fn_82F68918((double)(float)((double)fStack_90 + dVar6));
              fStack_a8 = (float)dVar7;
              dVar7 = (double)fn_82F68918((double)(float)((double)fStack_a4 + dVar6));
              fStack_a4 = (float)dVar7;
              dVar7 = (double)fStack_a8;
              fn_82758408(*(unsigned int *)(iVar1 + 0xc4));
              fn_82758448((double)(float)((double)fStack_a8 + param_4),(double)fStack_a4,
                                *(unsigned int *)(iVar1 + 0xc4));
              fn_82758448((double)(float)((double)fStack_a8 + param_4),
                                (double)(float)((double)fStack_a4 + param_3),
                                *(unsigned int *)(iVar1 + 0xc4));
              fn_82758448((double)fStack_a8,(double)(float)((double)fStack_a4 + param_3),
                                *(unsigned int *)(iVar1 + 0xc4));
              fn_82758448((double)fStack_a8,(double)fStack_a4,*(unsigned int *)(iVar1 + 0xc4));
              fn_82758700(*(unsigned int *)(iVar1 + 0xc4));
              dVar7 = (double)(float)(dVar11 + dVar7);
            } while (dVar7 < dVar4);
          }
          iVar2 = iVar2 + 1;
          dVar9 = (double)(float)(dVar9 + param_3);
        } while (iVar2 < 2);
      }
      goto LAB_827a9218;
    }
  }
  if (dVar5 < dVar4) {
    dVar10 = (double)(float)(dVar11 * param_4);
    dVar11 = (double)(float)(dVar10 * dVar8);
    do {
      fStack_a0 = (float)dVar5;
      fStack_9c = (float)dVar7;
      fn_8268CCB0(in_stack_0000005c,&fStack_88,&fStack_a0);
      fStack_a0 = fStack_88;
      fStack_9c = fStack_84;
      dVar5 = (double)fn_82F68918((double)(float)((double)fStack_88 + dVar6));
      fStack_a0 = (float)dVar5;
      dVar5 = (double)fn_82F68918((double)(float)((double)fStack_9c + dVar6));
      fStack_9c = (float)dVar5;
      fn_8268CCB0(in_stack_00000064,&uStack_80,&fStack_a0);
      fStack_a0 = (((unsigned __int64)(uStack_80) >> 0) & 0xFFFFFFFF);
      fStack_9c = (((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF);
      dVar5 = (double)fn_82F68918((double)(float)((double)(((unsigned __int64)(uStack_80) >> 0) & 0xFFFFFFFF) + dVar6));
      fStack_a0 = (float)dVar5;
      dVar5 = (double)fn_82F68918((double)(float)((double)fStack_9c + dVar6));
      fStack_9c = (float)dVar5;
      dVar5 = (double)fStack_a0;
      fn_82758408(dVar5,dVar9,*(unsigned int *)(iVar1 + 0xc4));
      fn_82758448((double)(float)(dVar10 + (double)fStack_a0),dVar9,
                        *(unsigned int *)(iVar1 + 0xc4));
      fn_82758448((double)(float)(dVar10 + (double)fStack_a0),dVar7,
                        *(unsigned int *)(iVar1 + 0xc4));
      fn_82758448((double)fStack_a0,dVar7,*(unsigned int *)(iVar1 + 0xc4));
      fn_82758448((double)fStack_a0,dVar9,*(unsigned int *)(iVar1 + 0xc4));
      fn_82758700(*(unsigned int *)(iVar1 + 0xc4));
      dVar5 = (double)(float)(dVar11 + dVar5);
    } while (dVar5 < dVar4);
  }
LAB_827a9218:
  fn_82F6A580();
  return;
}

