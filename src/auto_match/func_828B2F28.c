extern int fn_8240D930();
extern int fn_825B5568();
extern int fn_828B2BF8();


void fn_828B2F28(int param_1)

{
  unsigned char cVar2;
  int *piVar1;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    fn_828B2BF8();
    cVar2 = fn_825B5568();
    if (cVar2 != '\0') {
      fn_828B2BF8();
      piVar1 = (int *)fn_8240D930();
      (*(int (**)())(*piVar1 + 0x24))(piVar1,*(unsigned int *)(param_1 + 0x40));
    }
    *(unsigned char *)(param_1 + 0x38) = 0;
  }
  return;
}

