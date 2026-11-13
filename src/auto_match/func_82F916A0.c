extern unsigned int *auStack_20;
extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_60;
extern int fn_8265D5A8();
extern int fn_82F91650();
extern int fn_82F919B8();
extern int fn_82F919C8();
extern int fn_82F91AF0();
extern int fn_82F92000();
extern int fn_82F92110();
extern int fn_82F92170();
extern int fn_82F921A0();
extern int fn_82F93A00();
extern int fn_82F953B8();
extern int fn_82F95C80();
extern int fn_82F95D48();
extern unsigned int iStack0000001c;
extern unsigned int uStack00000014;
extern unsigned int uStack00000024;
extern unsigned int uStack_1c;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


unsigned int fn_82F916A0(unsigned int param_1,int param_2,unsigned int param_3)

{
  unsigned int *puVar3;
  char *pcVar4;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  char cVar5;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned int uStack00000024;
  char cStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned char auStack_60 [1];
  unsigned char auStack_48 [8];
  unsigned char auStack_40 [8];
  unsigned char auStack_38 [8];
  unsigned char auStack_30 [8];
  unsigned char auStack_28 [8];
  unsigned char auStack_20 [4];
  unsigned int uStack_1c;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  uStack00000024 = param_3;
  puVar3 = (unsigned int *)fn_82F92000(param_2);
  uStack_68 = *puVar3;
  uStack_6c = *(unsigned int *)(iStack0000001c + 4);
  cStack_70 = '\x01';
  while (pcVar4 = (char *)fn_82F919B8(uStack_68), *pcVar4 == '\0') {
    uStack_6c = uStack_68;
    uVar1 = fn_82F919C8(uStack_68);
    uVar2 = fn_8265D5A8(uStack00000024);
    cStack_70 = fn_82F92110(iStack0000001c,uVar2,uVar1);
    if (cStack_70 == '\0') {
      puVar3 = (unsigned int *)fn_82F953B8(uStack_68);
      uStack_1c = *puVar3;
    }
    else {
      puVar3 = (unsigned int *)fn_8265D5A8(uStack_68);
      uStack_1c = *puVar3;
    }
    uStack_68 = uStack_1c;
  }
  fn_82F95C80(auStack_60,uStack_6c,iStack0000001c);
  if (cStack_70 != '\0') {
    uVar1 = fn_82F91650(auStack_48,iStack0000001c);
    cVar5 = fn_82F921A0(auStack_60,uVar1);
    if (cVar5 != '\0') {
      auStack_40[0] = 1;
      uVar1 = fn_82F91AF0(auStack_38,iStack0000001c,1,uStack_6c,uStack00000024);
      fn_82F95D48(uStack00000014,uVar1,auStack_40);
      return uStack00000014;
    }
    fn_82F92170(auStack_60);
  }
  uVar1 = fn_8265D5A8(uStack00000024);
  fn_82F93A00(auStack_60);
  uVar2 = fn_82F919C8();
  cVar5 = fn_82F92110(iStack0000001c,uVar2,uVar1);
  if (cVar5 == '\0') {
    auStack_20[0] = 0;
    fn_82F95D48(uStack00000014,auStack_60,auStack_20);
  }
  else {
    auStack_30[0] = 1;
    uVar1 = fn_82F91AF0(auStack_28,iStack0000001c,cStack_70,uStack_6c,uStack00000024);
    fn_82F95D48(uStack00000014,uVar1,auStack_30);
  }
  return uStack00000014;
}

