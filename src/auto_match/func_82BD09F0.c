extern unsigned int lbl_83223EC0;


int fn_82BD09F0(unsigned __int64 param_1,int param_2)

{
  if ((*(unsigned int *)(param_2 + 0xe4) >> 7 & 1) == 0) {
    return *(int *)(param_2 + 0x38);
  }
  return *(int *)(*(int *)(param_2 + 0x38) * 4 + lbl_83223EC0);
}

