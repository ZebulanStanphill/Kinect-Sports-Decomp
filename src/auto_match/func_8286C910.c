extern int fn_828106A0();


unsigned __int64 fn_8286C910(int param_1,int *param_2)

{
  unsigned int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    *(unsigned char *)(iVar1 + 4) = 0;
    *(unsigned char *)(iVar1 + 0x59) = 1;
    fn_828106A0(iVar1 + 0x14);
    fn_828106A0(iVar1 + 8);
  }
  *param_2 = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
  return 0x20310000;
}

