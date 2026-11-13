extern int fn_82529D38();
extern int fn_8255E0B0();
extern int fn_8255E3A0();
extern int fn_82574340();
extern int fn_82593438();
extern unsigned int ltcg_pool_0_0f;


void fn_825A2EE0(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  if (*(int *)(param_2 + 0x38) == 0) {
    if (*(short *)(param_2 + 0x48) != -1) {
      fn_8255E0B0(param_1);
      if ((*(unsigned int *)(param_2 + 0x40) & 4) != 0) {
        fn_8255E3A0(param_1,*(unsigned short *)(param_2 + 0x48),param_4);
        return;
      }
      goto LAB_825a2fc8;
    }
  }
  else if (*(int *)(param_2 + 0x38) == 1) {
    if ((*(int *)(param_1 + 0x4c) == 0) || (*(int *)(param_1 + 0x8c0) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(unsigned int *)
               ((*(int *)(*(int *)(param_1 + 0x4c) + 0x44) + 0x20) * 4 + *(int *)(param_1 + 0x8c0));
    }
    fn_82574340(*(unsigned int *)(param_2 + 0x4c),param_1 + 0xf0,uVar4,param_3);
    if ((*(unsigned int *)(param_2 + 0x40) & 4) != 0) {
      fn_82593438(param_1,*(unsigned int *)(param_2 + 0x4c),param_4);
      return;
    }
    goto LAB_825a2fc8;
  }
  uVar1 = *(unsigned int *)(param_2 + 0x40);
  puVar2 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  if ((uVar1 & 4) != 0) {
    fn_82529D38(param_1,param_4);
    return;
  }
LAB_825a2fc8:
  uVar4 = ltcg_pool_0_0f;
  param_4[2] = ltcg_pool_0_0f;
  param_4[1] = uVar4;
  *param_4 = uVar4;
  return;
}

