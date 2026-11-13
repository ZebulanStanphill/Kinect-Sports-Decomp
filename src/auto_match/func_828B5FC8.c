#define true 1
extern int fn_8288B4C0();
extern int fn_8288DD10();
extern int fn_828A12E8();
extern int fn_828B5ED8();
extern int fn_828E9D90();
extern int fn_828E9DA8();
extern int fn_828E9FF8();
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


void fn_828B5FC8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned short uVar1;
  int iVar3;
  int iVar4;
  unsigned short uVar5;
  unsigned __int64 uVar2;
  unsigned short uVar6;
  unsigned short uStack_50;
  unsigned short uStack_4e;
  
  iVar3 = fn_828E9DA8(param_3);
  iVar4 = fn_828E9D90(param_3);
  if (iVar3 - iVar4 < 2) {
    uVar5 = 0;
  }
  else {
    uVar5 = fn_828E9FF8(param_3,2);
  }
  uVar6 = 0xffff;
  *(unsigned short *)(param_1 + 0x14) = uVar5;
  while( true ) {
    iVar3 = fn_828E9DA8(param_3);
    iVar4 = fn_828E9D90(param_3);
    if ((iVar3 - iVar4 < 1) || (iVar3 = fn_828E9FF8(param_3,1), iVar3 == 0)) break;
    if ((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) & 0xfffffffcU) == 0) {
      uVar2 = fn_828A12E8(param_2);
      uVar6 = fn_8288B4C0(uVar2,param_3);
    }
    else {
      iVar3 = fn_828E9DA8(param_3);
      iVar4 = fn_828E9D90(param_3);
      if ((0 < iVar3 - iVar4) && (iVar3 = fn_828E9FF8(param_3,1), iVar3 != 0)) {
        uVar2 = fn_828A12E8(param_2);
        uVar6 = fn_8288B4C0(uVar2,param_3);
      }
    }
    uStack_50 = uVar6;
    uVar2 = fn_828A12E8(param_2);
    iVar3 = fn_8288DD10(uVar2,uVar6);
    uVar1 = *(unsigned short *)(iVar3 + 0x20);
    iVar3 = fn_828E9DA8(param_3);
    iVar4 = fn_828E9D90(param_3);
    if (iVar3 - iVar4 < (int)(unsigned int)uVar1) {
      uStack_4e = 0;
      fn_828B5ED8(param_1 + 4,&uStack_50);
    }
    else {
      uStack_4e = fn_828E9FF8(param_3,uVar1);
      fn_828B5ED8(param_1 + 4,&uStack_50);
    }
  }
  return;
}

