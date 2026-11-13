typedef unsigned char bool;
extern int fn_82686A80();
extern int fn_82686F38();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82687BF0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  __int64 lVar4;
  char in_RESERVE;
  unsigned char bVar5;
  unsigned int uStack0000001c;
  
  uStack0000001c = (unsigned int)param_2;
  RtlEnterCriticalSection(param_1 + 0xc);
  if ((unsigned __int64)*(unsigned int *)(param_1 + 8) != 0) {
    lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 8) + 0xc;
    iVar2 = fn_82686F38(lVar4,&stack0x0000001c);
    bVar5 = (iVar2 == 0) << 1;
    if (iVar2 == 0) {
      fn_82686A80(lVar4,lVar4,&stack0x0000001c,(param_2 & 0xffffffff) >> 6 ^ param_2);
      do {
        puVar3 = (unsigned int *)(param_2 + 4);
        if (in_RESERVE != '\0') {
          uVar1 = storeWordConditionalIndexed((unsigned __int64)*puVar3 + 1,0,param_2 + 4);
          *puVar3 = uVar1;
          bVar5 = 2;
        }
      } while (!(bool)(bVar5 >> 1 & 1));
    }
  }
  RtlLeaveCriticalSection(param_1 + 0xc);
  return;
}

