extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822B4BB8();
extern unsigned int lbl_821AC980;
extern unsigned int lbl_821AD578;


unsigned int * fn_822C6310(unsigned int *param_1,int param_2)

{
  unsigned char auStack_40 [40];
  
  *param_1 = &lbl_821AD578;
  fn_82230110(auStack_40,"Mind State Machine");
  fn_822B4BB8(param_1 + 1,auStack_40);
  param_1[1] = &lbl_821AC980;
  fn_82230300(auStack_40,1,0);
  param_1[0x12] = **(unsigned int **)(param_2 + 0x24);
  return param_1;
}

