extern int fn_829301D0();
extern int fn_82936290();
extern int fn_82937420();
extern unsigned int iStack_160;


unsigned __int64 fn_82937598(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  char cVar1;
  char cVar2;
  unsigned int *puVar3;
  unsigned int *puVar5;
  unsigned __int64 uVar4;
  unsigned int uVar6;
  char *pcVar7;
  char *pcVar8;
  struct { int first; int second; } stack_pair_160;

  char acStack_150 [128];
  char acStack_d0 [144];
  
  fn_82937420(param_3,acStack_150,0x80,acStack_d0,0x80,&stack_pair_160.second,&stack_pair_160.first);
  if (stack_pair_160.second == 2) {
    fn_82936290(acStack_150,0x80,*param_4);
  }
  if ((acStack_d0[0] != '\0') && (uVar6 = 0, param_4[0xe] != 0)) {
    puVar5 = param_4 + 0xf;
    do {
      puVar3 = (unsigned int *)*puVar5;
      pcVar8 = acStack_150;
      pcVar7 = (char *)*puVar3;
      do {
        cVar1 = *pcVar8;
        cVar2 = *pcVar7;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 == cVar2);
      if (((cVar1 == cVar2) && (puVar3[0xd] == stack_pair_160.first)) && (puVar3[1] == *(int *)(param_2 + 4)))
      {
        uVar4 = fn_82937598(param_1,param_2,acStack_d0,param_4[uVar6 + 0xf]);
        return uVar4;
      }
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar6 < (unsigned int)param_4[0xe]);
  }
  if (acStack_d0[0] == '\0') {
    puVar5 = (unsigned int *)fn_829301D0(*(unsigned int *)(param_1 + 4),0x43c,4);
    pcVar7 = acStack_150;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar7 - (int)acStack_150;
    uVar4 = fn_829301D0(*(unsigned int *)(param_1 + 4),uVar6,0x10);
    if (uVar6 < 0x80000000) {
      fn_82936290(uVar4,uVar6,acStack_150);
    }
    *puVar5 = (int)uVar4;
    puVar5[0xd] = stack_pair_160.first;
    puVar5[0xc] = stack_pair_160.second;
    puVar5[0xe] = 0;
    puVar5[1] = *(unsigned int *)(param_2 + 4);
    puVar5[10] = *(unsigned int *)(param_2 + 0x28);
    puVar5[6] = *(unsigned int *)(param_2 + 0x18);
    puVar5[7] = *(unsigned int *)(param_2 + 0x1c);
    puVar5[0xb] = *(unsigned int *)(param_2 + 0x2c);
    puVar5[8] = 1;
    puVar5[3] = *(unsigned int *)(param_2 + 0xc);
    puVar5[2] = *(unsigned int *)(param_2 + 8);
    puVar5[9] = 0;
    puVar5[4] = *(unsigned int *)(param_2 + 0x10);
    puVar5[5] = *(unsigned int *)(param_2 + 0x14);
  }
  else {
    puVar5 = (unsigned int *)fn_829301D0(*(unsigned int *)(param_1 + 4),0x43c,4);
    pcVar7 = acStack_150;
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    uVar6 = (int)pcVar7 - (int)acStack_150;
    uVar4 = fn_829301D0(*(unsigned int *)(param_1 + 4),uVar6,0x10);
    if (uVar6 < 0x80000000) {
      fn_82936290(uVar4,uVar6,acStack_150);
    }
    *puVar5 = (int)uVar4;
    puVar5[0xd] = stack_pair_160.first;
    puVar5[0xc] = stack_pair_160.second;
    puVar5[0xe] = 0;
    puVar5[10] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[0xb] = 0;
    puVar5[8] = 1;
    puVar5[3] = 0xffffffff;
    puVar5[2] = 0xffffffff;
    puVar5[1] = *(unsigned int *)(param_2 + 4);
    puVar5[4] = 0xffffffff;
    puVar5[5] = 0xffffffff;
    puVar5[9] = 0;
    uVar4 = fn_82937598(param_1,param_2,acStack_d0,puVar5);
    if ((int)uVar4 == -1) {
      return uVar4;
    }
  }
  param_4[param_4[0xe] + 0xf] = puVar5;
  param_4[0xe] = param_4[0xe] + 1;
  return 1;
}

