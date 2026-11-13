extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_822315A0();
extern int fn_82250A18();
extern int fn_82250D10();
extern int fn_822EFBF0();
extern int fn_82368E38();
extern int fn_823CC9F0();
extern int fn_823E7368();
extern int fn_823F0A30();
extern unsigned int iStack_9c;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;


void fn_823CC900(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned char auStack_a0 [4];
  int iStack_9c;
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [104];
  
  fn_82250D10(auStack_80);
  fn_82368E38((double)ltcg_pool_0_0f,auStack_90,param_1);
  fn_823E7368(param_1,auStack_80);
  iVar1 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar1 = fn_82250A18();
  }
  if (*(char *)(iVar1 + 4) == '\0') {
    fn_823CC9F0(param_1,param_2,auStack_80);
  }
  else if (*(int *)(param_1 + 0x84) != 0) {
    puVar2 = (unsigned int *)fn_822EFBF0(auStack_a0);
    fn_823F0A30((unsigned __int64)*(unsigned int *)*puVar2 + 0x618,param_2,auStack_80);
    if (iStack_9c != 0) {
      fn_822315A0();
    }
  }
  return;
}

