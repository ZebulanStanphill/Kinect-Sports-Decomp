extern int memmove();


/* WARNING: Removing unreachable block (ram,0x8288e410) */

void fn_8288E3F0(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar1 = param_1[1];
  uVar3 = param_2 + 0x1f >> 5;
  if (((unsigned __int64)uVar3 < (unsigned __int64)(unsigned int)((int)(uVar1 - *param_1) >> 2)) &&
     (uVar4 = (unsigned __int64)uVar3 * 4 + (unsigned __int64)*param_1, (uVar4 & 0xffffffff) != (unsigned __int64)uVar1))
  {
    memmove(uVar4,(unsigned __int64)uVar1,0);
    param_1[1] = (unsigned int)uVar4;
  }
  param_1[4] = param_2;
  if ((param_2 & 0x1f) != 0) {
    iVar2 = uVar3 * 4 + *param_1;
    *(unsigned int *)(iVar2 + -4) = (1 << (param_2 & 0x1f)) - 1U & *(unsigned int *)(iVar2 + -4);
  }
  return;
}

