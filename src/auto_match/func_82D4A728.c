extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


unsigned __int64 fn_82D4A728(int *param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  char *pcVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned char auStack_250 [16];
  unsigned char auStack_240 [576];
  
  uVar5 = (unsigned int)param_2 >> (0x20U - param_1[8] & 0x3f);
  param_2 = 0xffffffff >> (param_1[8] & 0x3fU) & param_2;
  iVar3 = uVar5 * 0x38;
  do {
    param_2 = param_2 + 1;
    if (*(int *)(iVar3 + param_1[9] + 0x1c) <= (int)param_2) {
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x38;
      if ((unsigned int)param_1[10] <= uVar5) {
        return 0xffffffffffffffff;
      }
      param_2 = 0;
    }
    uVar4 = uVar5 << (0x20U - param_1[8] & 0x3f) | param_2;
    lVar1 = (**(int (***)())(*param_1 + 0x14))(param_1,uVar4,auStack_240);
    pcVar2 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_250,lVar1 + 0x20,lVar1 + 0x30,
                                  lVar1 + 0x40);
  } while (*pcVar2 != '\0');
  return uVar4;
}

