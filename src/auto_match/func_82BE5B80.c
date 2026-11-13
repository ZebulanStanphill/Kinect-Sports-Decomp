typedef unsigned char bool;
#define false 0
extern int fn_82BF1CA0();
extern int fn_82F6D460();
extern unsigned int lbl_831751CC;


bool fn_82BE5B80(int param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char *pbVar4;
  bool bVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  
  uVar3 = fn_82F6D460(0xffffffff831751f0,0x21);
  pbVar4 = (unsigned char *)fn_82BF1CA0(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x24),
                                   0xffffffff831751f0,uVar3);
  bVar5 = false;
  if (pbVar4 != (unsigned char *)0x0) {
    pbVar7 = *(unsigned char **)(param_1 + 0x30);
    pbVar6 = pbVar7 + 0x14;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar4;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar7 != pbVar6);
    bVar5 = (int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0;
    (*(int (**)())lbl_831751CC)();
  }
  return bVar5;
}

