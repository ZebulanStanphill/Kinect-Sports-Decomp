typedef unsigned char bool;
extern int fn_82631830();
extern int fn_828F0DD0();


unsigned __int64 fn_82677B90(unsigned __int64 param_1,int *param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int *apiStack_20 [4];
  
  if (*param_2 != 0) {
    return 1;
  }
  apiStack_20[0] = (int *)0x0;
  pcVar4 = param_3;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  iVar3 = fn_828F0DD0(param_3,pcVar4 + (-1 - (int)param_3),0,0,0xffffffff821bbc7c,
                            0xffffffff8200532c,1,apiStack_20);
  bVar1 = apiStack_20[0] == (int *)0x0;
  if (-1 < iVar3) {
    if (bVar1) {
      return 0;
    }
    (**(int (***)())(*apiStack_20[0] + 0xc))();
    iVar3 = fn_82631830();
    *param_2 = iVar3;
    bVar1 = apiStack_20[0] == (int *)0x0;
    if (iVar3 != 0) {
      if (bVar1) {
        return 1;
      }
      (**(int (***)())(*apiStack_20[0] + 8))();
      return 1;
    }
  }
  if (!bVar1) {
    (**(int (***)())(*apiStack_20[0] + 8))();
  }
  return 0;
}

