extern unsigned int *auStack_28;
extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82279AF0();
extern int fn_82279C58();
extern int fn_8251FA58();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int iStack_24;
extern unsigned int iStack_2c;
extern unsigned int lbl_821A8118;
extern unsigned int lbl_821A89BC;


unsigned int * fn_822764B8(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  unsigned char auStack_30 [4];
  int iStack_2c;
  unsigned char auStack_28 [4];
  int iStack_24;
  
  *param_1 = &lbl_821A8118;
  if (param_1[0x4d] == 0) {
    puVar3 = (unsigned int *)fn_82279C58(auStack_28,param_1);
    uVar1 = *puVar3;
    uVar2 = fn_8266F6B8();
    fn_826728E8(uVar1,0xffffffff821a807c,uVar2);
    iStack_2c = iStack_24;
  }
  else {
    puVar3 = (unsigned int *)fn_82279C58(auStack_30,param_1);
    uVar1 = *puVar3;
    uVar2 = fn_8266F6B8();
    fn_826728E8(uVar1,0xffffffff821a806c,uVar2);
  }
  if (iStack_2c != 0) {
    fn_822315A0();
  }
  if (param_1[0x4c] != 0) {
    fn_8251FA58();
    param_1[0x4c] = 0;
  }
  *param_1 = &lbl_821A89BC;
  fn_82279AF0(param_1);
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

