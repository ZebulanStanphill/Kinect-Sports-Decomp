extern int fn_8267BE38();
extern int fn_826FC7A0();
extern unsigned int lbl_8200DBA8;


void fn_826FEC90(unsigned int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = param_1[4];
  *param_1 = &lbl_8200DBA8;
  if (iVar1 != 0) {
    fn_826FC7A0(iVar1);
    fn_8267BE38(iVar1);
  }
  return;
}

