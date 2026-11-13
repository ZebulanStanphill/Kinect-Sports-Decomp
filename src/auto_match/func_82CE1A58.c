extern int fn_82A2B798();
extern unsigned int iStack_48;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_42;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


unsigned __int64 fn_82CE1A58(unsigned int param_1,unsigned int param_2,int param_3,unsigned short param_4,
                       unsigned short param_5,unsigned int param_6,unsigned int param_7,unsigned int *param_8)

{
  int iVar2;
  __int64 lVar1;
  unsigned int uVar3;
  unsigned int *in_stack_00000054;
  int in_stack_0000005c;
  struct { unsigned int first; unsigned int second; } stack_pair_50;

  int iStack_48;
  unsigned short uStack_44;
  unsigned short uStack_42;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int *puStack_34;
  
  uVar3 = param_3 * 0x52e + 8;
  if ((uVar3 <= *param_8) && (in_stack_00000054 != (unsigned int *)0x0)) {
    puStack_34 = in_stack_00000054;
    *in_stack_00000054 = 0;
    in_stack_00000054[1] = 0;
    uStack_38 = *param_8;
    stack_pair_50.first = param_1;
    stack_pair_50.second = param_2;
    iStack_48 = param_3;
    uStack_44 = param_4;
    uStack_42 = param_5;
    uStack_40 = param_6;
    uStack_3c = param_7;
    iVar2 = XMsgStartIORequest(0xfb,0xb0016,in_stack_0000005c,&stack_pair_50.first,0x20);
    if (-1 < iVar2) {
      if (in_stack_0000005c == 0) {
        lVar1 = fn_82A2B798();
        return -(unsigned __int64)(lVar1 != 0) & 0x65b;
      }
      return 0x3e5;
    }
    if (iVar2 != -0x7feaadf9) {
      return 0x65b;
    }
  }
  *param_8 = uVar3;
  return 0x7a;
}

