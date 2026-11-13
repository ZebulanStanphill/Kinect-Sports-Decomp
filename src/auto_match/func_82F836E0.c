extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F7C468();
extern int fn_82F816D0();
extern int fn_82F817C0();
extern int fn_82F8385C();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;
extern unsigned int uStack_50;


unsigned __int64 fn_82F836E0(int (**param_1)(),int param_2,__int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5)

{
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  unsigned char *puVar4;
  unsigned char *puVar5;
  int iVar6;
  unsigned int uStack_50;
  
  iVar6 = 0;
  uStack_50 = 0;
  if ((param_2 == 0) || (param_3 == param_3 + -1 + (unsigned __int64)(param_3 == 0))) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0xffffffffffffffff;
  }
  fn_82F6AC80(param_2);
  if ((*(unsigned int *)(param_2 + 0xc) & 0x40) == 0) {
    uVar3 = fn_82F7C468(param_2);
    if ((uVar3 == 0xffffffff) || (uVar3 == 0xfffffffe)) {
      puVar4 = &lbl_831BBF60;
    }
    else {
      puVar4 = (unsigned char *)((&lbl_8329F620)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x48);
    }
    puVar5 = &lbl_831BBF60;
    if ((puVar4[0x28] & 0xfe) == 0) {
      if ((uVar3 != 0xffffffff) && (uVar3 != 0xfffffffe)) {
        puVar5 = (unsigned char *)((&lbl_8329F620)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x48);
      }
      if ((puVar5[0x28] & 1) == 0) goto LAB_82f83808;
    }
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    iVar6 = -1;
    uStack_50 = 0xffffffff;
  }
LAB_82f83808:
  if (iVar6 == 0) {
    uVar1 = fn_82F816D0(param_2);
    uStack_50 = (*param_1)(param_2,param_3,param_4,param_5);
    fn_82F817C0(uVar1,param_2);
  }
  fn_82F8385C();
  return (unsigned __int64)uStack_50;
}

