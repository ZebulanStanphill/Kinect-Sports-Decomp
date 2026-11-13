extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F6AC80();
extern int fn_82F6CFD0();
extern int fn_82F709B8();
extern int fn_82F7C468();
extern int fn_82F816D0();
extern int fn_82F817C0();
extern unsigned int lbl_831BBF60;
extern unsigned int lbl_8329F620;
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;
extern unsigned int uStack_40;


unsigned __int64 fprintf(int param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                       unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  unsigned char *puVar4;
  unsigned char *puVar5;
  int iVar6;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned int uStack_40;
  
  iVar6 = 0;
  uStack_40 = 0;
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  if ((param_1 == 0) || (param_2 == param_2 + -1 + (unsigned __int64)(param_2 == 0))) {
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0xffffffffffffffff;
  }
  fn_82F6AC80(param_1);
  if ((*(unsigned int *)(param_1 + 0xc) & 0x40) == 0) {
    uVar3 = fn_82F7C468(param_1);
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
      if ((puVar5[0x28] & 1) == 0) goto LAB_82f6cf80;
    }
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    iVar6 = -1;
    uStack_40 = 0xffffffff;
  }
LAB_82f6cf80:
  if (iVar6 == 0) {
    uVar1 = fn_82F816D0(param_1);
    uStack_40 = fn_82F709B8(param_1,param_2,0,&stack0x00000020);
    fn_82F817C0(uVar1,param_1);
  }
  fn_82F6CFD0();
  return (unsigned __int64)uStack_40;
}

