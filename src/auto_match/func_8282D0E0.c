extern unsigned int *auStack_50;
extern int fn_828252D0();
extern int fn_82827728();
extern int fn_8282BF78();
extern int fn_8282BFF0();
extern int fn_8282CD18();
extern int fn_8282CF08();
extern int fn_82F6E2F0();


__int64 fn_8282D0E0(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar2;
  unsigned int uVar3;
  unsigned char uVar4;
  unsigned __int64 uVar1;
  __int64 lVar5;
  unsigned char auStack_50 [32];
  
  iVar2 = *param_3;
  lVar5 = 0;
  if (iVar2 == 0) {
    iVar2 = fn_828252D0(0x136);
    uVar3 = fn_82F6E2F0(param_1);
    *(unsigned int *)(iVar2 + 0xcc) = uVar3;
    *(unsigned char *)(iVar2 + 0x134) = 0;
    *(unsigned char *)(iVar2 + 0x134) = *(unsigned char *)(iVar2 + 0x134) | 0x80;
    *param_3 = iVar2;
    uVar4 = fn_82827728();
    *(unsigned char *)(iVar2 + 0x135) = uVar4;
  }
  if ((*(unsigned char *)(iVar2 + 0x134) & 4) == 0) {
    uVar1 = fn_8282BF78(iVar2,auStack_50);
    if (((((*(unsigned char *)(iVar2 + 0x134) & 0x40) != 0) ||
         (lVar5 = fn_8282BFF0(uVar1,auStack_50), lVar5 == 0)) &&
        (((int)param_2 < 1 || (lVar5 = fn_8282CF08(iVar2,param_2,auStack_50), lVar5 == 0)))) &&
       ((int)param_2 == 4)) {
      lVar5 = fn_8282CD18(iVar2,auStack_50);
    }
  }
  else {
    lVar5 = 4;
  }
  return lVar5;
}

