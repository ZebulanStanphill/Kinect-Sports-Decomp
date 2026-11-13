extern unsigned int *auStack_70;
extern int fn_82526C70();
extern int fn_82560010();


void fn_8255FCD0(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  unsigned char auStack_70 [112];
  
  if ((param_3 != (int *)0x0) && (iVar2 = *param_3, iVar2 != 0)) {
    pcVar1 = *(char **)(iVar2 + 8);
    for (pcVar3 = *(char **)(iVar2 + 4); pcVar3 < pcVar1; pcVar3 = pcVar3 + 0x40) {
      if ((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) {
        fn_82526C70(auStack_70,0x40,0xffffffff821b0c70,pcVar3,param_2);
        iVar2 = fn_82560010(param_1,auStack_70);
        if (iVar2 != 0) {
          return;
        }
      }
    }
  }
  fn_82560010(param_1,param_2);
  return;
}

