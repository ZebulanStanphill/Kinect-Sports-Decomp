typedef unsigned char bool;
extern int fn_8260D428();


bool fn_8286A188(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  iVar2 = fn_8260D428(param_2,0,*(unsigned int *)(param_2 + 0x10),param_1,
                       pcVar3 + (-1 - (int)param_1));
  return iVar2 == 0;
}

