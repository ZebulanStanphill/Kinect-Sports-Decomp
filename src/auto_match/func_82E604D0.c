extern unsigned int *auStack_38;
extern int fn_82E5FD40();


unsigned __int64 fn_82E604D0(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  int *piStack_40;
  int *piStack_3c;
  unsigned int auStack_38 [14];
  unsigned int uVar4;
  
  if ((param_1 == (int *)0x0) || ((param_3 & 0xffffffff) < 0xd)) {
    return 0;
  }
  piStack_40 = (int *)0x0;
  uVar5 = 0;
  piStack_3c = (int *)0x0;
  uVar1 = (**(int (***)())(*param_1 + 0x90))(param_1,&piStack_40);
  if (-1 < (__int64)uVar1) {
    if (piStack_40 == (int *)0x0) {
      uVar1 = 0xffffffffc00d36bb;
      goto LAB_82e6064c;
    }
    auStack_38[0] = 0;
    iVar2 = fn_82E5FD40(piStack_40,auStack_38);
    if (iVar2 == 0) {
      iVar2 = (**(int (***)())*piStack_40)(piStack_40,0xffffffff821531d8,&piStack_3c);
      if (-1 < iVar2) {
        iVar2 = (**(int (***)())(*piStack_3c + 0x98))();
        uVar4 = *(unsigned int *)(iVar2 + 0x30);
        if (uVar4 != 0) {
          trapDoubleWordImmediate(6,(unsigned __int64)uVar4,0);
          uVar5 = ((unsigned __int64)*(unsigned int *)(iVar2 + 0x34) * 10000000) / (unsigned __int64)uVar4;
          if (uVar5 != 0) {
            trapDoubleWordImmediate(6,uVar5,0);
            trapWord(6,param_3 - 0xc,0);
            uVar5 = ((__int64)
                     ((int)((((param_2 & 0xffffffff) * uVar5) / 80000000 & 0xffffffff) /
                           (param_3 - 0xc & 0xffffffff)) + 2) * 1360000000 & 0xffffffffU) / uVar5;
            goto LAB_82e6062c;
          }
        }
      }
      uVar5 = 0x550;
    }
    else {
      uVar4 = auStack_38[0];
      if (auStack_38[0] == 0) {
        uVar4 = 1;
      }
      uVar3 = ((unsigned __int64)uVar4 & 0x1fffffff) << 3;
      uVar5 = (param_2 * 0x88 & 0xffffffff) / uVar3;
      trapWord(6,uVar3,0);
    }
  }
LAB_82e6062c:
  if (piStack_40 != (int *)0x0) {
    (**(int (***)())(*piStack_40 + 8))();
    piStack_40 = (int *)0x0;
  }
LAB_82e6064c:
  if (piStack_3c != (int *)0x0) {
    (**(int (***)())(*piStack_3c + 8))();
  }
  return ((uVar1 & 0xffffffff) >> 0x1f) - 1 & uVar5;
}

