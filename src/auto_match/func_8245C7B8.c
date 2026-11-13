extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230300();
extern int fn_82579EF0();


void fn_8245C7B8(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [32];
  
  fn_82230300(auStack_40,0,0);
  fn_82230300(auStack_60,0,0);
  *(unsigned int *)(param_1 + 0x6b4) = 1;
  iVar2 = param_1 + 0x6c8;
  *(unsigned int *)(param_1 + 0x664) = 1;
  iVar1 = fn_82579EF0(iVar2,"LspMajorVersionNumber",0);
  if ((iVar1 >= 0) && (iVar1 <= 0xffff)) {
    *(short *)(param_1 + 0x65c) = (short)iVar1;
  }
  iVar1 = fn_82579EF0(iVar2,"LspMinorVersionNumber",0);
  if ((iVar1 >= 0) && (iVar1 <= 0xffff)) {
    *(short *)(param_1 + 0x65e) = (short)iVar1;
  }
  iVar1 = fn_82579EF0(iVar2,"MagicNumber",*(unsigned short *)(param_1 + 0x690));
  if ((iVar1 >= 0) && (iVar1 <= 0xffff)) {
    *(short *)(param_1 + 0x690) = (short)iVar1;
  }
  iVar1 = fn_82579EF0(iVar2,"LSPThread",*(unsigned int *)(param_1 + 0x718));
  *(int *)(param_1 + 0x718) = iVar1;
  if ((iVar1 < 0) || (5 < iVar1)) {
    *(unsigned int *)(param_1 + 0x718) = 0;
  }
  fn_82230300(auStack_60,1,0);
  fn_82230300(auStack_40,1,0);
  return;
}

