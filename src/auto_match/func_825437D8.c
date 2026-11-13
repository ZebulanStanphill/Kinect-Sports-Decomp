extern int fn_8263CBB0();
extern int fn_828461E8();


void fn_825437D8(unsigned int *param_1,int param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(*(int *)(param_2 + 4) + 0x4c) + param_3 * 0x10);
  iVar1 = *piVar2;
  if ((int)param_5 == -1) {
    if ((param_4 & 0xffffffff) == 5) {
      param_5 = 1;
    }
    else {
      param_5 = -(unsigned __int64)(param_4 == 7) & 2;
    }
  }
  fn_828461E8(iVar1,piVar2[1],*param_1,0xffffffff821960d0,param_5,0,0,0);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0x2014] =
       *(unsigned int *)(*(int *)(*(int *)(iVar1 + 0x24) + (int)param_5 * 0xc + 4) + 0x10);
                    /* WARNING: Subroutine does not return */
  fn_8263CBB0(*param_1,0xd,param_1[0x2a1c],0x40000);
}

