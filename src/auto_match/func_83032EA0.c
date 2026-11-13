extern int fn_82FF5750();
extern unsigned int lbl_832642F4;


void fn_83032EA0(int param_1)

{
  if ((*(unsigned int *)(param_1 + 0x20) != 0) && ((unsigned __int64)*(unsigned int *)(param_1 + 0x94) != 0)) {
    fn_82FF5750(lbl_832642F4,*(int *)(param_1 + 0x20),(unsigned int)*(unsigned int *)(param_1 + 0x94) + 4);
  }
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned char *)(param_1 + 0x28) = *(unsigned char *)(param_1 + 0x28) & 0x7f;
  return;
}

