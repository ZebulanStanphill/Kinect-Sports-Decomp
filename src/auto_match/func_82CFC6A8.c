#define true 1
extern int fn_82CE5410();
extern int fn_82CE63B0();


unsigned char * fn_82CFC6A8(unsigned char *param_1,char *param_2,char *param_3,int *param_4,int param_5)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar2 = strstr(param_2,param_3);
  *param_1 = 0;
  while( true ) {
    if (pcVar2 == (char *)0x0) {
      return param_1;
    }
    *param_1 = 1;
    iVar3 = fn_82CE5410();
    if (param_4[1] == (param_4[2] & 0x3fffffffU)) break;
    *(int *)(param_4[1] * 4 + *param_4) = (int)pcVar2 - (int)param_2;
    param_4[1] = param_4[1] + 1;
    if (param_5 == 0) {
      return param_1;
    }
    pcVar2 = strstr(pcVar2 + (int)(pcVar4 + (-1 - (int)param_3)),param_3);
  }
                    /* WARNING: Subroutine does not return */
  fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_4,4);
}

