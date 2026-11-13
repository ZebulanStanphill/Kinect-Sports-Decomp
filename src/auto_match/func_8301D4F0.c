#define true 1
extern int fn_8301BA90();
extern int fn_8301BEA0();
extern int fn_8301CFE8();
extern int fn_8303A630();
extern int fn_8303A720();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


unsigned __int64 fn_8301D4F0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iStack0000001c;
  int aiStack_40;
  
  iStack0000001c = param_2;
  uVar3 = (**(int (***)())(*(int *)(*(int *)(param_1 + 0xc) + 0xc0) + 0xc))
                    (*(int *)(param_1 + 0xc) + 0xc0,&stack0x0000001c);
  param_2 = param_2 - iStack0000001c;
  if ((int)uVar3 == 0x11) {
    if (*(int *)(param_1 + 0x10) != 0) {
      while( true ) {
        fn_8301CFE8(*(unsigned int *)(param_1 + 0xc),0);
        iVar1 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0xc) = iVar1;
        *(unsigned int *)(param_1 + 0x10) = 0;
        piVar2 = *(int **)(iVar1 + 0xfc);
        if ((*(unsigned char *)(piVar2 + 3) & 0x80) == 0) break;
LAB_8301d5d4:
        fn_8303A720(piVar2);
        (**(int (***)())(*(int *)piVar2[2] + 0x24))((int *)piVar2[2],param_1 + 0x160);
        if (param_2 == 0) {
          return 0x2d;
        }
        aiStack_40 = param_2;
        uVar3 = (**(int (***)())(*(int *)(iVar1 + 0xc0) + 0xc))(iVar1 + 0xc0,&aiStack_40);
        param_2 = param_2 - aiStack_40;
        if ((int)uVar3 == 0x2d) {
          return uVar3;
        }
        if ((int)uVar3 != 0x11) goto LAB_8301d5b8;
        if (param_2 == 0) {
          return uVar3;
        }
        if (*(int *)(param_1 + 0x10) == 0) {
          return uVar3;
        }
      }
      iVar4 = (**(int (***)())(*piVar2 + 0x20))(piVar2);
      if (iVar4 == 1) {
        *(unsigned char *)(piVar2 + 3) = *(unsigned char *)(piVar2 + 3) | 0x80;
        iVar4 = fn_8301BEA0(param_1,iVar1);
        if (iVar4 == 1) goto LAB_8301d5d4;
      }
      else {
        if (iVar4 == 0x3f) {
          return uVar3;
        }
        if (iVar4 != 2) goto LAB_8301d5d4;
      }
LAB_8301d5b8:
      uVar3 = 2;
    }
  }
  else if ((int)uVar3 == 2) {
    uVar3 = 0x2e;
    fn_8301BA90(param_1);
    fn_8303A630(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
    *(unsigned int *)(param_1 + 8) = 2;
  }
  return uVar3;
}

