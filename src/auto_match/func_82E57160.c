extern unsigned int *auStack_50;
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E56A88();
extern int fn_82E56AF0();
extern int fn_82E56EC0();
extern int fn_82E56F28();


unsigned __int64 fn_82E57160(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int auStack_50;
  
  uVar5 = 0;
  auStack_50 = 0;
  uVar4 = 0;
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 8);
  uVar1 = fn_82E50BE8(0xb0,0,0,0,0);
  if ((uVar1 & 0xffffffff) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82E56F28(uVar1,&auStack_50);
    uVar4 = (unsigned __int64)auStack_50;
  }
  if (piVar2 == (int *)0x0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    if (-1 < (int)uVar4) {
      iVar3 = fn_82E56AF0(piVar2 + 0x11,*(unsigned int *)(param_1 + 0xac),0xffffffffffffffff);
      if (iVar3 == 0) {
        uVar4 = 0xffffffff8007000e;
      }
      else {
        if (*(int *)(param_1 + 0xac) != 0) {
          do {
            iVar3 = fn_82E56EC0(param_1 + 0x44,uVar5,&auStack_50);
            if (iVar3 == 0) {
              uVar4 = 0xffffffff8000ffff;
              goto LAB_82e572b8;
            }
            iVar3 = fn_82E56A88(piVar2 + 0x11,auStack_50,0);
            if (iVar3 == 0) {
              uVar4 = 0xffffffff8000ffff;
              break;
            }
            uVar5 = uVar5 + 1;
          } while ((uVar5 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xac));
        }
        if ((-1 < (int)uVar4) &&
           (uVar4 = (**(int (***)())*piVar2)(piVar2,0xffffffff8215468c,param_2), -1 < (__int64)uVar4))
        goto LAB_82e572d0;
      }
    }
LAB_82e572b8:
    (**(int (***)())(*piVar2 + 0x20))(piVar2,1);
  }
LAB_82e572d0:
  fn_82E50F10(param_1 + 8);
  return uVar4;
}

