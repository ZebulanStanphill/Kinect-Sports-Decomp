extern int fn_82A2B798();
extern unsigned int iStack_58;
extern unsigned int uStack_40;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_52;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_82CE1B40(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,
                       unsigned short param_5,unsigned short param_6,unsigned int param_7,unsigned int param_8)

{
  int iVar2;
  __int64 lVar1;
  unsigned int uVar3;
  unsigned int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  int in_stack_00000064;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  int iStack_58;
  unsigned short uStack_54;
  unsigned short uStack_52;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int *puStack_44;
  unsigned int uStack_40;
  
  uVar3 = param_3 * 0x52e + 8;
  if ((uVar3 <= *in_stack_00000054) && (in_stack_0000005c != (unsigned int *)0x0)) {
    puStack_44 = in_stack_0000005c;
    *in_stack_0000005c = 0;
    in_stack_0000005c[1] = 0;
    uStack_48 = *in_stack_00000054;
    stack_pair_60.first = param_1;
    stack_pair_60.second = param_2;
    iStack_58 = param_3;
    uStack_54 = param_5;
    uStack_52 = param_6;
    uStack_50 = param_7;
    uStack_4c = param_8;
    uStack_40 = param_4;
    iVar2 = XMsgStartIORequest(0xfb,0xb001c,in_stack_00000064,&stack_pair_60.first,0x24);
    if (-1 < iVar2) {
      if (in_stack_00000064 == 0) {
        lVar1 = fn_82A2B798();
        return -(unsigned __int64)(lVar1 != 0) & 0x65b;
      }
      return 0x3e5;
    }
    if (iVar2 != -0x7feaadf9) {
      return 0x65b;
    }
  }
  *in_stack_00000054 = uVar3;
  return 0x7a;
}

