extern int fn_82FB2A30();
extern int fn_82FB7748();
extern unsigned int iStack0000001c;
extern unsigned int stack0x0000001c;


unsigned __int64 fn_82FB2C50(int param_1,int param_2)

{
  unsigned char bVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iStack0000001c;
  
  iStack0000001c = param_2 + 0x18;
  if ((((*(short *)(param_1 + 0xd4) == *(short *)(param_2 + 0x14)) &&
       ((unsigned int)*(unsigned short *)(param_1 + 0xb8) == (int)*(short *)(param_2 + 0x10))) &&
      (*(short *)(param_1 + 0xba) == *(short *)(param_2 + 0x12))) &&
     (*(int *)(param_1 + 200) == *(int *)(param_2 + 0xc))) {
    iVar3 = fn_82FB7748(param_1 + 0xac);
    bVar1 = *(unsigned char *)(param_2 + 0x17);
    if (((iVar3 == (unsigned int)bVar1 + (-(unsigned int)(bVar1 == 0) - (bVar1 - 1))) &&
        (*(int *)(param_1 + 0xb4) == *(int *)(param_2 + 4))) &&
       (*(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2 == *(int *)(param_2 + 8))) {
      if (*(int *)(param_2 + 8) != 0) {
        uVar2 = fn_82FB2A30(param_1,param_1 + 0xac,&stack0x0000001c);
        return uVar2;
      }
      return 0;
    }
  }
  return 1;
}

