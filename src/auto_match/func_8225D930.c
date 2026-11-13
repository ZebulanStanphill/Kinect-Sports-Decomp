typedef unsigned char bool;
extern int fn_8225C168();
extern int fn_82521A10();
extern int fn_828EA610();
extern unsigned int iStack0000001c;
extern unsigned int lbl_832767C8;
extern unsigned int stack0x0000001c;


void fn_8225D930(__int64 param_1,int param_2)

{
  unsigned char bVar1;
  int iVar2;
  char cVar3;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  fn_8225C168(param_1 + 0x10,&stack0x0000001c);
  iVar2 = iStack0000001c;
  if (*(char *)(iStack0000001c + 0xd8) == '\0') {
    cVar3 = fn_828EA610(iStack0000001c);
    bVar1 = 1;
    if (cVar3 == '\0') goto LAB_8225d978;
  }
  bVar1 = 0;
LAB_8225d978:
  if ((bool)(*(int *)(iVar2 + 0x11c) == 0 & bVar1)) {
    fn_82521A10(lbl_832767C8,iVar2,1);
  }
  return;
}

