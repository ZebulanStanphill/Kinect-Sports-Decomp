extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F6B67C();
extern int fn_82F6BB98();
extern int fn_82F7C468();
extern int fn_82F82818();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;


void fn_82F6B580(int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  int iVar3;
  unsigned char *puVar4;
  unsigned int uVar5;
  
  if (param_1 == 0) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
  }
  else {
    uVar1 = fn_82F7C468(param_1);
    fn_82F6AC80(param_1);
    fn_82F6BB98(param_1);
    uVar5 = (unsigned int)uVar1;
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) & 0xffffffcf;
    if ((uVar5 == 0xffffffff) || (uVar5 == 0xfffffffe)) {
      puVar4 = &lbl_831BBF60;
    }
    else {
      puVar4 = (unsigned char *)((&lbl_8329F620)[(int)uVar5 >> 5] + (uVar5 & 0x1f) * 0x48);
    }
    puVar4[4] = puVar4[4] & 0xfd;
    if ((*(unsigned int *)(param_1 + 0xc) & 0x80) != 0) {
      *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) & 0xfffffffc;
    }
    iVar3 = fn_82F82818(uVar1,0,0);
    if (iVar3 == -1) {
      *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) | 0x20;
    }
    fn_82F6B67C();
  }
  return;
}

