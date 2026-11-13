#define true 1


void fn_825AF850(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned char bVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar4 = param_3 >> 3;
  param_3 = param_3 & 7;
  uVar5 = 3;
  do {
    iVar1 = (int)uVar4;
    if (param_3 == 0) {
      if (uVar5 < 8) {
        uVar2 = 8 - uVar5;
        bVar3 = (unsigned char)((1L << (uVar5 & 0x7f)) + -1 << (uVar2 & 0x7f));
        uVar5 = 0;
        bVar3 = (unsigned char)(param_2 << (uVar2 & 0x7f)) & bVar3 | ~bVar3 & *(unsigned char *)(iVar1 + param_1);
        goto LAB_825af920;
      }
      uVar5 = uVar5 - 8;
      uVar4 = uVar4 + 1;
      *(char *)(iVar1 + param_1) = (char)(param_2 >> (uVar5 & 0x7f));
    }
    else {
      uVar2 = 8 - param_3;
      if (uVar5 < 8 - param_3) {
        uVar2 = uVar5;
      }
      uVar5 = uVar5 - uVar2;
      param_3 = (8 - uVar2) - param_3;
      bVar3 = (unsigned char)((1L << (uVar2 & 0x7f)) + -1 << (param_3 & 0x7f));
      uVar4 = uVar4 + 1;
      bVar3 = (unsigned char)((param_2 >> (uVar5 & 0x7f)) << (param_3 & 0x7f)) & bVar3 |
              ~bVar3 & *(unsigned char *)(iVar1 + param_1);
      param_3 = 0;
LAB_825af920:
      *(unsigned char *)(iVar1 + param_1) = bVar3;
    }
    if (uVar5 == 0) {
      return;
    }
  } while( true );
}

