extern int fn_82230300();
extern int fn_8223DEF8();
extern int fn_8223DFF0();
extern int fn_822B2888();


unsigned __int64 fn_822B27E8(unsigned __int64 param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  
  fn_82230300(param_1,0,0);
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fn_822B2888(param_1,pcVar2 + *(int *)(param_2 + 0x10) + (-1 - (int)param_3));
  fn_8223DEF8(param_1,param_2,0,0xffffffffffffffff);
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fn_8223DFF0(param_1,param_3,pcVar2 + (-1 - (int)param_3));
  return param_1;
}

