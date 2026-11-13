extern int fn_83004B48();
extern int fn_8301B058();
extern unsigned int lbl_832642EC;


void fn_830093E8(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  if (((param_2 == 0) && (*(unsigned int *)(param_1 + 0x24) != 0)) &&
     (*(char *)(*(unsigned int *)(param_1 + 0x24) + 0x3c) != -1)) {
    fn_8301B058(lbl_832642EC,param_1);
    if (*(unsigned int *)(param_1 + 0x24) != 0) {
      fn_83004B48(param_1,*(unsigned int *)(param_1 + 0x24),0xff,param_3,param_4);
    }
  }
  return;
}

