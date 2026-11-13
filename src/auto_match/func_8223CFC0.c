extern int fn_8223CD08();
extern int fn_8223CF38();
extern unsigned int lbl_82020F38;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;


int * fn_8223CFC0(int *param_1,unsigned __int64 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (int)&lbl_821AA8E0;
    param_1[0x14] = (int)&lbl_82020F38;
  }
  *(unsigned char ***)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_82020F40;
  fn_8223CD08(*(int *)(*param_1 + 4) + (int)param_1,param_1 + 1,0);
  *(unsigned char ***)(*(int *)(*param_1 + 4) + (int)param_1) = &lbl_82021284;
  fn_8223CF38(param_1 + 1,param_2 | 2);
  return param_1;
}

