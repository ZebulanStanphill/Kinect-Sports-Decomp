extern int fn_822ACB68();
extern int fn_82526C10();


void fn_822ACAD8(unsigned __int64 param_1,int param_2,unsigned __int64 param_3)

{
  char cVar1;
  char *pcVar2;
  char acStack_90 [112];
  char acStack_10 [16];
  
  pcVar2 = acStack_90;
  do {
    if (acStack_10 <= pcVar2) break;
    cVar1 = pcVar2[param_2 - (int)acStack_90];
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 == acStack_10) {
    pcVar2[-1] = '\0';
  }
  fn_82526C10(acStack_90,0x80,0xffffffff821ac4b4,param_3,param_1);
  fn_82526C10(acStack_90);
  fn_822ACB68(param_1,acStack_90);
  return;
}

