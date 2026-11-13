extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82674630();
extern int fn_82674698();
extern int fn_826747D8();
extern int fn_826748A0();
extern int fn_826753F0();
extern int fn_8267A470();
extern int fn_8267B890();
extern unsigned int lbl_831E7E64;


unsigned __int64 fn_82675590(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar4;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int aiStack_70 [4];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [64];
  
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_82230110(auStack_60);
    fn_826748A0(aiStack_70,param_1 + 0x10,auStack_60);
    fn_82230300(auStack_60,1,0);
    if (aiStack_70[0] != *(int *)(param_1 + 0x14)) {
      fn_82230110(auStack_40,param_2);
      puVar4 = (unsigned int *)fn_826753F0(param_1 + 0x10,auStack_40);
      uVar1 = *puVar4;
      fn_82230300(auStack_40,1,0);
      return (unsigned __int64)uVar1;
    }
  }
  lVar2 = fn_82674630(param_1,param_2,*(unsigned int *)(param_1 + 0x20));
  if ((lVar2 == 0) &&
     (((*(int *)(param_1 + 0x24) == 0 || (lVar2 = fn_82674630(param_1,param_2), lVar2 == 0)) &&
      (lVar2 = fn_826747D8(param_1,param_2), lVar2 == 0)))) {
    lVar2 = fn_82674698(param_1,param_2);
  }
  uVar3 = fn_8267B890(lbl_831E7E64,0x14,0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_8267A470(uVar3,lVar2);
  }
  return uVar3;
}

