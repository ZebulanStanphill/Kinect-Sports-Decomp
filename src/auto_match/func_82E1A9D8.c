extern int fn_82CE52E0();
extern int fn_82CE5410();
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CFC050();
extern int fn_82CFD5F0();


unsigned __int64 fn_82E1A9D8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  int iVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = 0;
    lVar2 = fn_82CEAF18(param_2);
    uVar5 = lVar2 - 1;
    if (-1 < (__int64)uVar5) {
      lVar2 = (uVar5 & 0x3fffffff) * 4 + param_3;
      do {
        if (*(int *)lVar2 != -1) {
          fn_82CEAF20(param_2,uVar5);
          lVar4 = fn_82CFD5F0();
          lVar4 = lVar4 + (unsigned __int64)*(unsigned int *)((int)((uVar5 & 0xffffffff) << 2) + (int)param_3);
          break;
        }
        uVar5 = uVar5 - 1;
        lVar2 = lVar2 + -4;
      } while (-1 < (__int64)uVar5);
    }
    iVar3 = fn_82CE5410();
    uVar1 = fn_82CE52E0(*(unsigned int *)(iVar3 + 0x10),lVar4);
    fn_82CFC050(uVar1,param_3,lVar4);
  }
  return uVar1;
}

