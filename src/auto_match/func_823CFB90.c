extern unsigned int *auStack_60;
extern unsigned int *auStack_90;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_822ABA88();
extern int fn_822EFBF0();
extern int fn_823CFCE8();
extern int fn_823F1B08();
extern int fn_8288B760();
extern int fn_82F68CC0();
extern unsigned int iStack_5c;
extern unsigned int lbl_832975B0;


void fn_823CFB90(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 *param_6,__int64 param_7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned char auStack_90 [39];
  char cStack_69;
  unsigned char auStack_60 [4];
  int iStack_5c;
  
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) == '\0') {
    fn_823CFCE8(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  else {
    iVar2 = *(int *)(param_2 + 0x84);
    piVar1 = *(int **)(**(int **)(param_2 + 8) + param_4 * 4);
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
        puVar5 = (unsigned int *)fn_822EFBF0(auStack_60,iVar2);
        cStack_69 = '\x01' - (param_7 == 0);
        fn_82F68CC0(auStack_90,param_6 + 4,0x20);
        fn_823F1B08(param_1,(unsigned __int64)*(unsigned int *)*puVar5 + 0x9c0,param_3,param_4,param_5,
                          *param_6,param_6[1],param_6[2],param_6[3]);
        if (iStack_5c != 0) {
          fn_822315A0();
        }
      }
    }
  }
  return;
}

