typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82681728();
extern int fn_826944C8();
extern int fn_82695608();
extern int fn_82696330();
extern int fn_826C98F8();


unsigned __int64 fn_826C9A80(int param_1)

{
  int iVar1;
  bool bVar2;
  char cVar4;
  unsigned __int64 uVar3;
  __int64 lVar5;
  int aiStack_40 [4];
  char acStack_30 [48];
  
  cVar4 = *(char *)(param_1 + 0x1cd);
  if (cVar4 == '\0') {
    iVar1 = *(int *)(param_1 + 0x6c);
    if (iVar1 != 0) {
      acStack_30[0] = '\0';
      fn_82681728(aiStack_40,(unsigned __int64)*(unsigned int *)(param_1 + 0x148) + 0x254,0xffffffff820066d8)
      ;
      cVar4 = (**(int (***)())(*(int *)(iVar1 + 0x10) + 0x2c))
                        (iVar1 + 0x10,param_1 + 0x148,aiStack_40,acStack_30);
      lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_40[0] + 8) - 1;
      *(int *)(aiStack_40[0] + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826944C8(aiStack_40[0]);
      }
      if (cVar4 != '\0') {
        if ((acStack_30[0] == '\0') || (bVar2 = false, acStack_30[0] == '\n')) {
          bVar2 = true;
        }
        if (!bVar2) {
          uVar3 = fn_82695608(acStack_30,param_1 + 0xd0);
          fn_82696330(acStack_30);
          return uVar3;
        }
      }
      fn_82696330(acStack_30);
    }
  }
  else if (cVar4 != '\x02') {
    return (unsigned __int64)(cVar4 == '\x01');
  }
  uVar3 = fn_826C98F8(param_1);
  return uVar3;
}

