extern int fn_82FA7468();
extern int fn_82FA76F0();
extern int fn_82FE6A90();


void fn_82FA7848(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int *apuStack_20 [2];
  
  fn_82FA7468(param_2,apuStack_20);
  uVar1 = apuStack_20[0][3];
  apuStack_20[0][3] = uVar1 & 0xbfffffff;
  if ((uVar1 & 0x80000000) == 0) {
    apuStack_20[0][3] = uVar1 & 0xbfffffff | 0x80000000;
    iVar2 = apuStack_20[0][1];
    fn_82FE6A90(iVar2,apuStack_20[0][2],0,1);
    for (apuStack_20[0] = (unsigned int *)*apuStack_20[0]; apuStack_20[0] != (unsigned int *)0x0;
        apuStack_20[0] = (unsigned int *)*apuStack_20[0]) {
      if (apuStack_20[0][1] == iVar2) {
        apuStack_20[0][3] = apuStack_20[0][3] | 0x80000000;
      }
    }
  }
  fn_82FA76F0();
  return;
}

