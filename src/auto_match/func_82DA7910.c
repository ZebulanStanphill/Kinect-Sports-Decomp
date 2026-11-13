extern int fn_82F68B40();
extern int fn_82F68B48();
extern int fn_82F68B4C();
extern int fn_82F68B5C();
extern int fn_82F68B60();
extern int fn_82F68B64();
extern int fn_82F68B70();
extern int fn_82F68B74();
extern int fn_82F68B78();


unsigned __int64 fn_82DA7910(unsigned __int64 param_1,unsigned char *param_2)

{
  unsigned __int64 uVar1;
  
  switch(*param_2) {
  case 0:
    uVar1 = fn_82F68B48(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 1:
    uVar1 = fn_82F68B78(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  default:
    return 1;
  case 3:
    uVar1 = fn_82F68B64(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 4:
    uVar1 = fn_82F68B60(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 5:
    uVar1 = fn_82F68B74(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 6:
    uVar1 = fn_82F68B70(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 7:
    uVar1 = fn_82F68B78(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 8:
    uVar1 = fn_82F68B78(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 9:
    uVar1 = fn_82F68B78(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 10:
    uVar1 = fn_82F68B78(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 0xb:
    uVar1 = fn_82F68B70(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 0xc:
    uVar1 = fn_82F68B4C(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 0xd:
  case 0xf:
    uVar1 = fn_82F68B40(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  case 0xe:
    uVar1 = fn_82F68B5C(*(unsigned int *)(param_2 + 0x1c),param_1);
    return uVar1;
  }
}

