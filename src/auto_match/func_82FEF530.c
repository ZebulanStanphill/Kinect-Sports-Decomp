void fn_82FEF530(int param_1,unsigned int param_2,unsigned int param_3)

{
  if ((param_3 & 1) != 0) {
    *(unsigned char *)(param_1 + 0xf4) = (unsigned char)param_2 & 1;
  }
  if ((param_3 & 2) != 0) {
    *(unsigned char *)(param_1 + 0x104) = (unsigned char)(param_2 >> 1) & 1;
  }
  if ((param_3 & 4) != 0) {
    *(unsigned char *)(param_1 + 0x114) = (unsigned char)(param_2 >> 2) & 1;
  }
  if ((param_3 & 8) != 0) {
    *(unsigned char *)(param_1 + 0x124) = (unsigned char)(param_2 >> 3) & 1;
  }
  if ((param_3 & 0x10) == 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0xda) =
       (unsigned char)(param_2 >> 4) & 1 | *(unsigned char *)(param_1 + 0xda) & 0xfe;
  return;
}

