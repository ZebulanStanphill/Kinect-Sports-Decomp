extern unsigned int *auStack_28;
extern unsigned int lbl_83219D08;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82A2CE70(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned __int64 auStack_28 [5];
  
  uVar1 = *(unsigned int *)(param_1 + 0x2c);
  lbl_83219D08 = lbl_83219D08 + 1;
  auStack_28[0] = param_4;
  uVar2 = NtReadFile(*(unsigned int *)(param_1 + 0x28),uVar1,0,0,&uStack_30,param_2,param_3,auStack_28
                    );
  if ((int)uVar2 == 0x103) {
    NtWaitForSingleObjectEx(uVar1,0,0,0);
    uVar2 = (unsigned __int64)uStack_30;
  }
  if ((-1 < (int)uVar2) && ((param_3 & 0xffffffff) != (unsigned __int64)uStack_2c)) {
    uVar2 = 0xffffffffc0000185;
  }
  return uVar2;
}

