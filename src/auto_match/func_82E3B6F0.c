#define true 1
extern unsigned int *auStack_30;


unsigned __int64 fn_82E3B6F0(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  __int64 lVar4;
  unsigned int auStack_30 [12];
  
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else {
    uVar1 = 0;
    uVar3 = 0;
    if (*(int *)(param_1 + 0x2cc) != 0) {
      lVar4 = 0;
      while( true ) {
        auStack_30[0] = 0;
        uVar1 = (**(int (***)())(*param_2 + 0xc))
                          (param_2,lVar4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2c8),auStack_30);
        if ((int)uVar1 < 0) break;
        if (auStack_30[0] != 0) {
          do {
            uVar1 = (**(int (***)())(*param_2 + 0x18))
                              (param_2,lVar4 + (unsigned __int64)*(unsigned int *)(param_1 + 0x2c8),0,0);
            if ((int)uVar1 < 0) {
              return uVar1;
            }
            uVar2 = (unsigned __int64)auStack_30[0];
            auStack_30[0] = (unsigned int)(uVar2 - 1);
          } while (uVar2 - 1 != 0);
        }
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 0x10;
        if (*(unsigned int *)(param_1 + 0x2cc) <= uVar3) {
          return uVar1;
        }
      }
    }
  }
  return uVar1;
}

