extern int fn_8267B890();
extern int fn_82F664B0();
extern unsigned int lbl_82015068;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831E7E64;


unsigned int * fn_8276DF08(unsigned int *param_1,char *param_2,unsigned int param_3)

{
  char cVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  
  param_1[5] = param_3;
  param_1[6] = 0;
  uVar2 = lbl_821AAD20;
  param_1[1] = 1;
  param_1[2] = uVar2;
  *param_1 = &lbl_82015068;
  param_1[3] = uVar2;
  param_1[4] = uVar2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar3 = fn_8267B890(lbl_831E7E64,(int)pcVar4 - (int)param_2,0);
  param_1[6] = (int)uVar3;
  pcVar4 = param_2;
  if ((uVar3 & 0xffffffff) != 0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    fn_82F664B0(uVar3,(int)pcVar4 - (int)param_2,param_2);
  }
  param_1[5] = param_1[5] | 0x2000;
  return param_1;
}

