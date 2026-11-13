extern unsigned int *auStack_20;
extern int fn_82CEAC28();
extern int fn_82CEED70();


unsigned char * fn_82CEEDF8(unsigned char *param_1,unsigned int param_2)

{
  char *pcVar1;
  unsigned char uVar2;
  unsigned char auStack_20 [8];
  
  do {
    pcVar1 = (char *)fn_82CEED70(auStack_20,param_2);
    if (*pcVar1 == '\0') {
      uVar2 = 0;
      goto LAB_82ceee44;
    }
    param_2 = fn_82CEAC28(param_2);
  } while ((param_2 & 0xffffffff) != 0);
  uVar2 = 1;
LAB_82ceee44:
  *param_1 = uVar2;
  return param_1;
}

