extern unsigned int *auStack_38;
extern int fn_82C1EC50();
extern int fn_82C1EE20();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_82C24BE8(int param_1,unsigned __int64 param_2,unsigned __int64 *param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int auStack_38;
  
  auStack_38 = 0;
  uStack_3c = 0;
  if (param_1 == 0) {
    uVar2 = 0xffffffff80070057;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x1c);
    uStack_40 = 0x18;
    uVar2 = (**(int (***)())(*piVar1 + 0xc))(*piVar1,0x18);
    if ((((-1 < (int)uVar2) &&
         (uVar2 = fn_82C1EE20(param_1,param_2,&auStack_38,&uStack_3c,&uStack_40), -1 < (int)uVar2))
        && (uVar2 = fn_82C1EC50(param_1,param_3,&auStack_38,&uStack_3c,&uStack_40), -1 < (int)uVar2
           )) && ((*param_3 < 0x18 ||
                  ((unsigned __int64)*(unsigned int *)(piVar1[1] + 4) <
                   (*(__int64 *)(piVar1 + 2) + *param_3) - 0x18)))) {
      uVar2 = 0xffffffff8050000c;
    }
  }
  return uVar2;
}

