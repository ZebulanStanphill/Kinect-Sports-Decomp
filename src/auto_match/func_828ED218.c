extern int fn_82CE1578();
extern unsigned int fn_82A1F470(unsigned int);



unsigned int  fn_828ED218(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uStack_10;
  unsigned int auStack_c;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uStack_10 = param_3 & 0xff;
  auStack_c = param_2;
  uVar1 = fn_82CE1578(*(unsigned int *)(param_1 + 0x58),1,&auStack_c,&uStack_10,0);
  if ((uVar1 & 0xffffffff) == 0x65b) {
    uVar1 = fn_82A1F470(uVar1);
  }
  return uVar1;
}

