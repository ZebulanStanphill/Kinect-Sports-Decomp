extern int fn_82A1EFC0();


void fn_82FE1178(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = param_2[1]; uVar1 != 0; uVar1 = uVar1 - 1 & uVar1) {
    iVar2 = iVar2 + 1;
  }
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82A1EFC0((unsigned __int64)*(unsigned short *)((int)param_2 + 0xe) * 4 + (unsigned __int64)*param_2,0,
                    (param_3 & 0x3fffffff) << 2);
}

