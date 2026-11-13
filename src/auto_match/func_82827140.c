extern unsigned int *auStack_3c;
extern int fn_82826AB0();
extern int fn_8282D0E0();
extern int fn_82F672D8();
extern unsigned int iStack00000014;
extern unsigned int iStack_40;
extern unsigned int stack0x00000014;


void fn_82827140(int param_1,unsigned __int64 param_2,unsigned char *param_3,unsigned int param_4,
                  unsigned char *param_5,unsigned __int64 param_6)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iStack00000014;
  int iStack_40;
  unsigned char auStack_3c [60];
  
  iStack00000014 = param_1;
  fn_8282D0E0(*(unsigned int *)(param_1 + 0xcc),3,&stack0x00000014);
  fn_82826AB0(iStack00000014,param_2,&iStack_40,auStack_3c);
  iVar2 = 0;
  while (*(char *)(iVar2 + iStack_40) != '\0') {
    iVar2 = iVar2 + 1;
    if (0xff < iVar2) {
      *param_3 = 0;
      return;
    }
  }
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      cVar1 = *(char *)(iVar4 + iStack_40);
      if (((cVar1 < 'A') || ('Z' < cVar1)) && ((cVar1 < 'a' || ('z' < cVar1)))) {
        *param_3 = 0;
        goto LAB_82827280;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  uVar3 = iVar2 + 1U;
  if (param_4 < iVar2 + 1U) {
    uVar3 = param_4;
  }
  fn_82F672D8(param_3,iStack_40,uVar3);
  iVar4 = 0;
  iVar2 = iVar2 + iStack_40 + 1;
  while (((cVar1 = *(char *)(iVar2 + iVar4), '/' < cVar1 && (cVar1 < ':')) ||
         ((cVar1 == '.' && (((iVar4 == 2 || (iVar4 == 5)) || (iVar4 == 8))))))) {
    iVar4 = iVar4 + 1;
    if (0xc < iVar4) {
      if (0xd < (param_6 & 0xffffffff)) {
        param_6 = 0xe;
      }
      fn_82F672D8(param_5,iVar2,param_6);
      return;
    }
  }
LAB_82827280:
  *param_5 = 0;
  return;
}

