extern unsigned int *auStack_38;
extern int fn_82EE62C0();
extern int fn_82EE6838();
extern unsigned int uStack_40;


__int64 fn_82E7CDE8(int param_1,short param_2,int *param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned short uVar3;
  unsigned short uStack_40;
  short sStack_3e;
  int *piStack_3c;
  unsigned int auStack_38;
  
  uVar3 = 0;
  piStack_3c = (int *)0x0;
  uStack_40 = 0;
  lVar2 = 0;
  sStack_3e = 0;
  auStack_38 = 0;
  if (param_3 == (int *)0x0) {
    lVar2 = -0x7fffbffd;
  }
  else {
    iVar1 = (**(int (***)())(**(int **)(param_1 + 4) + 0x10))
                      (*(int **)(param_1 + 4),0xffffffff82154b08,0,&piStack_3c);
    if (((-1 < iVar1) && (lVar2 = fn_82EE62C0(piStack_3c,&uStack_40), -1 < lVar2)) &&
       (uStack_40 != 0)) {
      do {
        lVar2 = fn_82EE6838(piStack_3c,uVar3,&sStack_3e,&auStack_38);
        if (lVar2 < 0) break;
        if (sStack_3e == param_2) {
          lVar2 = (**(int (***)())(*param_3 + 0x54))(param_3,0xffffffff8214c220,auStack_38);
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uStack_40);
    }
    if (piStack_3c != (int *)0x0) {
      (**(int (***)())(*piStack_3c + 8))();
    }
  }
  return lVar2;
}

