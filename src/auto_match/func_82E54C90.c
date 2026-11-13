extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_82E54C90(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  
  uVar3 = 0;
  if (param_4 == (unsigned int *)0x0) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar1 = *param_4;
    *param_4 = 0;
    fn_82E50CB8(param_1 + 8);
    if (param_2 < *(unsigned int *)(param_1 + 0x58)) {
      if (param_2 < *(unsigned int *)(param_1 + 0x58)) {
        puVar2 = *(unsigned int **)(param_2 * 4 + *(int *)(param_1 + 0x54));
        if (puVar2 == (unsigned int *)0x0) {
          *param_4 = 0;
          if ((param_3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(param_3,0,uVar1 << 1);
          }
        }
        else {
          *param_4 = puVar2[1];
          if ((param_3 & 0xffffffff) != 0) {
            if (uVar1 < (unsigned int)puVar2[1]) {
              fn_82F68CC0(param_3,*puVar2,uVar1 << 1);
              uVar3 = 0xffffffffc00d36b1;
            }
            else {
              fn_82F68CC0(param_3,*puVar2,puVar2[1] << 1);
            }
          }
        }
      }
      else {
        uVar3 = 0xffffffff8000ffff;
      }
    }
    else {
      uVar3 = 0xffffffff80070057;
    }
    fn_82E50F10(param_1 + 8);
  }
  return uVar3;
}

