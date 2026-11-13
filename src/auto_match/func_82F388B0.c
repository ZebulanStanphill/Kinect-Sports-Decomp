extern int fn_82E50BE8();
extern int fn_82F38188();
extern int fn_82F691F0();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E628;


unsigned __int64 fn_82F388B0(int param_1,unsigned char *param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned char *pbVar6;
  
  pbVar6 = (unsigned char *)&lbl_8202E618;
  do {
    bVar1 = *pbVar6;
    bVar2 = *param_2;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar6 = pbVar6 + 1;
    param_2 = param_2 + 1;
  } while (pbVar6 != &lbl_8202E628);
  if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
    uVar4 = fn_82F38188(param_1,param_3);
  }
  else if ((param_3 & 0xffffffff) == 0) {
    uVar4 = 0xffffffff80070057;
  }
  else {
    uVar3 = *(unsigned int *)(param_1 + 0x70);
    lVar5 = ((unsigned __int64)uVar3 & 0x3fffffff) << 2;
    if (0x3fffffff < uVar3) {
      lVar5 = -1;
    }
    lVar5 = fn_82E50BE8(lVar5,0,0,0,0);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(lVar5,0,uVar3 << 2);
    }
    uVar4 = 0xffffffff8007000e;
  }
  return uVar4;
}

