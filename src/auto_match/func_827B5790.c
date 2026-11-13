void fn_827B5790(int param_1,int param_2,int param_3,char *param_4)

{
  unsigned char *pbVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  if ((char *)0x4 < param_4) {
    pbVar1 = (unsigned char *)(param_2 + 1);
    pcVar4 = (char *)(param_3 + 2);
    do {
      pcVar2 = pcVar4 + 1;
      pbVar1 = pbVar1 + 1;
      pcVar3 = (char *)((unsigned int)*pbVar1 + param_1 + 0x3a0);
      pcVar4[-2] = pcVar3[0x200] + pcVar4[-2];
      pcVar4[-1] = pcVar4[-1] + pcVar3[0x100];
      *pcVar4 = *pcVar3 + *pcVar4;
      pcVar4[1] = pcVar4[1] + pcVar3[0x100];
      pcVar4[2] = pcVar3[0x200] + pcVar4[2];
      pcVar4 = pcVar2;
    } while (pcVar2 + (2 - param_3) < param_4);
  }
  return;
}

