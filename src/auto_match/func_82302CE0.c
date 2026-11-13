extern int fn_82230300();


/* WARNING: Removing unreachable block (ram,0x82302d08) */
/* WARNING: Removing unreachable block (ram,0x82302d10) */

void fn_82302CE0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  if (iVar1 != param_1[1]) {
    iVar2 = param_1[1];
    for (iVar3 = iVar1; iVar3 != iVar2; iVar3 = iVar3 + 0x40) {
      fn_82230300(iVar3,1,0);
    }
    param_1[1] = iVar1;
  }
  return;
}

