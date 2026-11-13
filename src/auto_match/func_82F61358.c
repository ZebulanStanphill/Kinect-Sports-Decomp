typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82F61230();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82F61358(__int64 param_1)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  char in_RESERVE;
  unsigned char bVar8;
  unsigned int *apuStack_30 [12];
  
  apuStack_30[0] = (unsigned int *)0x0;
  bVar2 = false;
  iVar4 = fn_82F61230(param_1 + 0x34,apuStack_30);
  puVar3 = apuStack_30[0];
  bVar8 = (iVar4 == 0) << 1;
  if ((iVar4 == 0) && (apuStack_30[0] != (unsigned int *)0x0)) {
    uVar5 = (*(int (**)())*apuStack_30[0])(apuStack_30[0][1],apuStack_30[0][2]);
    puVar3[3] = uVar5;
    do {
      puVar6 = (unsigned int *)(param_1 + 0x2c);
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar6 - 1,0,param_1 + 0x2c);
        *puVar6 = uVar1;
        bVar8 = 2;
      }
    } while (!(bool)(bVar8 >> 1 & 1));
    bVar2 = true;
  }
  if ((!bVar2) || (uVar7 = 1, *(int *)((int)param_1 + 0x2c) < 1)) {
    uVar7 = 0;
  }
  return uVar7;
}

