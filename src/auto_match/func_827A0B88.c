extern int fn_8279FB38();


unsigned int fn_827A0B88(int param_1)

{
  if ((*(unsigned char *)(param_1 + 0x13f) & 3) != 0) {
    fn_8279FB38();
    *(unsigned char *)(param_1 + 0x13f) = *(unsigned char *)(param_1 + 0x13f) & 0xfc;
  }
  return *(unsigned int *)(param_1 + 0x28);
}

