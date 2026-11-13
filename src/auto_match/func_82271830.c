extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_82279C58();
extern int fn_8251FA58();
extern int fn_8266F740();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;
extern unsigned int lbl_8326B394;


void fn_82271830(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  unsigned char auStack_40 [4];
  int iStack_3c;
  unsigned char auStack_38 [4];
  int iStack_34;
  
  if (param_2[1] != 0) {
    piVar2 = (int *)fn_82279C58(auStack_40);
    iVar1 = *piVar2;
    if (iStack_3c != 0) {
      fn_822315A0(iStack_3c);
    }
    if (iVar1 != 0) {
      puVar3 = (unsigned int *)fn_82279C58(auStack_38,param_2[1]);
      fn_8266F740(*puVar3);
      if (iStack_34 != 0) {
        fn_822315A0();
      }
    }
    iVar1 = param_2[2];
    param_2[2] = 0;
    param_2[1] = 0;
    if (iVar1 != 0) {
      fn_822315A0();
    }
  }
  if (param_2[0x42c] != 0) {
    param_2[0x42c] = 0;
  }
  if (param_1[0x37] == *param_2) {
    if (*param_1 != 0) {
      if (param_1[0x36] != 0) {
        param_1[0x36] = 0;
        *(unsigned int *)(*param_1 + 0x1a4) = lbl_8326B394;
      }
      param_1[0x37] = 0;
    }
  }
  if (param_2[0x42d] != 0) {
    fn_8251FA58();
    param_2[0x42d] = 0;
  }
  return;
}

