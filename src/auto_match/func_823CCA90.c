extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_823CCBA8();
extern int fn_823E7368();
extern int fn_823F2978();
extern unsigned int iStack_9c;
extern unsigned int lbl_83265A28;
extern unsigned int lbl_832975B0;


void fn_823CCA90(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned char auStack_a0 [4];
  int iStack_9c;
  unsigned char auStack_90 [112];
  
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  uVar1 = (-lbl_83265A28 & ~lbl_83265A28) >> 0x1f;
  fn_82250D10(auStack_90);
  fn_823E7368(param_1,auStack_90);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) == '\0') {
    fn_823CCBA8(param_1,param_2,0,uVar1,auStack_90,param_3);
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    puVar3 = (unsigned int *)fn_822EFBF0(auStack_a0);
    fn_823F2978((unsigned __int64)*(unsigned int *)*puVar3 + 0xc38,param_2,uVar1,auStack_90,param_3);
    if (iStack_9c != 0) {
      fn_822315A0();
    }
  }
  return;
}

