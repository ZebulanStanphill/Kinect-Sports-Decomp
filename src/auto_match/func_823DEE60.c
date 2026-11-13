extern unsigned int *auStack_20;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822EFBF0();
extern int fn_823831D8();
extern unsigned int iStack_1c;
extern unsigned int lbl_832975B0;


void fn_823DEE60(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned char auStack_20 [4];
  int iStack_1c;
  
  iVar2 = lbl_832975B0;
  iVar1 = *(int *)(param_1 + 8);
  *(unsigned int *)(iVar1 + 0xe28) = 0xffffffff;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  if (iVar2 == 0) {
    iVar2 = fn_82250A18();
  }
  if ((*(char *)(iVar2 + 4) != '\0') && (*(int *)(iVar1 + 0x84) != 0)) {
    puVar3 = (unsigned int *)fn_822EFBF0(auStack_20);
    fn_823831D8((unsigned __int64)*(unsigned int *)*puVar3 + 0x710);
    if (iStack_1c != 0) {
      fn_822315A0();
    }
  }
  return;
}

