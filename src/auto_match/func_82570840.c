extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82566CA8();
extern int fn_82570B78();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int lbl_82196750;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_48;


__int64 fn_82570840(int *param_1,unsigned __int64 param_2,char param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  struct { int first; int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned char auStack_40 [1];
  unsigned char auStack_30 [48];
  
  stack_pair_50.second = fn_82566CA8((double)ltcg_pool_0_0f,*(unsigned int *)(*param_1 + 0x844),param_2,4,0,0
                                ,0,*param_1,0);
  if (stack_pair_50.second == 0) {
    lVar3 = -1;
  }
  else {
    *(unsigned int *)(stack_pair_50.second + 0x11c) = (unsigned int)(param_3 != '\0');
    lVar3 = (unsigned __int64)(unsigned int)param_1[1] + 1;
    puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    stack_pair_50.first = (int)lVar3;
    param_1[1] = stack_pair_50.first;
    puVar1 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    uStack_48 = param_4;
    fn_82570B78(param_1 + 2,&stack_pair_50.first);
  }
  return lVar3;
}

