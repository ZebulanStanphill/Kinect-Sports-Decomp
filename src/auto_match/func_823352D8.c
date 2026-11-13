extern int fn_822C72E0();
extern int fn_822C8C08();
extern int fn_8235D350();


void fn_823352D8(int param_1,unsigned int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  unsigned int uVar4;
  
  switch(param_2) {
  case 0:
  case 8:
  case 0xd:
    uVar4 = 2;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xb:
  case 0xc:
    uVar4 = 1;
    break;
  case 9:
    uVar4 = 4;
    break;
  case 10:
    uVar4 = 3;
    break;
  default:
    goto switchD_82dbea0c_default;
  }
  pcVar2 = (char *)fn_8235D350(**(unsigned int **)(*(int *)(param_1 + 0x230) + 0x238),uVar4,
                                   *(unsigned int *)(param_1 + 0xc),0,0);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((int)pcVar3 - (int)pcVar2 != 1) {
    if (param_3 == 0) {
      fn_822C72E0(*(unsigned int *)(*(int *)(*(int *)(param_1 + 0x230) + 0x114) + 0x20));
    }
    else {
      fn_822C8C08(*(unsigned int *)(*(int *)(param_1 + 0x230) + 0x114));
    }
  }
  *(unsigned int *)(*(int *)(param_1 + 0x230) + 0x29c) = uVar4;
switchD_82dbea0c_default:
  return;
}

