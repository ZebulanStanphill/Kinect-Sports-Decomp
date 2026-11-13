extern int fn_822CC748();
extern int fn_82517978();
extern int fn_8266F628();
extern int fn_8266F640();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822CBFB8(unsigned int *param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  unsigned char *pbVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  unsigned char bVar5;
  unsigned __int64 uVar6;
  unsigned char bVar7;
  unsigned char bVar8;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  uVar6 = (unsigned __int64)*param_2;
  uVar3 = 0x6d;
  if (uVar6 == 0x6d) {
    uVar6 = 0x6d;
    pbVar2 = param_2;
    do {
      pbVar2 = pbVar2 + 1;
      if (uVar6 == 0) goto LAB_822cc01c;
      param_5 = (unsigned __int64)pbVar2[(int)"markerIsDirty" - (int)param_2];
      uVar6 = (unsigned __int64)*pbVar2;
      uVar3 = param_5;
    } while (uVar6 == param_5);
  }
  if (uVar6 == uVar3) {
LAB_822cc01c:
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82517978(&stack_pair_30.first,*param_1,param_1[1],0,param_5);
    fn_822CC748(&stack_pair_30.first,param_1 + 4);
  }
  bVar8 = *param_2;
  bVar5 = 0x68;
  pcVar4 = "hasReachedHoldPosition";
  bVar7 = bVar8;
  if (bVar8 == 0x68) {
    bVar7 = 0x68;
    do {
      pcVar4 = pcVar4 + 1;
      if (bVar7 == 0) {
        return;
      }
      bVar5 = *pcVar4;
      bVar7 = (param_2 + 0x7de57a94)[(int)pcVar4];
    } while (bVar7 == bVar5);
  }
  if (bVar7 != bVar5) {
    bVar5 = 0x68;
    if (bVar8 == 0x68) {
      iVar1 = (int)"hasReachedEnd" - (int)param_2;
      bVar8 = 0x68;
      do {
        param_2 = param_2 + 1;
        if (bVar8 == 0) goto LAB_822cc0dc;
        bVar5 = param_2[iVar1];
        bVar8 = *param_2;
      } while (bVar8 == bVar5);
    }
    if (bVar8 == bVar5) {
LAB_822cc0dc:
      fn_8266F640(*param_1,1);
      fn_8266F628(*param_1,1);
      if (param_1[0x19] != 0) {
        param_1[0x18] = 0;
        param_1[0x1a] = 0;
        param_1[0x1b] = 1;
      }
    }
  }
  return;
}

