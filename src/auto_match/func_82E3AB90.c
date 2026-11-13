extern int fn_82E62670();
extern unsigned int uStack_4c;


__int64 fn_82E3AB90(unsigned __int64 param_1,int *param_2,unsigned int *param_3)

{
  __int64 lVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int *piStack_50;
  unsigned int uStack_4c;
  int aiStack_48 [18];
  
  if ((param_2 == (int *)0x0) || (param_3 == (unsigned int *)0x0)) {
    lVar1 = -0x7fffbffd;
  }
  else {
    *param_3 = 1;
    piStack_50 = (int *)0x0;
    uStack_4c = 0;
    lVar1 = (**(int (***)())(*param_2 + 0xc))(param_2,0xffffffff82154b18,&uStack_4c);
    piVar2 = piStack_50;
    if (-1 < lVar1) {
      iVar3 = 0;
      uVar4 = 0;
      do {
        if ((unsigned __int64)uStack_4c <= (uVar4 & 0xffffffff)) break;
        lVar1 = (**(int (***)())(*param_2 + 0x10))(param_2,0xffffffff82154b18,uVar4,&piStack_50);
        piVar2 = piStack_50;
        if (lVar1 < 0) goto LAB_82e3aca4;
        aiStack_48[0] = 0;
        lVar1 = fn_82E62670(piStack_50,aiStack_48);
        piVar2 = piStack_50;
        if (lVar1 < 0) goto LAB_82e3aca4;
        if (aiStack_48[0] == -0x80000000) {
          iVar3 = 1;
        }
        if (piStack_50 != (int *)0x0) {
          (**(int (***)())(*piStack_50 + 8))();
          piStack_50 = (int *)0x0;
        }
        piVar2 = (int *)0x0;
        uVar4 = uVar4 + 1;
      } while (iVar3 == 0);
      *param_3 = (unsigned int)LZCOUNT(iVar3) >> 5;
    }
LAB_82e3aca4:
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 8))();
    }
  }
  return lVar1;
}

