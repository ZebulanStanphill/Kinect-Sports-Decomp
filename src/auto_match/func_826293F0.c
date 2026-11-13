extern int fn_82526AF8();
extern unsigned int lbl_83265988;
extern unsigned int lbl_83265A38;
extern unsigned int lbl_83265A3C;


unsigned __int64 fn_826293F0(int *param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 4) == 0x68) {
    if (param_3 == 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(iVar1 + 4) != 0x80) {
      return 4;
    }
    lVar3 = fn_82526AF8((unsigned __int64)lbl_83265A38 - 1,(unsigned __int64)lbl_83265A3C + 4,iVar1 + 8);
    uVar4 = -(unsigned __int64)(lVar3 != -1) & lVar3 + 1U;
    if ((uVar4 != 0) &&
       (uVar2 = (unsigned int)uVar4,
       *(unsigned int *)(iVar1 + 0x48) !=
       (unsigned int)(((unsigned int)*(unsigned char *)(*(int *)(*(int *)(lbl_83265988 + 0xf0) + 8) + (uVar2 >> 3)) &
              1 << (uVar2 & 7)) != 0))) {
      return 0;
    }
  }
  return 3;
}

