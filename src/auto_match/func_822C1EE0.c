extern int fn_822C5B18();
extern int fn_82359C18();
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821ACE14;
extern unsigned int lbl_821B0928;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;


unsigned int *
fn_822C1EE0(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned char **ppuStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned char ***pppuStack_80;
  
  param_1[1] = 1;
  *param_1 = &lbl_821A8D8C;
  param_1[2] = 1;
  if (param_1 + 4 != (unsigned int *)0x0) {
    uVar1 = *param_5;
    uStack_8c = *in_stack_00000054;
    uStack_88 = in_stack_00000054[1];
    pppuStack_80 = &ppuStack_90;
    uStack_84 = in_stack_00000054[2];
    uVar2 = *in_stack_0000005c;
    param_1[7] = param_2;
    param_1[5] = 4;
    param_1[6] = param_3;
    param_1[4] = &lbl_821B0928;
    param_1[8] = *param_4;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = uVar1;
    param_1[0xc] = param_6;
    param_1[0xd] = param_7;
    param_1[0xe] = 2;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    ppuStack_90 = &lbl_821ACE14;
    param_1[0x12] = 0;
    param_1[0x13] = param_8;
    fn_822C5B18(param_1 + 0x14,&ppuStack_90);
    param_1[0x1a] = uVar2;
    fn_82359C18(&ppuStack_90);
  }
  return param_1;
}

