extern int fn_8267BE38();
extern int fn_826BE288();
extern int fn_826BF178();
extern int fn_826C0700();
extern int fn_826C2588();


unsigned __int64 fn_826C25E8(int param_1,int param_2,unsigned __int64 param_3)

{
  int *piVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(unsigned char *)(param_2 + 4) < 7) {
      uVar3 = fn_826C0700(*(int *)(param_1 + 0x18),param_3);
    }
    else {
      lVar2 = fn_826BF178();
      uVar3 = -(unsigned __int64)(lVar2 != 0) & lVar2 + 8U;
    }
    if ((uVar3 & 0xffffffff) != 0) {
      fn_826C2588(*(unsigned int *)(param_1 + 0x18),param_3,-(6 < *(unsigned char *)(param_2 + 4)) & 1);
      piVar1 = *(int **)(param_1 + 0x18);
      if (((int *)*piVar1 == (int *)0x0) || (*(int *)*piVar1 == 0)) {
        if (piVar1 != (int *)0x0) {
          fn_826BE288(piVar1);
          fn_8267BE38(piVar1);
        }
        *(unsigned int *)(param_1 + 0x18) = 0;
      }
      return 1;
    }
  }
  return 0;
}

