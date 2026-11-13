extern int fn_82A56BB0();
extern int fn_82A56F10();
extern int fn_82A71F08();
extern int fn_82A72458();


unsigned __int64 fn_82A57328(int *param_1,unsigned short *param_2,unsigned __int64 param_3)

{
  short sVar1;
  unsigned short uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  sVar1 = *(short *)(param_1 + 0x7d);
  if (param_2 == (unsigned short *)0x0) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    iVar3 = *param_1;
    uVar2 = *param_2;
    if ((((param_1[0x6e] == 0) || (uVar4 = fn_82A56BB0(param_1,param_3,uVar2), -1 < (int)uVar4))
        && (uVar4 = fn_82A56F10(param_1,sVar1), -1 < (int)uVar4)) &&
       ((param_1[0x76] == 1 && (sVar1 != 0)))) {
      if (*(int *)(iVar3 + 0xb0) == 0) {
        uVar4 = fn_82A72458();
        *param_2 = uVar2;
        return uVar4;
      }
      uVar4 = fn_82A71F08(*(unsigned int *)(iVar3 + 0x238),param_1,*(unsigned char *)(iVar3 + 0xc9),
                              sVar1,uVar2);
    }
    *param_2 = uVar2;
  }
  return uVar4;
}

