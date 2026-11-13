extern int fn_82A1F2F8();
extern int fn_82E1D550();
extern int fn_82E1DE88();
extern int fn_82E1F690();
extern int fn_82E1FE08();
extern int fn_82E1FE58();


int fn_82E1FEC0(unsigned int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  int uVar3;
  
  uVar3 = 0;
  iVar1 = fn_82E1F690(param_2);
  param_1[6] = iVar1;
  iVar1 = fn_82A1F2F8();
  param_1[3] = iVar1;
  param_1[2] = 0;
  param_1[1] = 0;
  *(unsigned char *)(param_1 + 5) = 1;
  iVar1 = fn_82E1D550();
  uVar2 = fn_82E1DE88(*(unsigned int *)(iVar1 + 8),"GameTimeSaveInterval",0x3c);
  if (0xe10 < uVar2) {
    uVar2 = 0xe10;
  }
  param_1[4] = uVar2 * 1000;
  if ((uVar2 * 1000 != 0) && (fn_82E1FE08(param_1), *param_1 == 0)) {
    uVar3 = fn_82E1FE58(param_1);
  }
  *(unsigned char *)((int)param_1 + 0x15) = 1;
  return uVar3;
}
