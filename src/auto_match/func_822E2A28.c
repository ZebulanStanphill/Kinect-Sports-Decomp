extern int fn_82250A18();
extern int fn_8236FB68();
extern int fn_82508078();
extern unsigned int lbl_831CD48C;
extern unsigned int lbl_832975B0;


unsigned __int64 fn_822E2A28(double param_1,int param_2)

{
  int iVar3;
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  *(float *)(param_2 + 0x40) = (float)(param_1 + (double)*(float *)(param_2 + 0x40));
  iVar3 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar3 = fn_82250A18();
  }
  if ((*(char *)(iVar3 + 4) == '\0') || (*(float *)(param_2 + 0x40) <= lbl_831CD48C)) {
    uVar2 = 0;
  }
  else {
    *(unsigned int *)(*(int *)(param_2 + 0x14) + 0x2f8) = 1;
    iVar3 = *(int *)(param_2 + 0x10);
    lVar1 = fn_8236FB68(5);
    if (lVar1 != 0) {
      fn_82508078(*(unsigned int *)(iVar3 + 0xa4),lVar1,0);
    }
    uVar2 = 1;
  }
  return uVar2;
}

