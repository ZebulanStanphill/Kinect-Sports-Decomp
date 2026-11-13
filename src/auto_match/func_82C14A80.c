extern int fn_8265C940();
extern int fn_82C038C8();
extern int fn_82F68CC0();


unsigned __int64 fn_82C14A80(__int64 *param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int aiStack_40 [16];
  
  aiStack_40[0] = 0;
  if (param_1 == (__int64 *)0x0) {
    return 2;
  }
  uVar5 = param_2 - 0x18;
  if (((uVar5 & 0xffffffff) < 8) ||
     (iVar4 = fn_82C038C8(param_1,*param_1,8,aiStack_40), iVar4 != 8)) {
LAB_82c14ab8:
    uVar1 = 3;
  }
  else {
    uVar7 = 8;
    uVar2 = (((unsigned __int64)*(unsigned char *)(aiStack_40[0] + 7) * 0x100 +
             (unsigned __int64)*(unsigned char *)(aiStack_40[0] + 6)) * 0x100 +
            (unsigned __int64)*(unsigned char *)(aiStack_40[0] + 5)) * 0x100 +
            (unsigned __int64)*(unsigned char *)(aiStack_40[0] + 4);
    *(int *)((int)param_1 + 0xdc) = (int)uVar2;
    if ((uVar5 & 0xffffffff) < (uVar2 + 8 & 0xffffffff)) {
      return 7;
    }
    aiStack_40[0] = aiStack_40[0] + 8;
    iVar4 = fn_8265C940(uVar2,0x248c8000);
    *(int *)(param_1 + 0x1c) = iVar4;
    if (iVar4 == 0) {
      return 5;
    }
    uVar6 = 0;
    if (uVar2 < 0x81) {
      uVar7 = fn_82C038C8(param_1,*param_1 + 8,uVar2,aiStack_40);
      if ((uVar7 & 0xffffffff) != uVar2) goto LAB_82c14ab8;
      fn_82F68CC0(*(unsigned int *)(param_1 + 0x1c),aiStack_40[0],uVar7);
    }
    else {
      do {
        uVar8 = 0x80;
        if ((uVar2 & 0xffffffff) < 0x81) {
          uVar8 = uVar2;
        }
        uVar3 = fn_82C038C8(param_1,(uVar7 & 0xffffffff) + *param_1,uVar8,aiStack_40);
        if ((uVar3 & 0xffffffff) != (uVar8 & 0xffffffff)) goto LAB_82c14ab8;
        uVar7 = uVar7 + uVar3;
        uVar2 = uVar2 - uVar3;
        if ((unsigned __int64)*(unsigned int *)((int)param_1 + 0xdc) < (uVar6 + uVar3 & 0xffffffff))
        goto LAB_82c14ab8;
        fn_82F68CC0(*(unsigned int *)(param_1 + 0x1c) + uVar6,aiStack_40[0],uVar3);
        uVar6 = uVar6 + uVar3;
      } while ((uVar2 & 0xffffffff) != 0);
    }
    uVar1 = 0;
    *param_1 = (uVar5 & 0xffffffff) + *param_1;
  }
  return uVar1;
}

