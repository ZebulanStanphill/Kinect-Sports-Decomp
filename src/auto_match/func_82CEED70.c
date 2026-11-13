extern unsigned int *auStack_30;
extern int fn_82CEAF18();
extern int fn_82CEAF20();
extern int fn_82CEEC58();


unsigned char * fn_82CEED70(unsigned char *param_1,unsigned __int64 param_2)

{
  int iVar2;
  unsigned int uVar1;
  char *pcVar3;
  int lVar4;
  unsigned char auStack_30 [1];
  
  iVar2 = fn_82CEAF18(param_2);
  lVar4 = 0;
  if (0 < iVar2) {
    do {
      uVar1 = fn_82CEAF20(param_2,lVar4);
      pcVar3 = (char *)fn_82CEEC58(auStack_30,uVar1);
      if (*pcVar3 == '\0') {
        *param_1 = 0;
        return param_1;
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar2);
  }
  *param_1 = 1;
  return param_1;
}

