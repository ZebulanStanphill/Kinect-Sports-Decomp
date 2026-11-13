extern int fn_823AB478();
extern int fn_82A1BFA8();
extern unsigned int lbl_83265988;


char fn_824C4278(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = *(int *)(param_3 + 0x14) - *(int *)(param_3 + 0x10) >> 2;
  if (param_1 == iVar2) {
    if ((lbl_83265988 != 0) &&
       (uVar1 = fn_823AB478(), (uVar1 & 0xffffffff) == (param_2 & 0xffffffff))) {
      return '\0';
    }
  }
  else {
    if (param_1 <= iVar2) {
      if ((lbl_83265988 != 0) &&
         (uVar1 = fn_823AB478(), (uVar1 & 0xffffffff) == (param_2 & 0xffffffff))) {
        return '\x02';
      }
      iVar2 = fn_82A1BFA8(param_2);
      return (iVar2 != 2) + '\x05';
    }
    if ((lbl_83265988 != 0) &&
       (uVar1 = fn_823AB478(), (uVar1 & 0xffffffff) == (param_2 & 0xffffffff))) {
      return '\x01';
    }
  }
  iVar2 = fn_82A1BFA8(param_2);
  if (iVar2 == 2) {
    cVar3 = (param_1 == 1) + '\x04';
  }
  else {
    cVar3 = '\x06';
  }
  return cVar3;
}

