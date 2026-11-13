#define true 1
extern unsigned int *auStack_38;
extern unsigned int *auStack_3c;
extern int fn_82F919C8();
extern int fn_82662C00();
extern int fn_82668270();
extern int fn_82667E18();
extern int fn_82F919C8();
extern int fn_82F92000();
extern int fn_82F92218();
extern int fn_82F953A8();
extern int fn_8265D5A8();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_1c;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;


unsigned int fn_82667B68(unsigned int param_1,int param_2,unsigned int param_3,char param_4)

{
  unsigned int uVar3;
  unsigned int *puVar4;
  char *pcVar5;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar6;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  char cStack0000002f;
  char cStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char auStack_3c [4];
  unsigned char auStack_38 [28];
  unsigned int uStack_1c;

  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  cStack0000002f = param_4;
  uVar3 = fn_82F92218(param_3);
  puVar4 = (unsigned int *)fn_82F92000(iStack0000001c);
  uStack_48 = *puVar4;
  uStack_4c = *(unsigned int *)(iStack0000001c + 4);
  cStack_50 = '\x01';
  while( true ) {
    pcVar5 = (char *)fn_82F953A8(uStack_48);
    if (*pcVar5 != '\0') break;
    uStack_4c = uStack_48;
    if (cStack0000002f == '\0') {
      uVar1 = fn_82F919C8(uStack_48);
      uVar2 = fn_82F919C8(uVar3);
      cStack_50 = fn_82668270(iStack0000001c,uVar2,uVar1);
    }
    else {
      uVar1 = fn_82F919C8(uVar3);
      uVar2 = fn_82F919C8(uStack_48);
      cVar6 = fn_82668270(iStack0000001c,uVar2,uVar1);
      cStack_50 = cVar6 == '\0';
    }
    if (cStack_50 == '\0') {
      puVar4 = (unsigned int *)fn_8265D5A8(uStack_48);
      uStack_1c = *puVar4;
    }
    else {
      puVar4 = (unsigned int *)fn_82F919C8(uStack_48);
      uStack_1c = *puVar4;
    }
    uStack_48 = uStack_1c;
  }
  auStack_3c[0] = 1;
  uVar1 = fn_82662C00(auStack_38,iStack0000001c,cStack_50,uStack_4c,uStack00000024);
  fn_82667E18(uStack00000014,uVar1,auStack_3c);
  return uStack00000014;
}
