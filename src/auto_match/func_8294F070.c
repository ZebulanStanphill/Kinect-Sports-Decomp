extern unsigned int *auStack_1f0;
extern int fn_829632A0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963D50();
extern int fn_82BA02A8();
extern int fn_82F691F0();


__int64 fn_8294F070(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned char auStack_1f0 [496];
  
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  if ((uVar1 & 0xfff00000) == 0x20900000) {
    iVar3 = fn_82963998(0x74);
    if (iVar3 == 0) {
      puVar4 = (unsigned int *)0x0;
    }
    else {
      puVar4 = (unsigned int *)fn_829632A0();
    }
    if (puVar4 == (unsigned int *)0x0) {
      lVar2 = -0x7ff8fff2;
    }
    else {
      lVar2 = fn_82963D50(puVar4,*(unsigned int *)(param_1 + 0x104));
      if (-1 < lVar2) {
        puVar4[3] = 1;
        *puVar4 = 0x20900001;
        puVar4[1] = 2;
        if ((uVar1 & 0xfffff) != 0) {
          *(unsigned int *)puVar4[4] = **(unsigned int **)(*(int *)(param_1 + 0x104) + 0x10);
          *(unsigned int *)puVar4[2] = **(unsigned int **)(*(int *)(param_1 + 0x104) + 8);
          *(unsigned int *)(puVar4[2] + 4) =
               *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + (uVar1 & 0xfffff) * 4);
                    /* WARNING: Subroutine does not return */
          fn_82F691F0(auStack_1f0,0xff,0xa0,param_4,param_5,0x11100000);
        }
      }
      fn_82BA02A8(puVar4);
      fn_829639F0(puVar4);
    }
  }
  else {
    lVar2 = 1;
  }
  return lVar2;
}

