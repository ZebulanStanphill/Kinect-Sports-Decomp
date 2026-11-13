typedef unsigned char bool;
extern int fn_82A1F2F8();
extern int fn_82A98F18();
extern int fn_82E23670();
extern int fn_82E25318();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_82E23A10(__int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char in_RESERVE;
  unsigned char in_cr0;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned int uStack_34;
  
  uVar5 = 0;
  RtlEnterCriticalSection(param_1 + 0xa0);
  puVar2 = (unsigned int *)param_1;
  *(char *)(puVar2 + 0x27) = '\x01' - *(char *)(puVar2 + 0x27);
  RtlLeaveCriticalSection(param_1 + 0xa0);
  if (puVar2[(unsigned int)*(unsigned char *)(puVar2 + 0x27) * 4 + 0x1d] == 0) {
    uVar5 = 0x15;
  }
  else {
    uVar3 = fn_82A1F2F8();
    puVar2[0x2f] = uVar3;
    uStack_34 = puVar2[4];
    uStack_38 = puVar2[3];
    uVar3 = puVar2[*(unsigned char *)(puVar2 + 0x27) + 0x25];
    stack_pair_40.first = 0;
    stack_pair_40.second = 0;
    fn_82A98F18(*(unsigned int *)(puVar2[(unsigned int)*(unsigned char *)(puVar2 + 0x27) * 4 + 0x1d] + 8),
                    uStack_38 << 2,0,
                    *(unsigned int *)(puVar2[(unsigned int)*(unsigned char *)(puVar2 + 0x27) * 4 + 0x1d] + 8),uStack_38
                    ,uStack_34,&stack_pair_40.first,4);
    if ((param_2 != 0) || (uVar4 = 0, puVar2[(*(unsigned char *)(puVar2 + 0x27) + 8) * 4] != 0)) {
      uVar4 = 1;
    }
    uVar1 = puVar2[3];
    uVar4 = fn_82E25318(puVar2[0x30],
                            *(unsigned int *)(puVar2[(unsigned int)*(unsigned char *)(puVar2 + 0x27) * 4 + 0x1d] + 8),
                            ((__int64)(int)puVar2[4] * (__int64)(int)uVar1 & 0x3fffffffU) << 2,
                            uVar1 << 2,uVar1,puVar2[4],uVar4,uVar3 * 10000);
    fn_82E23670((unsigned __int64)*(unsigned char *)(puVar2 + 0x27) * 0x10 + param_1 + 0x74,uVar4,uVar4,puVar2[7])
    ;
    do {
      if (in_RESERVE != '\0') {
        uVar3 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,param_1);
        *puVar2 = uVar3;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  return uVar5;
}

