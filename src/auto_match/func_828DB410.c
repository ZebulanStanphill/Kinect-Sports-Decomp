extern int fn_828ACCE8();
extern int fn_828AD740();
extern int fn_828AE818();
extern int fn_828D2F28();
extern int fn_828DA9D8();
extern int fn_828DAA50();
extern int fn_828DAB70();
extern int fn_828DAC60();
extern int fn_828DAF10();
extern int fn_828DB128();
extern int fn_828DB2F8();


void fn_828DB410(int param_1)

{
  unsigned char cVar1;
  
  switch(*(unsigned int *)(param_1 + 0xc)) {
  case 3:
    fn_828DB128(param_1);
    return;
  case 4:
    fn_828DB2F8(param_1);
    return;
  case 5:
    fn_828DAB70(param_1);
    return;
  case 6:
    fn_828DAC60(param_1);
    return;
  case 7:
    fn_828DA9D8(param_1);
    return;
  case 8:
    fn_828DAF10(param_1);
    return;
  case 1:
    fn_828DAA50(param_1);
    return;
  case 2:
    cVar1 = fn_828ACCE8(*(unsigned int *)(param_1 + 8));
    if ((cVar1 == '\0') || (cVar1 = fn_828AD740(*(unsigned int *)(param_1 + 8)), cVar1 != '\0'))
    {
      fn_828D2F28(param_1);
      return;
    }
    break;
  case 10:
    cVar1 = fn_828ACCE8(*(unsigned int *)(param_1 + 8));
    if (cVar1 != '\0') {
      fn_828AE818(*(unsigned int *)(param_1 + 8),0x10);
    }
  }
  return;
}

