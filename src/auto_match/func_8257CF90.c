extern unsigned int *auStack_50;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_82520C40();
extern int fn_8258E3A8();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_82A1DD38();


unsigned __int64 fn_8257CF90(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_60 [4];
  unsigned char auStack_50 [32];
  
  uVar1 = fn_8251F720(param_1,0);
  if (uVar1 != 0) {
    uVar2 = fn_8251FBA8(uVar1);
    iVar3 = fn_8265CA60();
    fn_82A1DD38(iVar3,uVar1,uVar2);
    if (iVar3 != 0) {
      *(unsigned int *)(iVar3 + 0x44) = param_2;
      iVar4 = fn_82520C40();
      uVar2 = fn_82230110(auStack_50,iVar3);
      fn_8258E3A8(aiStack_60,iVar4 + 8,uVar2);
      fn_82230300(auStack_50,1,0);
      if ((aiStack_60[0] == *(int *)(iVar4 + 0xc)) ||
         (*(int *)(aiStack_60[0] + 0x2c) != *(int *)(iVar3 + 0x40))) {
        uVar2 = 0;
      }
      else {
        uVar2 = (**(int (***)())(aiStack_60[0] + 0x28))(iVar3);
      }
      fn_8265CAA0(iVar3);
      fn_8251FA58(uVar1);
      return uVar2;
    }
  }
  fn_8265CAA0(0);
  if ((uVar1 & 0xffffffff) != 0) {
    fn_8251FA58(uVar1);
  }
  return 0;
}

