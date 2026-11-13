void fn_82D02B68(unsigned param_1,unsigned param_2)

{
  unsigned iVar1;
  unsigned iVar2;
  unsigned int *piVar3;
  unsigned int *piVar4;
  unsigned iVar5;
  
  iVar5 = *(unsigned int *)(param_2 + 0xc);
  iVar1 = *(unsigned int *)(param_2 + 0x18);
  if(iVar5 != param_2){
    iVar2 = *(unsigned int *)(param_2 + 8);
    *(unsigned int *)(iVar2 + 0xc) = iVar5;
    *(unsigned int *)(iVar5 + 8) = iVar2;
  }else{
    iVar5 = *(unsigned int *)(param_2 + 0x14);
    piVar3 = (unsigned int *)(param_2 + 0x14);
    if (iVar5 == 0) {
      iVar5 = *(unsigned int *)(param_2 + 0x10);
      piVar3 = (unsigned int *)(param_2 + 0x10);
      if (iVar5 == 0) goto LAB_82d02bdc;
    }
    while ((piVar4 = (unsigned int *)(iVar5 + 0x14), *(unsigned int *)(iVar5 + 0x14) != 0 ||
           (piVar4 = (unsigned int *)(iVar5 + 0x10), *(unsigned int *)(iVar5 + 0x10) != 0))) {
      piVar3 = piVar4;
      iVar5 = *piVar4;
    }
    *piVar3 = 0;
  }

LAB_82d02bdc:
  if (iVar1 == 0) {
    return;
  }
  iVar2 = (*(unsigned int *)(param_2 + 0x1c) + 6) * 4;
  if (param_2 == *(unsigned int *)(iVar2 + param_1)) {
    *(unsigned int *)(iVar2 + param_1) = iVar5;
    if (iVar5 == 0) {
      *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 8) & ~(1 << (*(unsigned int *)(param_2 + 0x1c)));
      return;
    }
  }
  else {
    if (*(unsigned int *)(iVar1 + 0x10) == param_2) {
      *(unsigned int *)(iVar1 + 0x10) = iVar5;
    }
    else {
      *(unsigned int *)(iVar1 + 0x14) = iVar5;
    }
    if (iVar5 == 0) {
      return;
    }
  }
  *(unsigned int *)(iVar5 + 0x18) = iVar1;
  iVar1 = *(unsigned int *)(param_2 + 0x10);
  if (iVar1 != 0) {
    *(unsigned int *)(iVar5 + 0x10) = iVar1;
    *(unsigned int *)(iVar1 + 0x18) = iVar5;
  }
  iVar1 = *(unsigned int *)(param_2 + 0x14);
  if (iVar1 == 0) {
    return;
  }
  *(unsigned int *)(iVar5 + 0x14) = iVar1;
  *(unsigned int *)(iVar1 + 0x18) = iVar5;
  return;
}

