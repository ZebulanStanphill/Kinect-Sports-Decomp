unsigned __int64 fn_82C05180(int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int (**pcVar5)();
  unsigned __int64 uVar6;
  
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    if ((uVar1 & 2) == 0) {
      if ((uVar1 & 4) == 0) {
        return 0xffffffff80004005;
      }
      uVar6 = (**(int (***)())(*param_1 + 100))
                        (param_1,param_2[2],*(unsigned __int64 *)(param_2 + 4),
                         *(unsigned __int64 *)(param_2 + 6),param_2[8],param_2[9],param_2[10],param_2[0xb]
                        );
      goto LAB_82c051d4;
    }
    uVar1 = param_2[0xb];
    uVar2 = param_2[10];
    uVar3 = param_2[9];
    uVar4 = param_2[8];
    pcVar5 = *(int (***)())(*param_1 + 0x68);
  }
  else {
    uVar1 = param_2[0xb];
    uVar2 = param_2[10];
    uVar3 = param_2[9];
    uVar4 = param_2[8];
    pcVar5 = *(int (***)())(*param_1 + 0x6c);
  }
  uVar6 = (*pcVar5)(param_1,param_2[2],param_2[3],uVar4,uVar3,uVar2,uVar1);
LAB_82c051d4:
  if (-1 < (int)uVar6) {
    param_1[0x1e] = *param_2;
  }
  return uVar6;
}

