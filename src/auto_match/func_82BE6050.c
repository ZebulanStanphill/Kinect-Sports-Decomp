extern int fn_82BE5240();
extern unsigned int (*lbl_831751D0)(unsigned int);


unsigned __int64 fn_82BE6050(int *param_1,unsigned int param_2)

{
  unsigned int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = (int)param_2;
  if (iVar2 <= 0) {
    uVar3 = "Can't allocate buffer of 0 or negative size.";
  }
  else if (((unsigned int)param_1[7] == 0) || (param_1[10] <= 0)) {
    if ((param_1[6] == 1) && (iVar1 = (*(int (**)())(*param_1 + 0xc))(param_1), iVar2 > (int)iVar1)) {
      uVar3 = "Requested buffer size will exceed request maximum.";
    }
    else {
      iVar1 = lbl_831751D0(param_2);
      param_1[7] = iVar1;
      param_1[8] = 0;
      param_1[9] = 0;
      if (iVar1 != 0) {
        param_1[10] = iVar2;
        return 1;
      }
      param_1[7] = 0;
      param_1[10] = 0;
      uVar3 = "Could not allocate raw request buffer";
    }
  }
  else {
    uVar3 = "Buffer already exists.  Can't allocate new, use ReAllocateDataBuffer.";
  }
  fn_82BE5240(param_1,0x65,uVar3);
  return 0;
}

