extern int fn_8223CD08();
extern int fn_8223CF38();
extern unsigned int lbl_82020F38;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_821AA8E0;
extern unsigned int lbl_821AE3F0;
extern unsigned int lbl_821C2AD8;
extern unsigned int lbl_821C2ADC;
extern unsigned int lbl_821C2AE0;


int * fn_8251B7F0(int *param_1)

{
  *param_1 = (int)&lbl_821C2AE0;
  param_1[4] = (int)&lbl_821AA8E0;
  param_1[0x18] = (int)&lbl_82020F38;
  *(unsigned char ***)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_821AE3F0;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_8223CD08(*(int *)(*param_1 + 4) + (int)param_1,param_1 + 6,0);
  *(unsigned char ***)((int)param_1 + *(int *)(param_1[4] + 4) + 0x10) = &lbl_82020F40
  ;
  *(unsigned char ***)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_821C2AD8;
  *(unsigned char **)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_821C2ADC;
  fn_8223CF38(param_1 + 6,3);
  return param_1;
}

