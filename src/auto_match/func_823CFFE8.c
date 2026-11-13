extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_823D0140();
extern int fn_823E7368();
extern int fn_823F1EC0();
extern int fn_8288B760();
extern unsigned int iStack_ac;
extern unsigned int lbl_832975B0;


void fn_823CFFE8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned char auStack_b0 [4];
  int iStack_ac;
  unsigned char auStack_a0 [144];
  
  fn_82250D10(auStack_a0);
  fn_823E7368(param_1,auStack_a0);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) == '\0') {
    fn_823D0140(param_1,param_2,param_3,param_4,param_5,auStack_a0);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x84);
    piVar1 = *(int **)(**(int **)(param_1 + 8) + param_3 * 4);
    iVar3 = fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1));
    if (iVar2 != 0) {
      if (*(int *)(iVar3 + 0x168) == 0) {
        uVar4 = *(unsigned int *)(iVar3 + 0x16c);
      }
      else {
        uVar4 = fn_8288B760();
        uVar4 = uVar4 & 0xff;
      }
      if (uVar4 != 0) {
        puVar5 = (unsigned int *)fn_822EFBF0(auStack_b0,iVar2);
        fn_823F1EC0((unsigned __int64)*(unsigned int *)*puVar5 + 0xa58,param_2,param_3,param_4,param_5,
                          auStack_a0);
        if (iStack_ac != 0) {
          fn_822315A0();
        }
      }
    }
  }
  return;
}

