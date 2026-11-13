extern int fn_82F63BA0();
extern int fn_82F68240();


char * fn_82F64D58(unsigned short *param_1,char *param_2,char *param_3)

{
  char cVar1;
  unsigned int *puVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)0x0;
  if (param_1 != (unsigned short *)0x0) {
    if (param_3 == (char *)0x0) {
      return (char *)0x0;
    }
    *param_1 = 0;
  }
  if (param_2 == (char *)0x0) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    pcVar3 = (char *)0xffffffff;
  }
  else {
    pcVar4 = param_2;
    if (param_1 == (unsigned short *)0x0) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar4 + (-1 - (int)param_2);
    }
    else if (param_3 != (char *)0x0) {
      do {
        *param_1 = (unsigned short)(unsigned char)param_2[(int)pcVar3];
        if (param_2[(int)pcVar3] == '\0') {
          return pcVar3;
        }
        pcVar3 = pcVar3 + 1;
        param_1 = param_1 + 1;
      } while (pcVar3 < param_3);
    }
  }
  return pcVar3;
}

