extern unsigned int *auStack_80;
extern unsigned int fStack_7c;
extern int fn_822315A0();
extern int fn_822ABA88();
extern int fn_823730C0();
extern int fn_82379A60();
extern int fn_8237AFE8();
extern int fn_82F63108();
extern unsigned int iStack_8c;
extern unsigned int iStack_90;
extern unsigned int lbl_8218E8E8;
extern unsigned int ltcg_pool_0_0f;


void fn_82377D58(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  int param_6,unsigned __int64 param_7)

{
  int *piVar1;
  float fVar2;
  int in_r0;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  double dVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  int iStack_90;
  int iStack_8c;
  unsigned char auStack_80 [4];
  float fStack_7c;
  
  fn_823730C0(&iStack_90,param_3);
  puVar5 = (unsigned int *)(iStack_90 + 0x17a4);
  if ((double)lbl_8218E8E8 <= param_2) {
    puVar5 = (unsigned int *)(iStack_90 + 0x1848);
  }
  *(unsigned int *)(iStack_90 + 0x124) = *puVar5;
  fn_8237AFE8(iStack_90);
  iVar4 = iStack_90 + 0x30;
  puVar5 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
  *puVar5 = in_register_00010020;
  puVar5[1] = in_register_00010024;
  puVar5[2] = in_register_00010028;
  puVar5[3] = in_vr2;
  puVar5 = (unsigned int *)(iStack_90 + 400U & 0xfffffff0);
  *puVar5 = in_register_00010030;
  puVar5[1] = in_register_00010034;
  puVar5[2] = in_register_00010038;
  puVar5[3] = in_vr3;
  *(float *)(iStack_90 + 0x118) = (float)param_1;
  *(float *)(iStack_90 + 0x11c) = (float)param_1;
  piVar1 = *(int **)(**(int **)(param_3 + 8) + param_6 * 4);
  uVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),param_7);
  *(unsigned int *)(iStack_90 + 0x2130) = uVar3;
  puVar5 = (unsigned int *)(in_r0 + iVar4 & 0xfffffff0);
  uVar3 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  *(unsigned int *)(iStack_90 + 0x2134) = 0;
  *(unsigned int *)(iStack_90 + 0x2138) = 0;
  *(unsigned int *)(iStack_90 + 0x2148) = 0x11;
  *(unsigned int *)(iStack_90 + 0xdc) = 0;
  puVar5 = (unsigned int *)((unsigned int)(auStack_80 + in_r0) & 0xfffffff0);
  *puVar5 = uVar3;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  dVar6 = (double)fn_82379A60(iStack_90);
  fVar2 = ltcg_pool_0_0f;
  *(float *)(iStack_90 + 0x120) = (float)(-(double)fStack_7c / dVar6);
  if (*(int *)(iStack_90 + 0x2160) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(int (***)())(**(int **)(iStack_90 + 0x2160) + 4))
            (*(int **)(iStack_90 + 0x2160),*(float *)(iStack_90 + 0x38) < fVar2,1);
  *(unsigned int *)(iStack_90 + 0xb4) = 0;
  *(unsigned int *)(iStack_90 + 0xd0) = 1;
  *(unsigned int *)(iStack_90 + 0xb8) = 0;
  if (iStack_8c != 0) {
    fn_822315A0();
  }
  return;
}

