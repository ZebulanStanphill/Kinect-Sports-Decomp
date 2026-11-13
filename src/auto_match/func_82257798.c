extern unsigned int *auStack_30;
extern int fn_8223C610();
extern int fn_8223C680();


void fn_82257798(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned char uVar2;
  unsigned int uVar3;
  unsigned char auStack_30 [48];
  
  iVar1 = fn_8223C610(param_3,1,0,0);
  if (iVar1 == 0) {
    uVar3 = 0;
    do {
      iVar1 = fn_8223C610(param_3,1,0,0);
      if (iVar1 == 0) {
        uVar2 = fn_8223C610(param_3,(uVar3 != 3) + '\a',0,0);
        auStack_30[uVar3] = uVar2;
      }
      else {
        auStack_30[uVar3] = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 4);
  }
  if (param_4 != 0) {
    *(unsigned int *)(param_4 + 8) = 0;
    *(unsigned int *)(param_4 + 4) = 7;
    *(unsigned int *)(param_4 + 0xc) = 4;
    fn_8223C680(param_4,0,auStack_30);
  }
  return;
}

