extern unsigned int *auStack_140;
extern unsigned int *auStack_150;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82575FA8();
extern int fn_82A1EFC0();
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_7d;
extern unsigned int uStack_80;


void fn_82560100(double param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  int param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  int in_r0;
  double dVar2;
  double dVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int in_register_00010480;
  unsigned int in_register_00010484;
  unsigned int in_register_00010488;
  unsigned int in_vr72;
  unsigned char auStack_150 [16];
  unsigned char auStack_140 [128];
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [48];
  unsigned char uStack_80;
  unsigned char uStack_7d;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  
  dVar3 = (double)*(float *)(param_2 + 0x828);
  fn_82A1EFC0(auStack_150,0,0x100);
  puVar1 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  uVar4 = *puVar1;
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  uStack_60 = 0xfeeb1e0;
  uStack_80 = 1;
  puVar1 = (unsigned int *)((unsigned int)(auStack_c0 + in_r0) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  puVar1 = (unsigned int *)((unsigned int)(auStack_150 + in_r0) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  puVar1[2] = uVar6;
  puVar1[3] = uVar7;
  if (param_6 == 0) {
    puVar1 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010480;
    puVar1[1] = in_register_00010484;
    puVar1[2] = in_register_00010488;
    puVar1[3] = in_vr72;
    puVar1 = (unsigned int *)((unsigned int)(auStack_140 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_00010480;
    puVar1[1] = in_register_00010484;
    puVar1[2] = in_register_00010488;
    puVar1[3] = in_vr72;
  }
  else {
    puVar1 = (unsigned int *)(in_r0 + param_6 & 0xfffffff0);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[2];
    uVar7 = puVar1[3];
    puVar1 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
    puVar1 = (unsigned int *)((unsigned int)(auStack_140 + in_r0) & 0xfffffff0);
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
    puVar1[2] = uVar6;
    puVar1[3] = uVar7;
  }
  uStack_64 = 0;
  uStack_68 = 0xffffffff;
  uStack_7d = 0;
  dVar2 = param_1;
  if (param_1 == (double)ltcg_pool_0_0f) {
    dVar2 = (double)lbl_82192734;
  }
  fn_82575FA8(dVar3,dVar2,*(unsigned int *)(param_2 + 0x93c),param_3,auStack_150,
                    param_1 == (double)lbl_82192734,0,1,param_7);
  return;
}

