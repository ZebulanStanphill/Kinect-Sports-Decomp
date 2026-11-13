extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82CE3440();
extern int fn_82CE35B0();
extern int fn_82CE3628();
extern int fn_82CE36A8();
extern int fn_82CE3730();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack_3e;


unsigned __int64 fn_82CE3B38(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uStack00000020;
  unsigned char auStack_40 [2];
  unsigned short uStack_3e;
  int aiStack_3c [3];
  unsigned char auStack_30 [24];
  
  puVar3 = (unsigned int *)(param_2 * 0x10 + param_1);
  uVar2 = 0;
  aiStack_3c[0] = 1 << (*puVar3 & 3);
  uStack00000020 = param_3;
  fn_82CE3440(auStack_30,puVar3[1],aiStack_3c[0],aiStack_3c[0],param_4);
  uVar1 = *puVar3 & 3;
  if ((*puVar3 & 3) == 0) {
    auStack_40[0] = (unsigned char)uStack00000020;
    uVar2 = fn_82CE35B0(auStack_30,auStack_40,1);
  }
  else if (uVar1 == 1) {
    uStack_3e = (unsigned short)uStack00000020;
    uVar2 = fn_82CE3628(auStack_30,&uStack_3e,1);
  }
  else if (uVar1 < 3) {
    aiStack_3c[0] = (int)uStack00000020;
    uVar2 = fn_82CE36A8(auStack_30,aiStack_3c,1);
  }
  else if (uVar1 == 3) {
    uVar2 = fn_82CE3730(auStack_30,&stack0x00000020,1);
  }
  return uVar2;
}

