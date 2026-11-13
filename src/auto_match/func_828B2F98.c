extern int fn_8240D930();
extern int fn_825B5568();
extern int fn_828B2BF8();


void fn_828B2F98(int param_1)

{
  unsigned char cVar2;
  int *piVar1;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    fn_828B2BF8();
    cVar2 = fn_825B5568();
    if (cVar2 != '\0') {
      fn_828B2BF8();
      piVar1 = (int *)fn_8240D930();
      (*(int (**)())(*piVar1 + 0x2c))(piVar1,*(unsigned __int64 *)(param_1 + 0x30));
    }
    *(unsigned char *)(param_1 + 0x38) = 0;
  }
  return;
}

