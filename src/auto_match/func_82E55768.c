extern unsigned int *auStack_60;
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E54898();
extern int fn_82E55600();
extern int fn_82EE2D50();


unsigned __int64 fn_82E55768(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned int uVar7;
  unsigned int auStack_60 [24];
  
  uVar6 = 0;
  auStack_60[0] = 0;
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 8);
  uVar2 = fn_82E50BE8(0x68,0,0,0,0);
  if ((uVar2 & 0xffffffff) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_82E55600(uVar2,auStack_60);
    uVar6 = (unsigned __int64)auStack_60[0];
  }
  if (piVar3 == (int *)0x0) {
    uVar6 = 0xffffffff8007000e;
  }
  else {
    if (-1 < (int)uVar6) {
      piVar3[0x11] = *(int *)(param_1 + 0x44);
      piVar3[0x12] = *(int *)(param_1 + 0x48);
      piVar3[0x13] = *(int *)(param_1 + 0x4c);
      piVar3[0x14] = *(int *)(param_1 + 0x50);
      iVar4 = fn_82EE2D50(piVar3 + 0x15,*(unsigned int *)(param_1 + 0x58),0xffffffffffffffff);
      if (iVar4 == 0) {
LAB_82e55844:
        uVar6 = 0xffffffff8007000e;
      }
      else {
        uVar7 = 0;
        if (*(int *)(param_1 + 0x58) != 0) {
          iVar4 = 0;
          do {
            if (*(unsigned int *)(param_1 + 0x58) <= uVar7) {
              uVar6 = 0xffffffff8000ffff;
              goto LAB_82e55934;
            }
            uVar1 = *(unsigned int *)(iVar4 + *(int *)(param_1 + 0x54));
            uVar2 = fn_82E50BE8(0xc,0,0,0,0);
            if ((uVar2 & 0xffffffff) == 0) {
              iVar5 = 0;
            }
            else {
              iVar5 = fn_82E54898(uVar2,uVar1,auStack_60);
              uVar6 = (unsigned __int64)auStack_60[0];
            }
            if (iVar5 == 0) goto LAB_82e55844;
            if ((int)uVar6 < 0) goto LAB_82e55934;
            if ((unsigned int)piVar3[0x16] <= uVar7) {
              uVar6 = 0xffffffff8000ffff;
              break;
            }
            uVar7 = uVar7 + 1;
            *(int *)(piVar3[0x15] + iVar4) = iVar5;
            iVar4 = iVar4 + 4;
          } while (uVar7 < *(unsigned int *)(param_1 + 0x58));
        }
        if ((-1 < (int)uVar6) &&
           (uVar6 = (**(int (***)())*piVar3)(piVar3,0xffffffff8215467c,param_2), -1 < (__int64)uVar6))
        goto LAB_82e5594c;
      }
    }
LAB_82e55934:
    (**(int (***)())(*piVar3 + 0x30))(piVar3,1);
  }
LAB_82e5594c:
  fn_82E50F10(param_1 + 8);
  return uVar6;
}

