extern int fn_82FA5060();
extern int fn_830218F0();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_83021A08(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int *puVar5;
  
  puVar5 = (unsigned int *)(param_2 + 4);
  uVar1 = *puVar5;
  if (uVar1 != 0) {
    iVar3 = fn_82FA5060(lbl_831BC768,uVar1 << 2);
    *(int *)(param_1 + 0x10) = iVar3;
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 == 0) {
      return 0x34;
    }
    *(unsigned int *)(param_1 + 0x18) = uVar1;
  }
  uVar2 = 1;
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      puVar5 = puVar5 + 1;
      uVar2 = fn_830218F0(param_1,*puVar5);
      if ((int)uVar2 != 1) {
        return uVar2;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar2;
}

