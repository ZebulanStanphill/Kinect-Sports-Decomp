extern int fn_82CEE7F8();
extern int fn_82CEEA70();
extern int fn_82CEEB70();
extern int fn_82CEEE70();
extern int fn_82CFD5A8();
extern int fn_82CFFA08();


void fn_82CEEF50(unsigned int *param_1,int param_2,__int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  
  iVar3 = (int)param_3;
  if (0 < iVar3) {
    switch(*(unsigned char *)((int)param_1 + 0xd)) {
    case 0x14:
      uVar2 = fn_82CFD5A8(param_1);
      if (((uVar2 & 0xffffffff) != 0) && (0 < iVar3)) {
        puVar4 = (unsigned int *)(param_2 + -4);
        do {
          uVar1 = fn_82CEEB70(puVar4[1],uVar2);
          if ((uVar1 & 0xffffffff) == 0) {
            uVar1 = (unsigned __int64)*param_1;
          }
          puVar4 = puVar4 + 1;
          fn_82CEE7F8(uVar1,*puVar4,uVar2,param_4);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return;
      }
      break;
    case 0x19:
      uVar2 = fn_82CFD5A8(param_1);
      if ((uVar2 & 0xffffffff) != 0) {
        fn_82CEEE70(*param_1,uVar2,param_2,param_3,param_4);
        return;
      }
      break;
    case 0x1d:
      if (0 < iVar3) {
        puVar4 = (unsigned int *)(param_2 + -4);
        do {
          puVar4 = puVar4 + 1;
          fn_82CEEA70(param_1,*puVar4,param_4);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
        return;
      }
      break;
    case 0x21:
      if (0 < iVar3) {
        do {
          fn_82CFFA08(param_4,*param_1,param_2);
          param_3 = param_3 + -1;
          param_2 = param_2 + 4;
        } while (param_3 != 0);
      }
    }
  }
  return;
}

