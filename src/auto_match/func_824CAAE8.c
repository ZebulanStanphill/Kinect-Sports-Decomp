extern int fn_82230300();


/* WARNING: Removing unreachable block (ram,0x824cab10) */
/* WARNING: Removing unreachable block (ram,0x824cab18) */

void fn_824CAAE8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != param_1[1]) {
    iVar2 = param_1[1];
    for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x30) {
      fn_82230300(iVar3,1,0);
    }
    param_1[1] = iVar1;
  }
  return;
}

