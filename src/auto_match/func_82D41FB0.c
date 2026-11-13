extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


unsigned __int64 fn_82D41FB0(int *param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  char *pcVar3;
  unsigned char auStack_230 [1];
  unsigned char auStack_220 [520];
  
  if ((unsigned __int64)(unsigned int)param_1[0x2d] + (unsigned __int64)(unsigned int)param_1[0x2a] == 0) {
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = -(unsigned __int64)((unsigned __int64)(unsigned int)param_1[0x2a] == 0) & 0xffffffff80000000;
    iVar2 = (**(int (***)())(*param_1 + 0x14))(param_1,uVar1,auStack_220);
    if ((*(int *)(iVar2 + 0xc) == 3) &&
       (pcVar3 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_230,iVar2 + 0x20,iVar2 + 0x30,
                                      iVar2 + 0x40), *pcVar3 != '\0')) {
      uVar1 = (**(int (***)())(*param_1 + 0xc))(param_1,uVar1);
    }
  }
  return uVar1;
}

