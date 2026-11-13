extern int fn_827BA110();
extern int fn_827BA1C0();
extern int fn_827BA4E8();
extern int fn_827BA938();


void fn_827BAD68(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  int iVar6;
  
  iVar2 = (int)param_3;
  if (iVar2 == 0) {
    uVar4 = 1;
  }
  else {
    uVar5 = *param_1;
    trapWord(6,param_3,0);
    uVar4 = (int)uVar5 / iVar2;
    trapWord(5,param_3 & ~((((unsigned __int64)uVar5 & 0x7fffffff) << 1 | (unsigned __int64)(uVar5 >> 0x1f)) - 1),
             0xffff);
  }
  iVar6 = (int)param_2;
  param_1[0x19] = uVar4;
  if (iVar6 == 0) {
    uVar3 = 1;
  }
  else {
    uVar4 = *param_1;
    trapWord(6,param_2,0);
    uVar3 = (unsigned __int64)((int)uVar4 / iVar6);
    trapWord(5,param_2 & ~((((unsigned __int64)uVar4 & 0x7fffffff) << 1 | (unsigned __int64)(uVar4 >> 0x1f)) - 1),
             0xffff);
  }
  uVar4 = *param_1;
  trapWord(6,uVar3,0);
  uVar5 = (unsigned int)uVar3;
  param_1[0x1a] = uVar5;
  param_1[0x1b] = ((int)uVar4 / (int)uVar5) * uVar5;
  trapWord(5,uVar3 & ~((((unsigned __int64)uVar4 & 0x7fffffff) << 1 | (unsigned __int64)(uVar4 >> 0x1f)) - 1),
           0xffff);
  if ((iVar6 != 0) || (iVar2 != 0)) {
    fn_827BA110(param_1);
    uVar1 = fn_827BA1C0();
    if ((iVar6 != 0) && (*(short *)((int)param_1 + 0x5a) < *(short *)((int)param_1 + 0x5e))) {
      fn_827BA4E8(uVar1,2);
      fn_827BA938(param_1,2,param_1[0x1a],
                    (__int64)
                    (((int)*(short *)((int)param_1 + 0x5e) - (int)*(short *)((int)param_1 + 0x5a)) /
                    3) + (__int64)*(short *)((int)param_1 + 0x5a),param_4,param_5);
    }
    if ((iVar2 != 0) && (*(short *)((int)param_1 + 0x5a) < *(short *)((int)param_1 + 0x5e))) {
      fn_827BA4E8(param_1,1);
      fn_827BA938(param_1,1,param_1[0x19],
                    (__int64)
                    (((int)*(short *)(param_1 + 0x17) - (int)*(short *)(param_1 + 0x16)) / 3) +
                    (__int64)*(short *)(param_1 + 0x16),0,0);
    }
  }
  return;
}

