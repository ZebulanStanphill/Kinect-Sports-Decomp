extern int fn_82F63BA0();
extern int fn_82F67A88();
extern int fn_82F68240();
extern int fn_82F6AAD0();
extern int fn_82F6AC80();
extern int fn_82F7C468();
extern int fn_82F816D0();
extern int fn_82F817C0();
extern unsigned int iStack0000001c;
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


__int64 fn_82F6A938(char *param_1,int param_2)

{
  char cVar1;
  unsigned int *puVar3;
  unsigned int uVar4;
  unsigned __int64 uVar2;
  char *pcVar5;
  unsigned char *puVar6;
  unsigned char *puVar7;
  char *pcVar8;
  int iStack0000001c;
  
  iStack0000001c = param_2;
  if ((param_1 != (char *)0x0) && (param_2 != param_2 + -1 + (unsigned int)(param_2 == 0))) {
    pcVar8 = param_1;
    if ((*(unsigned int *)(param_2 + 0xc) & 0x40) != 0) {
LAB_82f6aa2c:
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      fn_82F6AC80(param_2);
      uVar2 = fn_82F816D0(param_2);
      pcVar5 = (char *)fn_82F67A88(param_1,1,pcVar8 + (-1 - (int)param_1),param_2);
      fn_82F817C0(uVar2,param_2);
      fn_82F6AAD0();
      return -(unsigned __int64)(pcVar8 + (-1 - (int)param_1) != pcVar5);
    }
    uVar4 = fn_82F7C468(param_2);
    if ((uVar4 == 0xffffffff) || (uVar4 == 0xfffffffe)) {
      puVar6 = &lbl_831BBF60;
    }
    else {
      puVar6 = (unsigned char *)((&lbl_8329F620)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x48);
    }
    puVar7 = &lbl_831BBF60;
    if ((puVar6[0x28] & 0xfe) == 0) {
      if ((uVar4 != 0xffffffff) && (uVar4 != 0xfffffffe)) {
        puVar7 = (unsigned char *)((&lbl_8329F620)[(int)uVar4 >> 5] + (uVar4 & 0x1f) * 0x48);
      }
      if ((puVar7[0x28] & 1) == 0) goto LAB_82f6aa2c;
    }
  }
  puVar3 = (unsigned int *)fn_82F68240();
  *puVar3 = 0x16;
  fn_82F63BA0();
  return -1;
}

