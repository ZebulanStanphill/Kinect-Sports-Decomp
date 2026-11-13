extern int fn_8223CD80();
extern int fn_8223DB10();
extern int fn_822EC810();
extern unsigned int iStack_20;
extern unsigned int lbl_821AE3B4;
extern unsigned int ltcg_pool_0_0f;


double fn_822EC770(unsigned int *param_1)

{
  char cVar1;
  double dVar2;
  float afStack_70 [4];
  unsigned char **appuStack_60 [15];
  unsigned int *puStack_24;
  int iStack_20;
  
  fn_8223CD80(appuStack_60);
  appuStack_60[0] = &lbl_821AE3B4;
  puStack_24 = param_1;
  if (0xf < (unsigned int)param_1[5]) {
    puStack_24 = (unsigned int *)*param_1;
  }
  iStack_20 = param_1[4] + (int)puStack_24;
  cVar1 = fn_822EC810(appuStack_60,afStack_70);
  if (cVar1 == '\0') {
    fn_8223DB10(appuStack_60);
    dVar2 = (double)ltcg_pool_0_0f;
  }
  else {
    dVar2 = (double)afStack_70[0];
    fn_8223DB10(appuStack_60);
  }
  return dVar2;
}

