extern int fn_82E76DC8();


__int64 fn_82E76E10(unsigned __int64 param_1,short *param_2,short *param_3)

{
  int iVar2;
  __int64 lVar1;
  
  if ((((param_2 == (short *)0x0) || (param_3 == (short *)0x0)) || (*(int *)(param_2 + 0x96) == 0))
     || (((iVar2 = fn_82E76DC8(param_1,param_3), iVar2 == 0 || (*param_2 != *param_3)) ||
         (*(unsigned char *)(param_2 + 3) + 1 + ((int)(*(unsigned char *)(param_2 + 3) + 1) >> 8) * -0x100 !=
          (unsigned int)*(unsigned char *)(param_3 + 3))))) {
    lVar1 = 0;
  }
  else {
    lVar1 = -((unsigned __int64)
              (0xff < (unsigned __int64)*(unsigned int *)((int)param_3 + 0xf) -
                      (unsigned __int64)*(unsigned int *)((int)param_2 + 0xf)) - 1);
  }
  return lVar1;
}

