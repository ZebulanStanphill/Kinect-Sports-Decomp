extern unsigned int *auStack_2c;
extern int fn_82800648();
extern unsigned int iStack_30;


unsigned __int64 fn_827FE3C8(int param_1,int param_2)

{
  unsigned short uVar1;
  unsigned int iVar2;
  unsigned int uVar3;
  int iStack_30;
  unsigned int auStack_2c;
  
  uVar1 = *(unsigned short *)(param_1 + 0xe8);
  uVar3 = 0;
  if ((unsigned __int64)uVar1 != 0) {
    do {
      iVar2 = fn_82800648(param_1,3,uVar3,&auStack_2c,&iStack_30);
      if (iVar2 == 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      *(unsigned int *)(iStack_30 * 4 + param_2) = auStack_2c;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)uVar1);
  }
  return 1;
}

