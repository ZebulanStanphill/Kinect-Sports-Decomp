#define NAN(x) ((x) != (x))
extern unsigned int *auStack_f0;
extern unsigned int fStack_100;
extern int fn_824CD030();
extern int fn_82F6A548();
extern int fn_82F6A594();
extern int fn_82F6DA1C();
extern int fn_82F6DCB4();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_fc;


void fn_824D7F50(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int *piVar1;
  int (**pcVar2)();
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  int iVar5;
  int iVar6;
  unsigned __int64 in_r8;
  unsigned __int64 in_r9;
  unsigned int *in_r10;
  double dVar7;
  double dVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  unsigned int *in_stack_000000b4;
  int in_stack_000000bc;
  int *in_stack_000000c4;
  unsigned int *in_stack_000000d4;
  unsigned int *in_stack_000000dc;
  struct { float first; unsigned int second; } stack_pair_100;

  unsigned char auStack_f0 [240];
  
  fn_82F6A548();
  iVar5 = fn_82F6DA1C();
  *in_r10 = 0;
  *in_stack_000000b4 = 0;
  dVar8 = extraout_f1;
  iVar6 = fn_824CD030(param_5);
  if (iVar6 != 0) {
    dVar10 = (double)ltcg_pool_0_0f;
    if (*(int *)(iVar5 + 0x14) != 0) {
      dVar7 = (double)(float)((double)*(float *)(iVar5 + 0x14) - dVar8);
      dVar9 = -dVar7;
      dVar8 = dVar10;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar9 < dVar10) << 2) | (unsigned int)(NAN(dVar9) || NAN(dVar10)) << 2))
          < 0.0) {
        dVar8 = dVar7;
      }
      *(float *)(iVar5 + 0x14) = (float)dVar8;
    }
    piVar1 = *(int **)((int)param_5 + 0xf4);
    iVar6 = (**(int (***)())(*piVar1 + 8))
                      (piVar1,auStack_f0,&stack_pair_100.first,in_stack_000000d4,in_stack_000000dc);
    if ((iVar6 != 0) || (dVar10 < (double)*(float *)(iVar5 + 0x14))) {
      pcVar2 = *(int (***)())(**(int **)(iVar5 + 0x10) + 8);
      (*pcVar2)(ABS(param_2),param_3,(double)stack_pair_100.first,*(int **)(iVar5 + 0x10),param_5,
                in_stack_000000bc,pcVar2,in_r8,in_r9,*in_stack_000000dc,*in_stack_000000d4);
      *in_r10 = 1;
      if (iVar6 != 0) {
        *in_stack_000000b4 = 1;
        *(float *)(iVar5 + 0x14) = (float)dVar10;
      }
    }
    else {
      iVar6 = *(int *)((int)param_5 + 0xf4);
      puVar3 = (unsigned int *)(iVar6 + 0x40U & 0xfffffff0);
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      puVar4 = (unsigned int *)((unsigned int)(auStack_f0 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar11;
      puVar4[2] = uVar12;
      puVar4[3] = uVar13;
      stack_pair_100.first = *(float *)(iVar6 + 0x50);
      *in_stack_000000d4 = *(unsigned int *)(iVar6 + 0x54);
      *in_stack_000000dc = *(unsigned int *)(iVar6 + 0x58);
      if ((1 < *(int *)(iVar6 + 0x10)) && (*(int *)(iVar6 + 0x78) == 0)) {
        *(unsigned int *)(iVar5 + 0x14) = lbl_821917B0;
        (**(int (***)())(**(int **)(iVar5 + 0x10) + 8))
                  (ABS(param_2),param_3,*(int **)(iVar5 + 0x10),param_5);
        puVar3 = (unsigned int *)(iVar5 + 0x20U & 0xfffffff0);
        *puVar3 = in_register_00010030;
        puVar3[1] = in_register_00010034;
        puVar3[2] = in_register_00010038;
        puVar3[3] = in_vr3;
        puVar3 = (unsigned int *)(in_r0 + in_stack_000000bc & 0xfffffff0);
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        puVar4 = (unsigned int *)(iVar5 + 0x40U & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar11;
        puVar4[2] = uVar12;
        puVar4[3] = uVar13;
        *(unsigned int *)(iVar5 + 0x30) = stack_pair_100.second;
        puVar3 = (unsigned int *)(*in_stack_000000c4 * 0x30 + (int)in_r9 & 0xfffffff0);
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        puVar4 = (unsigned int *)(iVar5 + 0x50U & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar11;
        puVar4[2] = uVar12;
        puVar4[3] = uVar13;
        puVar3 = (unsigned int *)(*in_stack_000000c4 * 0x30 + (int)in_r9 + 0x10U & 0xfffffff0);
        uVar11 = puVar3[1];
        uVar12 = puVar3[2];
        uVar13 = puVar3[3];
        puVar4 = (unsigned int *)(iVar5 + 0x60U & 0xfffffff0);
        *puVar4 = *puVar3;
        puVar4[1] = uVar11;
        puVar4[2] = uVar12;
        puVar4[3] = uVar13;
        *in_r10 = 1;
      }
    }
  }
  fn_82F6DCB4();
  fn_82F6A594();
  return;
}

