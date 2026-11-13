extern int fn_82B7BD28();
extern int fn_82BC5758();
extern int fn_82BC5ED8();
extern unsigned int lbl_820E4CA0;


unsigned int * fn_82BC6268(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  fn_82BC5758();
  param_1[0x22] = 0;
  *param_1 = &lbl_820E4CA0;
  *(unsigned char *)(param_1 + 0x23) = 1;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  uVar2 = *(unsigned int *)(param_2 + 0x5ac);
  puVar1 = (unsigned int *)fn_82B7BD28(uVar2,0x8c);
  *puVar1 = uVar2;
  uVar2 = puVar1 + 1 != 0 ? fn_82BC5758(puVar1 + 1,param_2) : 0;
  param_1[0x24] = uVar2;
  fn_82BC5ED8(param_1,uVar2);
  return param_1;
}

