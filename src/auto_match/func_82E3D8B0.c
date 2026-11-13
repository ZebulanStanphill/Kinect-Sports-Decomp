extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern int fn_82E3BDF8();
extern int fn_82E3C690();


__int64 fn_82E3D8B0(__int64 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  int *piVar4;
  int *piStack_60;
  int *piStack_5c;
  unsigned char auStack_58 [8];
  unsigned char auStack_50 [16];
  
  param_1 = param_1 + 0x1ac;
  piStack_60 = (int *)0x0;
  piStack_5c = (int *)0x0;
  lVar3 = 0;
  iVar2 = fn_82E3BDF8(param_1,auStack_58);
  if ((iVar2 != 0) && (iVar2 = fn_82E3C690(param_1,auStack_58,auStack_50,&piStack_5c), iVar2 != 0)
     ) {
    do {
      piVar1 = piStack_5c;
      lVar3 = (**(int (***)())(*piStack_5c + 0xc))(piStack_5c,&piStack_60);
      piVar4 = piStack_60;
      if (lVar3 < 0) break;
      if (piStack_60 == param_2) {
        lVar3 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
        piVar4 = piStack_60;
        break;
      }
      if (piStack_60 != (int *)0x0) {
        (**(int (***)())(*piStack_60 + 8))(piStack_60);
        piStack_60 = (int *)0x0;
      }
      piVar4 = piStack_60;
      iVar2 = fn_82E3C690(param_1,auStack_58,auStack_50,&piStack_5c);
    } while (iVar2 != 0);
    if (piVar4 != (int *)0x0) {
      (**(int (***)())(*piVar4 + 8))(piVar4);
    }
  }
  return lVar3;
}

