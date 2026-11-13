typedef unsigned char bool;
extern int fn_828AC4E8();
extern int fn_82CE0730();


void fn_828CFBD8(int param_1,int param_2)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  __int64 lVar4;
  
  iVar1 = fn_82CE0730(param_2,0,0,0,1);
  puVar3 = (unsigned char *)(param_2 + -1);
  puVar2 = (unsigned char *)(param_1 + -1);
  lVar4 = 8;
  do {
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *(unsigned char *)(param_1 + 0x10) = 0;
  *(unsigned char *)(param_1 + 0x11) = 0;
  *(unsigned char *)(param_1 + 0x12) = 0;
  fn_828AC4E8(param_1 + 0x18);
  *(unsigned short *)(param_1 + 0x14) = 0xffff;
  *(unsigned char *)(param_1 + 0x30) = 0xff;
  *(bool *)(param_1 + 0xc) = iVar1 == 0;
  return;
}

