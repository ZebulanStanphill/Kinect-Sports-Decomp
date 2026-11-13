extern int fn_828223C8();
extern int fn_82827980();
extern int fn_828295E8();


unsigned __int64 fn_828268E0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  char cVar4;
  __int64 lVar2;
  int iVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int aiStack_30 [12];
  
  uVar6 = 0;
  cVar4 = fn_82827980(param_1,param_2,0);
  if (cVar4 != '\0') {
    iVar3 = param_1 + 0x2fc;
    while (fn_828223C8(iVar3,aiStack_30), aiStack_30[0] != 0) {
      iVar3 = aiStack_30[0];
      if (*(char *)(aiStack_30[0] + 0x28) == cVar4) {
        uVar1 = *(unsigned int *)(aiStack_30[0] + 0x2c);
        uVar5 = (unsigned __int64)uVar1 -
                (uVar6 - (__int64)(int)((uVar6 & 0xffffffff) / (unsigned __int64)uVar1) *
                         (__int64)(int)uVar1);
        lVar2 = fn_828295E8(aiStack_30[0]);
        uVar6 = lVar2 + (uVar5 - (__int64)(int)((uVar5 & 0xffffffff) / (unsigned __int64)uVar1) *
                                 (__int64)(int)uVar1) + uVar6;
        iVar3 = aiStack_30[0];
      }
    }
  }
  return uVar6;
}

