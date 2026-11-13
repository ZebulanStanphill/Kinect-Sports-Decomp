extern int fn_82369160();
extern int fn_823CC298();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82192754;
extern unsigned int lbl_821CA460;


void fn_8231A560(int *param_1)

{
  int iVar1;
  int iVar2;
  
  (**(int (***)())(*param_1 + 0x1c))();
  iVar2 = param_1[4];
  if ((lbl_82192754 <=
       (lbl_821CA460 - *(float *)(iVar2 + 0x47c) / *(float *)(iVar2 + 0x474)) *
       *(float *)(iVar2 + 0x478)) ||
     (iVar1 = fn_82369160(iVar2,*(unsigned int *)(param_1[3] + 0x2c)), iVar1 != 1)) {
    fn_823CC298(*(unsigned int *)(iVar2 + 0x4b8),4);
    iVar2 = 0;
  }
  else {
    fn_823CC298(*(unsigned int *)(iVar2 + 0x4b8),0x1a);
    iVar2 = 1;
  }
  iVar1 = lbl_8218E8E8;
  param_1[0xb6] = iVar2;
  param_1[0xc9] = iVar1;
  return;
}

