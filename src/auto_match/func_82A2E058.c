extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82A2BAF0();
extern int fn_82A2D260();
extern int fn_82A2D960();
extern int fn_82A2DC18();
extern int memcpy();
extern unsigned int uStack_2c;


unsigned __int64 fn_82A2E058(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int auStack_50;
  unsigned char auStack_40 [20];
  unsigned int uStack_2c;
  
  uVar2 = 0;
  iVar1 = fn_82A2BAF0(param_1,param_2,0,param_3,&auStack_50);
  if ((iVar1 == 0) && (uVar2 = fn_82A2DC18(param_1,param_2,0,&auStack_50), -1 < (int)uVar2)) {
    memcpy(auStack_40,
                 (param_2 + ((param_2 & 0xffffffff) / 0xaa) * -0xaa) * 0x18 +
                 (unsigned __int64)auStack_50,0x18);
    auStack_50 = auStack_50 - *(int *)(param_1 + 0x34);
    iVar1 = (((int)auStack_50 >> 0xc) +
            (unsigned int)((int)auStack_50 < 0 && (auStack_50 & 0xfff) != 0)) * 8 +
            *(int *)(param_1 + 0x30);
    *(char *)(iVar1 + 4) = *(char *)(iVar1 + 4) + -1;
    if ((uStack_2c >> 0x1e == 2) || (uStack_2c >> 0x1e == 3)) {
      uVar2 = fn_82A2D960(param_1,param_2,0,auStack_40,param_3,&auStack_50);
    }
    else {
      fn_82A2D260(param_1,0xffffffffc0000032);
      uVar2 = 0xffffffffc0000032;
    }
  }
  return uVar2;
}

