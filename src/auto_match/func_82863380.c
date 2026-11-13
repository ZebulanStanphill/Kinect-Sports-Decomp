extern int fn_828611B8();
extern int fn_82F68CC0();
extern unsigned int uRam832116a8;
extern unsigned int uRam832116b0;


void fn_82863380(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (uRam832116a8 != 0) {
    lVar3 = 0;
    do {
      uVar1 = (unsigned __int64)uRam832116b0;
      lVar2 = lVar3 + uVar1 + 4;
      fn_82F68CC0(lVar2,param_2,0xa8);
      fn_828611B8(lVar3 + uVar1 + 0xac,param_1,0xf0,0xf0,lVar2);
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0xd4;
    } while (iVar4 < (int)(unsigned int)uRam832116a8);
  }
  return;
}

