extern int fn_8240D930();
extern unsigned char fn_825B5568();
extern int fn_8265CA20();
extern int fn_828B22F0();
extern int fn_828B2BF8();
extern int fn_828B3E88();
extern unsigned int lbl_82024E20;
extern unsigned int lbl_82024E40;


void fn_828B4958(unsigned int *param_1)

{
  unsigned char cVar2;
  int *piVar1;
  
  *param_1 = &lbl_82024E40;
  if (*(char *)(param_1 + 0xe) != '\0') {
    fn_828B2BF8();
    cVar2 = fn_825B5568();
    if (cVar2 != '\0') {
      fn_828B2BF8();
      piVar1 = (int *)fn_8240D930();
      (*(int (**)())(*piVar1 + 0x2c))(piVar1,*(unsigned __int64 *)(param_1 + 0xc));
    }
    *(unsigned char *)(param_1 + 0xe) = 0;
  }
  *param_1 = &lbl_82024E20;
  fn_828B22F0(param_1 + 8);
  fn_8265CA20(param_1[8]);
  fn_828B3E88(param_1 + 2);
  fn_8265CA20(param_1[2]);
  param_1[2] = 0;
  return;
}

