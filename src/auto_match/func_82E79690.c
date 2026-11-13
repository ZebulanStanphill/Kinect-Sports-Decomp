extern unsigned int *auStack_30;
extern int fn_82E78690();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_82E79690(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int auStack_30 [12];
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    fn_82F68CC0(param_2,param_1 + 0x13c,0x3c);
    *(unsigned short *)(param_2 + 0x40) = 0;
    *(unsigned int *)(param_2 + 0x44) = 0;
    if ((unsigned __int64)*(unsigned short *)(param_1 + 0x146) != 0) {
      lVar2 = fn_82E78690(param_1 + 0x178,(unsigned __int64)*(unsigned short *)(param_1 + 0x146) - 1,auStack_30);
      auStack_30[0] = -(unsigned int)(lVar2 != 0) & auStack_30[0];
      if (auStack_30[0] == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(param_2,0,0x4c);
      }
      *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(auStack_30[0] + 0x17);
      if (*(int *)(auStack_30[0] + 300) != 0) {
        *(unsigned int *)(param_2 + 0x44) = *(unsigned int *)(auStack_30[0] + 0x134);
        *(unsigned short *)(param_2 + 0x40) = *(unsigned char *)(auStack_30[0] + 0x130) + 1;
        *(unsigned char *)(param_2 + 0x48) = *(unsigned char *)(auStack_30[0] + 0x13c);
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

