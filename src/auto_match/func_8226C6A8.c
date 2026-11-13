extern unsigned int *auStack_60;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_e0;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern int fn_8280CB70();
extern int fn_8280D2A0();
extern int fn_8280E890();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_100;
extern unsigned int uStack_ec;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;
extern unsigned int uStack_fc;


void fn_8226C6A8(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uStack_100;
  unsigned int uStack_fc;
  unsigned int uStack_f8;
  unsigned int uStack_f0;
  unsigned int uStack_ec;
  unsigned char auStack_e0 [48];
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  unsigned char auStack_a0 [64];
  unsigned char auStack_60 [72];
  
  iVar3 = *(int *)((unsigned int)*(unsigned short *)(param_2 + 0x2e) * 4 + *(int *)(param_1 + 0x58)) * 0xf0 +
          *(int *)(param_1 + 0x40);
  fn_8280CB70(param_5,param_6,param_7);
  fn_8280CB70(iVar3 + 0x40,param_7,auStack_e0);
  puVar1 = (unsigned int *)(iVar3 + 0xd0U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((int)&uStack_f0 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  uStack_fc = ltcg_pool_0_0f;
  uStack_100 = uStack_f0;
  uStack_f8 = uStack_ec;
  fn_8280D2A0((double)*(float *)(iVar3 + 0xc0),auStack_60,&uStack_100);
  fn_8280E890(iVar3 + 0xb0,auStack_a0);
  fn_8280CB70(auStack_a0,auStack_60,auStack_a0);
  fn_8280CB70(auStack_a0,auStack_e0,auStack_e0);
  fStack_b0 = *(float *)(iVar3 + 0x90) + fStack_b0;
  fStack_ac = *(float *)(iVar3 + 0x98) + fStack_ac;
  fStack_a8 = *(float *)(iVar3 + 0x94) + fStack_a8;
  fn_8280CB70(iVar3,auStack_e0,param_7);
  return;
}

