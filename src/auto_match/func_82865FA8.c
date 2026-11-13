extern int fn_82230300();
extern int fn_8223DEF8();
extern int fn_822B2888();


unsigned __int64 fn_82865FA8(unsigned __int64 param_1,int param_2,int param_3)

{
  fn_82230300(param_1,0,0);
  fn_822B2888(param_1,(unsigned __int64)*(unsigned int *)(param_3 + 0x10) +
                            (unsigned __int64)*(unsigned int *)(param_2 + 0x10));
  fn_8223DEF8(param_1,param_2,0,0xffffffffffffffff);
  fn_8223DEF8(param_1,param_3,0,0xffffffffffffffff);
  return param_1;
}

