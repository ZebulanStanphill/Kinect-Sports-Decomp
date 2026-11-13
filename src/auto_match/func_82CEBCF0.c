extern unsigned int *auStack_1e;
extern int fn_82CE4EC0();
extern unsigned int uStack_1f;
extern unsigned int uStack_20;


unsigned char * fn_82CEBCF0(unsigned char *param_1,__int64 param_2)

{
  char *pcVar1;
  unsigned char uVar2;
  unsigned char uStack_20;
  unsigned char uStack_1f;
  unsigned char auStack_1e [1];
  
  pcVar1 = (char *)fn_82CE4EC0(&uStack_20);
  if ((*pcVar1 != '\0') &&
     (pcVar1 = (char *)fn_82CE4EC0(&uStack_1f,param_2 + 0x10), *pcVar1 != '\0')) {
    pcVar1 = (char *)fn_82CE4EC0(auStack_1e,param_2 + 0x20);
    if (*pcVar1 != '\0') { uVar2 = 1; goto LAB_82cebd58; }
  }
  uVar2 = 0;
LAB_82cebd58:
  *param_1 = uVar2;
  return param_1;
}

