extern unsigned int lbl_8200133C;


void fn_82D7C038(double param_1,double param_2,unsigned char *param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,int *param_6)

{
  int (**UNRECOVERED_JUMPTABLE_00)();
  
  switch(*param_3) {
  case 2:
  case 6:
  case 10:
  case 0xe:
    UNRECOVERED_JUMPTABLE_00 = *(int (***)())((unsigned int)(unsigned char)param_3[1] * 0x50 + *param_6 + 0x16d4);
    if (UNRECOVERED_JUMPTABLE_00 != (int (**)())0x0) {
                    /* WARNING: Could not recover jumptable at 0x82d7c0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(param_3,param_3 + 0x20);
      return;
    }
    return;
  case 3:
  case 5:
  case 7:
  case 8:
  case 9:
  case 0xb:
  case 0xd:
    return;
  case 4:
  case 0xc:
    break;
  default:
    return;
  }
  if ((double)*(float *)(param_3 + 0x18) == param_1) {
    *(float *)(param_3 + 0x18) = (float)param_2;
  }
  else {
    *(unsigned int *)(param_3 + 0x18) = lbl_8200133C;
  }
  UNRECOVERED_JUMPTABLE_00 = *(int (***)())((unsigned int)(unsigned char)param_3[1] * 0x50 + *param_6 + 0x16d4);
  if (UNRECOVERED_JUMPTABLE_00 != (int (**)())0x0) {
                    /* WARNING: Could not recover jumptable at 0x82d7c114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_3,param_3 + 0x30);
    return;
  }
  return;
}

