extern int fn_82C06CB0();
extern int fn_82C07C18();
extern int fn_82C10F40();


unsigned __int64 fn_82C09348(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  unsigned char abStack_40 [4];
  int aiStack_3c [15];
  
  abStack_40[0] = 0xff;
  aiStack_3c[0] = 0;
  if ((((param_1 == 0) || (param_2 == (unsigned int *)0x0)) || ((int)param_4 < -2)) ||
     (((4 < (int)param_4 || (param_3 == (unsigned int *)0x0)) || (*(int *)(param_1 + 0x210) == 0)))) {
    uVar2 = 4;
  }
  else {
    *param_2 = 0xff;
    uVar1 = fn_82C06CB0(param_1,param_3,param_4,abStack_40);
    if (((-1 < (int)uVar1) || ((uVar1 & 0xffffffff) == 0x80600005)) ||
       ((uVar1 & 0xffffffff) == 0x80600008)) {
      *param_2 = (unsigned int)abStack_40[0];
      if (((abStack_40[0] != 0xff) && (*param_3 != 0)) &&
         (fn_82C10F40(*(unsigned int *)(*(int *)(param_1 + 4) + 0x7c),abStack_40[0],aiStack_3c),
         *(int *)(aiStack_3c[0] + 4) == 1)) {
        uVar4 = (unsigned int)*(unsigned short *)(*(int *)(aiStack_3c[0] + 8) + 0xe) *
                (unsigned int)*(unsigned short *)(*(int *)(aiStack_3c[0] + 8) + 2);
        uVar3 = (__int64)((int)uVar4 >> 3) + (unsigned __int64)((int)uVar4 < 0 && (uVar4 & 7) != 0);
        trapWord(6,uVar3,0);
        *param_3 = (unsigned int)((unsigned __int64)*param_3 / (uVar3 & 0xffffffff));
      }
      if ((int)uVar1 == 0x500004) {
        return 0x21;
      }
    }
    if (((uVar1 & 0xffffffff) == 0x80500000) || ((uVar1 & 0xffffffff) == 0x8050000b)) {
      *param_2 = 0;
      uVar2 = 0x23;
      *param_3 = 0;
    }
    else {
      uVar2 = fn_82C07C18(uVar1);
    }
  }
  return uVar2;
}

