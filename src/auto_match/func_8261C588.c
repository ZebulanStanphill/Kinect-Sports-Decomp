extern int fn_8251E530();
extern int fn_8261C680();
extern int fn_825A1778();
extern int fn_825D1EC8();
extern int fn_8261C680();


void fn_8261C588(int param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;

  iVar1 = *param_2;
  if (iVar1 != 0x17) {
    if (iVar1 == 0x33) {
      uVar2 = *(unsigned int *)(param_1 + 0x4b8);
      *(unsigned int *)(param_1 + 0x4b8) = uVar2 | 4;
      *(unsigned int *)(param_1 + 0x4b8) = uVar2 | 5;
      fn_8261C680(param_1,param_2);
      fn_8261C680(param_1,param_2[2]);
    }
    else {
      if ((iVar1 == 0x44) && (param_2[2] == param_1)) {
        iVar1 = *(int *)(param_1 + 0x4c);
        *(unsigned int *)(iVar1 + 0x3e4) = 0;
        if ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c0) != 0) {
          fn_825A1778((unsigned __int64)*(unsigned int *)(param_1 + 0x8c0) + 0x11c,iVar1);
        }
        uVar2 = *(unsigned int *)(iVar1 + 0xcf4);
        for (uVar3 = *(unsigned int *)(iVar1 + 0xcf0); uVar3 < uVar2; uVar3 = uVar3 + 0x100) {
          if (*(int *)(uVar3 + 0x84) == param_1) {
            fn_825D1EC8(uVar3);
            fn_8251E530(iVar1 + 0xcf0,uVar3);
            uVar3 = uVar3 - 0x100;
            uVar2 = uVar2 - 0x100;
          }
        }
      }
      fn_8261C680(param_1,param_2);
    }
  }
  return;
}
