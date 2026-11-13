typedef unsigned char bool;
extern int fn_82812380();
extern int fn_82A1E7D8();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_828133A8(__int64 param_1)

{
  unsigned int uVar1;
  bool bVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  char in_RESERVE;
  unsigned char bVar5;
  
  uVar3 = fn_82812380(param_1,0x10000);
  bVar2 = (uVar3 & 0xffff0000) == 0;
  bVar5 = bVar2 << 1;
  puVar4 = (unsigned int *)param_1;
  if (bVar2) {
    sync(1);
  }
  else {
    RtlEnterCriticalSection(param_1 + 4);
    do {
      uVar3 = (unsigned __int64)*puVar4 + 1;
      if (in_RESERVE != '\0') {
        uVar1 = storeWordConditionalIndexed(uVar3,0,param_1);
        *puVar4 = uVar1;
        bVar5 = 2;
      }
    } while (!(bool)(bVar5 >> 1 & 1));
    RtlLeaveCriticalSection(param_1 + 4);
  }
  if (((unsigned int)uVar3 & 0xffff) == 1) {
    fn_82A1E7D8(puVar4[8]);
  }
  return;
}

