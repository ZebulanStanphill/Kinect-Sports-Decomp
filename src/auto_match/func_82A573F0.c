extern unsigned int *auStack_40;
extern int fn_82A536E0();
extern int fn_82A538A8();
extern int fn_82A53C10();
extern int fn_82A56A48();
extern int fn_82C18678();
extern int fn_82C18CC8();


unsigned __int64 fn_82A573F0(int *param_1,unsigned short *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned short uVar2;
  unsigned short auStack_40;
  
  uVar1 = 0;
  if ((param_1 == (int *)0x0) || (param_2 == (unsigned short *)0x0)) {
    uVar1 = 0xffffffff80070057;
    uVar2 = 0;
  }
  else {
    uVar2 = *param_2;
    if (((int)param_4 < (int)(param_1[0x5c] * param_1[0x5a] * (unsigned int)uVar2)) ||
       ((int)param_4 < (int)(unsigned int)uVar2)) {
      return 0xffffffff80004005;
    }
    auStack_40 = uVar2;
    if (param_1[0x58] == 1) {
      if ((param_1[0x69] == 0) || (param_1[0x6a] == 1)) {
        if (*(int *)(*param_1 + 100) == 0) {
          uVar1 = fn_82C18CC8();
        }
        else {
          uVar1 = fn_82C18678(param_1,param_3,uVar2,param_3);
        }
        if ((int)uVar1 < 0) goto LAB_82a57570;
      }
      if ((param_1[0x69] == 1) &&
         (uVar1 = fn_82A53C10(param_1,param_3,&auStack_40,param_3), uVar2 = auStack_40,
         (int)uVar1 < 0)) goto LAB_82a57570;
    }
    if ((((param_1[0x4f] == 0) ||
         ((uVar2 == 0 ||
          (uVar1 = fn_82A536E0(param_1,param_3,&auStack_40,param_4), uVar2 = auStack_40,
          -1 < (int)uVar1)))) &&
        ((param_1[0x51] == 0 ||
         ((uVar2 == 0 ||
          (uVar1 = fn_82A538A8(param_1,param_3,&auStack_40,param_4), uVar2 = auStack_40,
          -1 < (int)uVar1)))))) && (param_1[0x59] == 1)) {
      uVar1 = fn_82A56A48(param_1,param_3,uVar2);
    }
  }
LAB_82a57570:
  if (param_2 != (unsigned short *)0x0) {
    *param_2 = uVar2;
  }
  return uVar1;
}

