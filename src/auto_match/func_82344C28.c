extern int fn_822315A0();
extern int fn_82349DE8();
extern int fn_82365BD8();
extern int fn_8265C9E0();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_82195614;
extern unsigned int lbl_82195618;
extern unsigned int lbl_821B1A70;


unsigned int * fn_82344C28(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  
  fn_82349DE8();
  *param_1 = &lbl_821B1A70;
  fn_82365BD8(param_1 + 5,param_4);
  puVar3 = (unsigned int *)fn_8265C9E0(0xc);
  uVar2 = lbl_82195618;
  uVar1 = lbl_821917B0;
  if (puVar3 == (unsigned int *)0x0) {
    puVar3 = (unsigned int *)0x0;
  }
  else {
    *puVar3 = lbl_82195614;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
  }
  param_1[7] = puVar3;
  if (*(int *)(param_4 + 4) != 0) {
    fn_822315A0();
  }
  return param_1;
}

