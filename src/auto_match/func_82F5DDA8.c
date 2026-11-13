extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82F5D418();
extern int fn_82F5DD50();
extern int fn_82F5DEE0();
extern int fn_82F5E4D8();
extern int memcpy();


void fn_82F5DDA8(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char auStack_80 [48];
  unsigned char auStack_50 [56];
  
  if (*(int *)(param_1 + 0x118) < 1) {
    iVar2 = *(int *)(param_1 + 0x114);
    if (iVar2 != 1) {
      if (iVar2 == 2) {
        fn_82F5DD50(param_1);
        uVar1 = fn_82F5D418((double)*(unsigned int *)(param_1 + 0x13c),
                                  (double)*(unsigned int *)(param_1 + 0x140),
                                  (double)*(unsigned int *)(param_1 + 0x144),auStack_50);
        memcpy(auStack_80,uVar1,0x2c);
        fn_82F5DEE0(param_2,auStack_80);
        uVar3 = 3;
      }
      else {
        if (iVar2 != 3) {
          return;
        }
        fn_82F5E4D8(param_2);
        if (*param_2 != 0) {
          return;
        }
        uVar3 = 0;
      }
      *(unsigned int *)(param_1 + 0x114) = uVar3;
      return;
    }
    fn_82F5E4D8(param_2);
    if (*param_2 != 0) {
      return;
    }
    iVar2 = 10;
    *(unsigned int *)(param_1 + 0x114) = 2;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x118) + -1;
  }
  *(int *)(param_1 + 0x118) = iVar2;
  return;
}

