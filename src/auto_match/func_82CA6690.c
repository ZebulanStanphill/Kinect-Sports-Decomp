extern unsigned int uStack_10;
extern unsigned int uStack_f;


__int64 fn_82CA6690(int param_1,int param_2,int param_3,int param_4)

{
  unsigned short uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned char uStack_10;
  unsigned char uStack_f;
  
  if ((((*(int *)(param_1 + 0x1c0) != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (*(int *)(param_1 + 0x1c8) == 0)) {
    uStack_10 = (char)((unsigned short)*(unsigned short *)(param_4 + -2) >> 8);
    lVar2 = (__int64)uStack_10;
    uVar1 = *(unsigned short *)(param_4 + *(int *)(param_1 + 0x158) * -2);
    uStack_f = (char)*(unsigned short *)(param_4 + -2);
    lVar4 = (__int64)uStack_f;
    uStack_10 = (char)((unsigned short)uVar1 >> 8);
    uStack_f = (char)uVar1;
    uVar5 = (unsigned __int64)((int)(lVar4 - uStack_f) >> 0x1f);
    uVar3 = (unsigned __int64)((int)(lVar2 - uStack_10) >> 0x1f);
    uVar5 = (lVar4 - uStack_f ^ uVar5) - uVar5;
    uVar3 = (lVar2 - uStack_10 ^ uVar3) - uVar3;
    if ((int)uVar5 < (int)uVar3) {
      uVar5 = uVar3;
    }
    return (__int64)((int)uVar5 >> 0x1f) + (unsigned __int64)(7 < uVar5);
  }
  return 0;
}

