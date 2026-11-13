extern unsigned int *auStack_28;
extern unsigned int uStack_30;


unsigned __int64 fn_82F3B5B0(int *param_1,unsigned int param_2,unsigned char *param_3,unsigned char *param_4)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uStack_30;
  unsigned __int64 auStack_28 [5];
  
  if (param_1[3] == 0) {
    uVar2 = 0xffffffffc00d36b6;
  }
  else if (param_2 < (unsigned int)param_1[0x1b]) {
    if ((param_1[0x1c] == 0) || ((param_1[0x13] & 1U) == 0)) {
      uVar2 = 0xffffffffc00d3a9e;
    }
    else {
      uStack_30 = 0;
      auStack_28[0] = 0;
      uVar2 = (**(int (***)())(*param_1 + 0x44))(param_1,param_2,&uStack_30,auStack_28);
      if (-1 < (int)uVar2) {
        if ((uStack_30 < 0x100000000) && (auStack_28[0] < 0x100000000)) {
          if (param_3 != (unsigned char *)0x0) {
            iVar1 = (int)uStack_30 + param_1[0x1c];
            *param_3 = *(unsigned char *)((int)uStack_30 + param_1[0x1c]);
            param_3[1] = *(unsigned char *)(iVar1 + 1);
            param_3[2] = *(unsigned char *)(iVar1 + 2);
            param_3[3] = *(unsigned char *)(iVar1 + 3);
          }
          if (param_4 != (unsigned char *)0x0) {
            iVar1 = param_1[0x1c];
            *param_4 = *(unsigned char *)((int)auStack_28[0] + iVar1);
            param_4[1] = *(unsigned char *)((int)auStack_28[0] + iVar1 + 1);
          }
          uVar2 = 0;
        }
        else {
          uVar2 = 0xffffffffc00d36bb;
        }
      }
    }
  }
  else {
    uVar2 = 0xffffffffc00d3a9d;
  }
  return uVar2;
}

