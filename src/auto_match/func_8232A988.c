#define true 1


void fn_8232A988(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  unsigned char bVar2;
  unsigned __int64 uVar3;
  unsigned char bVar4;
  unsigned __int64 uVar5;
  
  uVar5 = param_3 >> 3;
  param_3 = param_3 & 7;
  do {
    iVar1 = (int)uVar5;
    if (param_3 == 0) {
      if (param_4 < 8) {
        bVar2 = (unsigned char)((1L << (param_4 & 0x7f)) + -1 << (8 - param_4 & 0x7f));
        bVar4 = (unsigned char)(param_2 << (8 - param_4 & 0x7f)) & bVar2;
        bVar2 = ~bVar2 & *(unsigned char *)(iVar1 + param_1);
        param_4 = 0;
        goto LAB_8232aa44;
      }
      param_4 = param_4 - 8;
      uVar5 = uVar5 + 1;
      *(char *)(iVar1 + param_1) = (char)(param_2 >> (param_4 & 0x7f));
    }
    else {
      uVar3 = 8 - param_3;
      if (param_4 < 8 - param_3) {
        uVar3 = param_4;
      }
      param_4 = param_4 - uVar3;
      param_3 = (8 - uVar3) - param_3;
      bVar2 = (unsigned char)((1L << (uVar3 & 0x7f)) + -1 << (param_3 & 0x7f));
      bVar4 = (unsigned char)((param_2 >> (param_4 & 0x7f)) << (param_3 & 0x7f)) & bVar2;
      uVar5 = uVar5 + 1;
      bVar2 = ~bVar2 & *(unsigned char *)(iVar1 + param_1);
      param_3 = 0;
LAB_8232aa44:
      *(unsigned char *)(iVar1 + param_1) = bVar4 | bVar2;
    }
    if (param_4 == 0) {
      return;
    }
  } while( true );
}

