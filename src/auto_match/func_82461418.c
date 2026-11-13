extern int fn_82230300();
extern int fn_8249ABC0();
extern int fn_8249D278();
extern unsigned int lbl_821BBD58;
extern unsigned int lbl_821C2CCC;


void fn_82461418(unsigned int *param_1)

{
  int iVar1;
  
  *param_1 = &lbl_821BBD58;
  if (param_1[0x78] != -1) {
    iVar1 = fn_8249ABC0();
    fn_8249D278(*(unsigned int *)(iVar1 + 0xec),param_1[0x78]);
    param_1[0x78] = 0xffffffff;
  }
  *param_1 = &lbl_821C2CCC;
  fn_82230300(param_1 + 3,1,0);
  return;
}

