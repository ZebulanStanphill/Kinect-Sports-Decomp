extern int fn_826D64C8();
extern int fn_826D74A0();


void fn_826F4788(int param_1,unsigned char param_2)

{
  int iVar1;
  
  if (param_2 != '\0') {
    fn_826D64C8(*(unsigned int *)(param_1 + 0x20));
  }
  if (((*(int *)(param_1 + 0x1c) != 0) && (param_2 == '\0')) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20), iVar1 != 0)) {
    fn_826D74A0(iVar1,3);
  }
  return;
}

