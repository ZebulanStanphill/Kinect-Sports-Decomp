extern int fn_828CE608();


unsigned char fn_828CE688(int param_1)

{
  if (*(char *)(param_1 + 0xc1) == '\0') {
    *(unsigned char *)(param_1 + 0xc1) = 1;
    fn_828CE608((unsigned __int64)*(unsigned int *)(param_1 + 0x6c) + 0xc,param_1);
  }
  return *(unsigned char *)(param_1 + 0xc0);
}

