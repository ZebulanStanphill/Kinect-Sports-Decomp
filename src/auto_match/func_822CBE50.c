extern int fn_822CC748();
extern int fn_82517978();
extern int fn_8266F628();
extern int fn_8266F640();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_822CBE50(int param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5
                  )

{
  int iVar1;
  unsigned char *pbVar2;
  unsigned __int64 uVar3;
  unsigned char bVar4;
  unsigned __int64 uVar5;
  unsigned char bVar6;
  unsigned char bVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  uVar5 = (unsigned __int64)*param_2;
  uVar3 = 0x6d;
  if (uVar5 == 0x6d) {
    uVar5 = 0x6d;
    pbVar2 = param_2;
    do {
      pbVar2 = pbVar2 + 1;
      if (uVar5 == 0) goto LAB_822cbeb4;
      param_5 = (unsigned __int64)pbVar2[(int)"markerIsDirty" - (int)param_2];
      uVar5 = (unsigned __int64)*pbVar2;
      uVar3 = param_5;
    } while (uVar5 == param_5);
  }
  if (uVar5 == uVar3) {
LAB_822cbeb4:
    stack_pair_30.first = 0;
    stack_pair_30.second = 0;
    fn_82517978(&stack_pair_30.first,*(unsigned int *)(param_1 + 0x24),*(unsigned int *)(param_1 + 0x28),0,
                      param_5);
    fn_822CC748(&stack_pair_30.first,param_1 + 0x30);
  }
  bVar7 = *param_2;
  bVar4 = 0x68;
  bVar6 = bVar7;
  if (bVar7 == 0x68) {
    bVar6 = 0x68;
    pbVar2 = param_2;
    do {
      pbVar2 = pbVar2 + 1;
      if (bVar6 == 0) {
        return;
      }
      bVar4 = pbVar2[(int)"hasReachedHoldPosition" - (int)param_2];
      bVar6 = *pbVar2;
    } while (bVar6 == bVar4);
  }
  if (bVar6 != bVar4) {
    bVar6 = 0x68;
    if (bVar7 == 0x68) {
      iVar1 = (int)"hasReachedEnd" - (int)param_2;
      bVar7 = 0x68;
      do {
        param_2 = param_2 + 1;
        if (bVar7 == 0) goto LAB_822cbf78;
        bVar6 = param_2[iVar1];
        bVar7 = *param_2;
      } while (bVar7 == bVar6);
    }
    if (bVar7 == bVar6) {
LAB_822cbf78:
      fn_8266F640(*(unsigned int *)(param_1 + 0x24),1);
      fn_8266F628(*(unsigned int *)(param_1 + 0x24),1);
      if (*(int *)(param_1 + 100) == 0) {
        *(unsigned int *)(param_1 + 0x60) = 0;
        *(unsigned int *)(param_1 + 0x68) = 0;
        *(unsigned int *)(param_1 + 0x6c) = 1;
      }
    }
  }
  return;
}

