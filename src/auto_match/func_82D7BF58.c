extern unsigned int lbl_8200133C;


void fn_82D7BF58(unsigned char *param_1,int *param_2)

{
  int iVar1;
  int (**UNRECOVERED_JUMPTABLE_00)();
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  
  uVar3 = *param_1 - 2;
  if (0xc < uVar3) {
    return;
  }
  iVar1 = *(int *)(uVar3 * 4 + -0x7d28407c);
  switch(*param_1) {
  case 2:
  case 6:
  case 10:
  case 0xe:
    break;
  default:
    return;
  case 4:
  case 0xc:
    *(unsigned int *)(param_1 + 0x18) = lbl_8200133C;
    puVar2 = (unsigned int *)((unsigned int)(param_1 + iVar1 + 0x20) & 0xfffffff0);
    *puVar2 = in_register_000100d0;
    puVar2[1] = in_register_000100d4;
    puVar2[2] = in_register_000100d8;
    puVar2[3] = in_vr13;
    UNRECOVERED_JUMPTABLE_00 = *(int (***)())((param_1[1] + 0x49) * 0x50 + *param_2);
    if (UNRECOVERED_JUMPTABLE_00 == (int (**)())0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x82d7c030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,param_1 + 0x30);
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = *(int (***)())((param_1[1] + 0x49) * 0x50 + *param_2);
  if (UNRECOVERED_JUMPTABLE_00 == (int (**)())0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82d7bfe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,param_1 + 0x20);
  return;
}

