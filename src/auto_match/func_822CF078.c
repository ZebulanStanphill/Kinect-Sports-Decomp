extern int fn_822CEE40();
extern int fn_822CEFA0();
extern int fn_822CF260();
extern int fn_8288B760();
extern unsigned int lbl_821CA460;


unsigned int fn_822CF078(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x168) == 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x16c);
  }
  else {
    uVar1 = fn_8288B760();
    uVar1 = uVar1 & 0xff;
  }
  if ((uVar1 == 0) && (iVar2 = *(int *)(param_1 + 0x168), iVar2 != 0)) {
    if (*(char *)(iVar2 + 0xfc) != '\0') {
      return *(unsigned int *)(iVar2 + 0xf8);
    }
  }
  else if ((lbl_821CA460 <= *(float *)(param_1 + 0x264)) &&
          (((iVar2 = *(int *)(param_1 + 0x1c0), iVar2 == 0 ||
            (*(int *)(*(int *)(*(int *)(iVar2 + 0xd4) + 0x18) + 0xc) == 0)) &&
           (*(int *)(iVar2 + 0x204) == 0)))) {
    if (*(int *)(*(int *)(param_1 + 0x110) + 0x18) == 2) {
      return -(unsigned int)(*(int *)(param_1 + 0x270) != 0) & 0x20;
    }
    iVar2 = fn_822CEE40(param_1);
    if (iVar2 == 0) {
      return 2;
    }
    iVar2 = *(int *)(iVar2 + 0x254);
    iVar3 = fn_822CF260(param_1,0);
    if (iVar3 == 0) {
      iVar2 = fn_822CEFA0(param_1);
      return (iVar2 == 0) + 1;
    }
    if (iVar2 == 7) {
      return 0x10;
    }
    return 8;
  }
  return 0;
}

