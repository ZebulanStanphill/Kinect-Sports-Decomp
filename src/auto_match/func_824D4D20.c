extern int fn_824CD480();
extern int fn_824CD4E8();
extern int fn_82517CB0();
extern int fn_82517D50();
extern int fn_8265C9E0();
extern unsigned int lbl_821C0BE0;
extern unsigned int lbl_821C0C24;
extern unsigned int lbl_821C0DF8;
extern unsigned int lbl_821C112C;


unsigned int * fn_824D4D20(unsigned int *param_1,unsigned __int64 param_2)

{
  void *p;
  unsigned int *puVar3;
  int i;
  
  fn_82517D50(param_1,param_2,7);
  param_1[0x20] = 0;
  *param_1 = &lbl_821C0BE0;
  puVar3 = param_1 + 0x28;
  param_1[0x1a] = &lbl_821C0C24;
  i = 0x13;
  param_1[0x24] = 0;
  do {
    fn_824CD480(puVar3);
    puVar3 = puVar3 + 0x1c;
  } while (--i >= 0);
  *(unsigned __int64 *)(param_1 + 0x22) = 0;
  p = (void *)fn_8265C9E0(0x220);
  param_1[0x25] = p ? fn_824CD4E8(p) : 0;
  fn_82517CB0();
  *param_1 = &lbl_821C0DF8;
  param_1[0x1a] = &lbl_821C112C;
  fn_82517CB0();
  return param_1;
}
