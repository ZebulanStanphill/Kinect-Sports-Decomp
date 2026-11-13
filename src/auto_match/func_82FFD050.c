extern int fn_82FAB9C0();
extern int fn_82FFBD98();
extern int fn_82FFBE88();
extern int fn_82FFCDE0();
extern int fn_82FFF908();
extern int fn_82FFF990();
extern int fn_8302B618();
extern unsigned int lbl_832642E0;
extern unsigned int uStack00000040;


unsigned __int64
fn_82FFD050(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  int *piVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  unsigned __int64 uStack00000040;
  
  uVar5 = 1;
  uStack00000040 = param_6;
  piVar3 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x674,param_7);
  uVar2 = uStack00000040;
  if (piVar3 == (int *)0x0) {
    uVar5 = 0xf;
  }
  else {
    if (piVar3[7] == 0) {
      piVar4 = (int *)piVar3[4];
      if (piVar4 != (int *)piVar3[5]) {
LAB_82ffd0c4:
        iVar1 = *piVar4;
        if ((*(unsigned int *)(iVar1 + 0x14) & 0xffffff00) != 0x401100) goto LAB_82ffd120;
        uVar5 = fn_82FFCDE0(param_1,param_2,param_3,param_4,param_5,uVar2 & 0xffffffff00000000,
                              *(unsigned int *)(iVar1 + 0x1c),2);
        if ((int)uVar5 == 1) {
          uVar5 = fn_82FFF908(*(unsigned int *)(iVar1 + 0x10));
          if ((int)uVar5 == 1) goto LAB_82ffd120;
          fn_82FFBE88(param_1,*(unsigned int *)(iVar1 + 0x1c),0,0);
        }
        for (piVar6 = (int *)piVar3[4]; piVar6 != piVar4; piVar6 = piVar6 + 1) {
          iVar1 = *piVar6;
          if ((*(unsigned int *)(iVar1 + 0x14) & 0xffffff00) == 0x401100) {
            fn_82FFF990(*(unsigned int *)(iVar1 + 0x10));
            uVar2 = fn_8302B618(param_1 + 0x39c,*(unsigned int *)(iVar1 + 0x1c));
            if ((uVar2 & 0xffffffff) != 0) {
              fn_82FFBD98(uVar2,0);
            }
          }
        }
LAB_82ffd198:
        if ((int)uVar5 == 1) goto LAB_82ffd1a0;
        goto LAB_82ffd1c0;
      }
LAB_82ffd1a0:
      (**(int (***)())(*piVar3 + 4))(piVar3);
    }
    piVar3[7] = piVar3[7] + 1;
LAB_82ffd1c0:
    (**(int (***)())(*piVar3 + 8))(piVar3);
  }
  return uVar5;
LAB_82ffd120:
  piVar4 = piVar4 + 1;
  if (piVar4 == (int *)piVar3[5]) goto LAB_82ffd198;
  goto LAB_82ffd0c4;
}

