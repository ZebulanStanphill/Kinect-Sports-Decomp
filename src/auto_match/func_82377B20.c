extern unsigned int *auStack_60;
extern unsigned int fStack_5c;
extern int fn_822315A0();
extern int fn_823730C0();
extern int fn_82379A60();
extern int fn_8237AFE8();
extern int fn_82F63108();
extern unsigned int iStack_6c;
extern unsigned int iStack_70;
extern unsigned int ltcg_pool_0_0f;


void fn_82377B20(double param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  float fVar2;
  int in_r0;
  unsigned __int64 uVar3;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned int in_register_00010030;
  unsigned int in_register_00010034;
  unsigned int in_register_00010038;
  unsigned int in_vr3;
  int iStack_70;
  int iStack_6c;
  unsigned char auStack_60 [4];
  float fStack_5c;
  
  fn_823730C0(&iStack_70,param_2);
  fn_8237AFE8(iStack_70);
  uVar3 = 0;
  puVar1 = (unsigned int *)(in_r0 + iStack_70 + 0x30 & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  *(float *)(iStack_70 + 0x118) = (float)param_1;
  *(float *)(iStack_70 + 0x11c) = (float)param_1;
  puVar1 = (unsigned int *)(iStack_70 + 400U & 0xfffffff0);
  *puVar1 = in_register_00010030;
  puVar1[1] = in_register_00010034;
  puVar1[2] = in_register_00010038;
  puVar1[3] = in_vr3;
  *(unsigned int *)(iStack_70 + 0x2130) = 0;
  *(unsigned int *)(iStack_70 + 0x2134) = 0;
  puVar1 = (unsigned int *)(in_r0 + iStack_70 + 0x30 & 0xfffffff0);
  uVar5 = *puVar1;
  uVar6 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  *(unsigned int *)(iStack_70 + 0x2138) = 0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar1 = uVar5;
  puVar1[1] = uVar6;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  *(unsigned int *)(iStack_70 + 0x2148) = 0x18;
  *(unsigned int *)(iStack_70 + 0xdc) = 0;
  dVar4 = (double)fn_82379A60(iStack_70);
  fVar2 = ltcg_pool_0_0f;
  *(float *)(iStack_70 + 0x120) = (float)(-(double)fStack_5c / dVar4);
  if (fVar2 <= *(float *)(iStack_70 + 0x38)) {
    uVar3 = 1;
  }
  if (*(int *)(iStack_70 + 0x2160) == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F63108();
  }
  (**(int (***)())(**(int **)(iStack_70 + 0x2160) + 4))(*(int **)(iStack_70 + 0x2160),uVar3,0);
  *(unsigned int *)(iStack_70 + 0xcc) = 1;
  if (iStack_6c != 0) {
    fn_822315A0();
  }
  return;
}

