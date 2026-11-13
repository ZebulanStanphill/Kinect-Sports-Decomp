extern int memcpy();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FFE0F0();
extern int fn_82FFE158();
extern unsigned int lbl_831BC768;


void fn_82FFA510(__int64 param_1,unsigned __int64 param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  
  iVar1 = fn_82FFE0F0(param_1 + 0x41c);
  pcVar4 = param_3;
  if (iVar1 == 0) {
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    iVar1 = fn_82FA5060(lbl_831BC768,pcVar4 + (4 - (int)param_3));
    if (iVar1 != 0) {
      memcpy(iVar1,param_3,pcVar4 + (-1 - (int)param_3));
      builtin_strncpy(pcVar3 + iVar1 + (-1 - (int)param_3) + 1,".bnk",5);
      piVar2 = (int *)fn_82FFE158(param_1 + 0x41c,param_2);
      if (piVar2 == (int *)0x0) {
        fn_82FA5190(lbl_831BC768,iVar1);
      }
      else {
        *piVar2 = iVar1;
      }
    }
  }
  return;
}

