extern int fn_82230300();
extern int fn_8223DEF8();
extern int fn_8223DFF0();
extern int fn_822B2888();


unsigned __int64 fn_8234D690(unsigned __int64 param_1,char *param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  
  fn_82230300(param_1,0,0);
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fn_822B2888(param_1,pcVar2 + *(int *)(param_3 + 0x10) + (-1 - (int)param_2));
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  fn_8223DFF0(param_1,param_2,pcVar2 + (-1 - (int)param_2));
  fn_8223DEF8(param_1,param_3,0,0xffffffffffffffff);
  return param_1;
}

