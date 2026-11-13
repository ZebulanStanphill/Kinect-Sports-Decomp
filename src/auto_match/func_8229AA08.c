extern int fn_822315A0();
extern int fn_82292450();
extern int fn_8229AE58();
extern int fn_8229AEF0();
extern int fn_8265CA20();
extern int fn_82672660();
extern unsigned int lbl_821AADF4;


void fn_8229AA08(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int iVar2;
  
  *param_1 = &lbl_821AADF4;
  if ((int)param_1[1] != 0) {
    fn_82672660(param_1[1],param_1);
  }
  if (param_1[9] != 0) {
    fn_82292450(param_1[9],1);
  }
  if (param_1[8] != 0) {
    fn_82292450(param_1[8],1);
  }
  if (param_1[6] != 0) {
    fn_8229AEF0(param_1[6]);
  }
  puVar1 = (unsigned int *)param_1[5];
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
  }
  iVar2 = param_1[4];
  if (iVar2 != 0) {
    if (*(unsigned int *)(iVar2 + 4) != 0) {
      fn_822315A0(*(unsigned int *)(iVar2 + 4));
    }
    fn_8265CA20(iVar2);
  }
  fn_8229AE58(param_1 + 3);
  if (param_1[2] != 0) {
    fn_822315A0(param_1[2]);
  }
  return;
}

