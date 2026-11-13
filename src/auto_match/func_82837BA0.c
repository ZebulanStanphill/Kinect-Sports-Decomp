extern int fn_8284C760();
extern int fn_8284D400();
extern int fn_82A93C18();
extern int fn_82A93D70();
extern int fn_82A93DE0();
extern int fn_82A93EA8();


unsigned __int64 fn_82837BA0(unsigned __int64 param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  
  iVar2 = *(int *)(param_2 + 0x1c);
  if (iVar2 == 0) {
    fn_82A93C18(*(unsigned short *)(param_2 + 0x24),*(unsigned short *)(param_2 + 0x26),
                      *(unsigned char *)(param_2 + 0x30),0,*(unsigned int *)(param_2 + 0x18),0,
                      *(unsigned int *)(param_2 + 0x28),*(unsigned int *)(param_2 + 0x2c));
  }
  else if (iVar2 == 2) {
    fn_82A93D70(*(unsigned short *)(param_2 + 0x24),*(unsigned char *)(param_2 + 0x30),0,
                      *(unsigned int *)(param_2 + 0x18),1,*(unsigned int *)(param_2 + 0x28),
                      *(unsigned int *)(param_2 + 0x2c),*(unsigned int *)(param_2 + 0x34));
  }
  else if (iVar2 == 3) {
    fn_82A93EA8(*(unsigned short *)(param_2 + 0x24),*(unsigned short *)(param_2 + 0x26),
                    *(unsigned int *)(param_2 + 0x38),*(unsigned char *)(param_2 + 0x30),0,
                    *(unsigned int *)(param_2 + 0x18),0,*(unsigned int *)(param_2 + 0x28));
  }
  else if (iVar2 == 4) {
    uVar3 = 0;
    if (*(int *)(param_2 + 0x38) != 0) {
      iVar2 = 0;
      do {
        fn_82A93C18(*(unsigned int *)(iVar2 + *(int *)(param_2 + 0x44)),
                          *(unsigned int *)(iVar2 + *(int *)(param_2 + 0x48)),
                          *(unsigned int *)(iVar2 + *(int *)(param_2 + 0x4c)),0,
                          *(unsigned int *)(param_2 + 0x18),0,
                          *(unsigned int *)(iVar2 + *(int *)(param_2 + 0x3c)),
                          *(unsigned int *)(iVar2 + *(int *)(param_2 + 0x40)));
        uVar3 = uVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar3 < *(unsigned int *)(param_2 + 0x38));
    }
  }
  else if (iVar2 == 5) {
    fn_82A93DE0(*(unsigned short *)(param_2 + 0x24),*(unsigned short *)(param_2 + 0x26),
                      *(unsigned int *)(param_2 + 0x38),*(unsigned char *)(param_2 + 0x30),0,
                      *(unsigned int *)(param_2 + 0x18),0,*(unsigned int *)(param_2 + 0x28));
  }
  iVar2 = fn_8284C760();
  if (iVar2 != 0) {
    uVar1 = fn_8284C760();
    fn_8284D400(param_2,uVar1);
  }
  return 0;
}

