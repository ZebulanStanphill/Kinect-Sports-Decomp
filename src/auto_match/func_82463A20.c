extern int fn_824BC7E8();
extern int fn_8257D088();
extern unsigned int lbl_8320A898;


void fn_82463A20(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x1d4) == 0) {
    piVar3 = (int *)fn_824BC7E8();
    uVar2 = *(unsigned int *)(*(int *)(*piVar3 + 0xa0) + 0x4c);
  }
  else {
    piVar3 = (int *)fn_824BC7E8();
    iVar1 = *(int *)(*piVar3 + 0xa4);
    if (iVar1 == 0) {
      uVar2 = *(unsigned int *)(*(int *)(*piVar3 + 0xa0) + 0x4c);
    }
    else {
      uVar2 = *(unsigned int *)(iVar1 + 0x4c);
    }
  }
  fn_8257D088(800,0x32,0x140,0xf0,0xff,uVar2,lbl_8320A898);
  return;
}

