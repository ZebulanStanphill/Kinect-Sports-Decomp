extern unsigned int *auStack_30;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF86F0();
extern unsigned int lbl_831BC768;


int fn_82FF8ED8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_30 [12];
  
  uVar1 = *(unsigned int *)(param_1 + 8);
  uVar3 = (unsigned __int64)uVar1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    if (uVar3 <= (param_2 & 0xffffffff)) {
      param_2 = uVar3;
    }
    iVar2 = *(int *)(param_1 + 0x18);
    *(unsigned int *)(param_1 + 8) = uVar1 - (int)param_2;
    *(int *)(param_1 + 0x18) = iVar2 + (int)param_2;
  }
  else if (uVar3 < (param_2 & 0xffffffff)) {
    uVar3 = fn_82FA5060(lbl_831BC768,param_2);
    *(int *)(param_1 + 0x14) = (int)uVar3;
    if (((uVar3 & 0xffffffff) != 0) &&
       ((iVar2 = fn_82FF86F0(param_1,uVar3,param_2,auStack_30), iVar2 != 1 ||
        ((unsigned __int64)auStack_30[0] != (param_2 & 0xffffffff))))) {
      fn_82FA5190(lbl_831BC768,*(unsigned int *)(param_1 + 0x14));
      *(unsigned int *)(param_1 + 0x14) = 0;
    }
    iVar2 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar2 = *(int *)(param_1 + 4);
    *(unsigned int *)(param_1 + 8) = uVar1 - (int)param_2;
    *(int *)(param_1 + 4) = iVar2 + (int)param_2;
  }
  return iVar2;
}

