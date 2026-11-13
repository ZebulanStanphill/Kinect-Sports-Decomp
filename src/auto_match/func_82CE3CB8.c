extern int fn_82A1F380();
extern int fn_82A1F3F0();
extern int fn_82CE3C28();


void fn_82CE3CB8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int iVar2;
  
  param_1[6] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  uVar1 = fn_82A1F3F0("xam.xex");
  param_1[6] = (int)uVar1;
  if ((uVar1 & 0xffffffff) != 0) {
    iVar2 = fn_82A1F380(uVar1,0xaff);
    *param_1 = iVar2;
    iVar2 = fn_82A1F380(param_1[6],0xb00);
    param_1[1] = iVar2;
    iVar2 = fn_82A1F380(param_1[6],0xb0b);
    param_1[2] = iVar2;
    iVar2 = fn_82A1F380(param_1[6],0xb10);
    param_1[3] = iVar2;
    iVar2 = fn_82A1F380(param_1[6],0x305);
    param_1[4] = iVar2;
    iVar2 = fn_82A1F380(param_1[6],0x30b);
    param_1[5] = iVar2;
    if ((((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
       (((param_1[3] == 0 || (param_1[4] == 0)) || (iVar2 == 0)))) {
      fn_82CE3C28(param_1);
    }
  }
  return;
}

