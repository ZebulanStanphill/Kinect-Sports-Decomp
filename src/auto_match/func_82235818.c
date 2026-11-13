extern int fn_8223C610();
extern int fn_8265C9E0();
extern int memset();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


void fn_82235818(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar2;
  unsigned char uVar3;
  unsigned __int64 uVar1;
  unsigned int uVar4;
  unsigned int uStack_30;
  unsigned short uStack_2c;

  iVar2 = fn_8223C610(param_3,1,0,0);
  if (iVar2 == 0) {
    uVar4 = 0;
    do {
      iVar2 = fn_8223C610(param_3,1,0,0);
      if (iVar2 == 0) {
        uVar1 = 4;
        if (uVar4 != 5) {
          uVar1 = 8;
        }
        uVar3 = fn_8223C610(param_3,uVar1,0,0);
        *(unsigned char *)((int)&uStack_30 + uVar4) = uVar3;
      }
      else {
        *(unsigned char *)((int)&uStack_30 + uVar4) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 6);
  }
  else {
    uStack_30 = 0;
    uStack_2c = 0;
  }
  if (param_4 != 0) {
    *(unsigned int *)(param_4 + 4) = 7;
    *(unsigned int *)(param_4 + 0xc) = 6;
    uVar1 = fn_8265C9E0(6);
                    /* WARNING: Subroutine does not return */
    memset(uVar1,0,6);
  }
  return;
}
