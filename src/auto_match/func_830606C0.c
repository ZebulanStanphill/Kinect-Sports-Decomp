#define true 1
extern unsigned int *auStack_40;
extern int fn_8305D670();
extern int fn_8305D680();
extern int fn_8305D688();
extern int fn_83065B90();
extern int fn_83065BA8();


unsigned __int64 fn_830606C0(int param_1)

{
  int iVar2;
  int iVar3;
  __int64 lVar1;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_40 [16];
  
  iVar2 = fn_83065B90(*(int *)(param_1 + 0x18) << 2);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar4 = (unsigned int *)(iVar2 + -4);
    do {
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
LAB_83060804:
  do {
    param_1 = *(int *)(param_1 + 4);
    if (param_1 == 0) {
      uVar5 = 1;
LAB_8306081c:
      fn_83065BA8(iVar2);
      return uVar5;
    }
    iVar3 = fn_8305D680(param_1);
    if (2 < iVar3) {
      lVar1 = fn_8305D680(param_1);
      fn_8305D688(param_1,lVar1 + -1,auStack_40);
      lVar1 = 0;
      iVar3 = fn_8305D680(param_1);
      if (0 < iVar3) {
        do {
          fn_8305D688(param_1,lVar1,auStack_40);
          iVar3 = fn_8305D670(param_1,lVar1);
          *(int *)(iVar3 * 4 + iVar2) = *(int *)(iVar3 * 4 + iVar2) + 1;
          iVar3 = fn_8305D670(param_1,lVar1);
          if (1 < *(int *)(iVar3 * 4 + iVar2)) {
            uVar5 = 0;
            goto LAB_8306081c;
          }
          lVar1 = lVar1 + 1;
          iVar3 = fn_8305D680(param_1);
        } while ((int)lVar1 < iVar3);
      }
      lVar1 = 0;
      iVar3 = fn_8305D680(param_1);
      if (0 < iVar3) {
        do {
          iVar3 = fn_8305D670(param_1,lVar1);
          lVar1 = lVar1 + 1;
          *(unsigned int *)(iVar3 * 4 + iVar2) = 0;
          iVar3 = fn_8305D680(param_1);
        } while ((int)lVar1 < iVar3);
      }
      goto LAB_83060804;
    }
    iVar3 = fn_8305D680(param_1);
    if (iVar3 < 3) {
      fn_83065BA8(iVar2);
      return 0;
    }
  } while( true );
}

