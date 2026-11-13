extern unsigned int *auStack_cec;
extern int fn_8264D6C0();
extern int fn_82F691F0();


unsigned __int64
fn_82650AB0(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,__int64 param_5)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_cec [3308];
  
  *(int *)(param_1 + 0x5c0c) = *(int *)(param_1 + 0x5c0c) + 1;
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(param_1 + 0x5608,0,0x600);
  }
  lVar2 = ((((unsigned __int64)*param_3 + param_5 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) +
          ((unsigned __int64)*param_3 + param_5 & 0x1fffffff);
  iVar1 = (int)lVar2;
  if ((*(int *)(iVar1 + -0x3ffffffc) == 0) && (*(unsigned int *)(iVar1 + -0x3ffffff8) < 3)) {
    if ((*(unsigned int *)(iVar1 + -0x3ffffff0) <= *(unsigned int *)(param_1 + 0x558c)) &&
       (*(unsigned int *)(iVar1 + -0x3fffffec) <= *(unsigned int *)(param_1 + 0x5590))) {
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(auStack_cec,0,0x34);
    }
    uVar3 = 7;
  }
  else {
    uVar3 = 6;
  }
  fn_8264D6C0(lVar2 + -0x40000000,lVar2 + -0x3ffff9dc,0);
  *(int *)(param_1 + 0x5c0c) = *(int *)(param_1 + 0x5c0c) + -1;
  return uVar3;
}

