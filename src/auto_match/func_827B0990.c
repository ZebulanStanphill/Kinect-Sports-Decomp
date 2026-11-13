extern unsigned int *auStack_40;
extern int fn_827664B0();
extern int fn_827668B8();


unsigned __int64 fn_827B0990(__int64 param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_40 [2];
  unsigned char abStack_38 [56];
  
  uVar5 = 0;
  lVar2 = fn_827664B0(param_1 + 0xc,param_2,auStack_40);
  lVar2 = lVar2 + param_2;
  auStack_40[0] = auStack_40[0] >> 1;
  while (auStack_40[0] != 0) {
    auStack_40[0] = auStack_40[0] - 1;
    uVar3 = fn_827668B8(param_1 + 0xc,lVar2,abStack_38);
    iVar4 = 0;
    lVar2 = uVar3 + lVar2;
    uVar1 = uVar3 & 0xffffffff;
    while (uVar1 != 0) {
      uVar5 = (unsigned __int64)abStack_38[iVar4] ^ uVar5 * 0x21;
      iVar4 = iVar4 + 1;
      uVar3 = uVar3 - 1;
      uVar1 = uVar3;
    }
  }
  return uVar5;
}

