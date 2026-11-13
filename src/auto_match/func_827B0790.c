extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82766450();
extern int fn_827664B0();
extern int fn_82766860();
extern int fn_827668B8();
extern unsigned int uStack_3c;


__int64 fn_827B0790(__int64 param_1,__int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char auStack_40 [4];
  unsigned int uStack_3c;
  unsigned char auStack_38 [8];
  
  param_1 = param_1 + 0xc;
  lVar1 = fn_82766450(param_1,param_2,auStack_40);
  lVar2 = fn_82766450(param_1,lVar1 + param_2,auStack_40);
  lVar2 = lVar2 + lVar1 + param_2;
  lVar1 = fn_82766450(param_1,lVar2,auStack_40);
  lVar1 = lVar1 + lVar2;
  lVar2 = fn_82766450(param_1,lVar1,auStack_40);
  lVar2 = lVar2 + lVar1;
  lVar1 = fn_82766860(param_1,lVar2,&uStack_3c);
  lVar1 = lVar1 + lVar2;
  uVar4 = uStack_3c;
  while (uVar4 != 0) {
    uVar4 = uVar4 - 1;
    lVar2 = fn_82766450(param_1,lVar1,auStack_40);
    lVar3 = fn_82766450(param_1,lVar2 + lVar1,auStack_40);
    lVar3 = lVar3 + lVar2 + lVar1;
    lVar1 = fn_827664B0(param_1,lVar3,&uStack_3c);
    lVar1 = lVar1 + lVar3;
    if ((uStack_3c & 1) == 0) {
      for (uVar5 = uStack_3c >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
        lVar2 = fn_827668B8(param_1,lVar1,auStack_38);
        lVar1 = lVar2 + lVar1;
      }
      uStack_3c = 0xffffffff;
    }
  }
  return lVar1;
}

