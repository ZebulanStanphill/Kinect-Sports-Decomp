extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E561A8();
extern int memcpy();


unsigned __int64 fn_82E56228(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int *piVar3;
  __int64 lVar2;
  unsigned __int64 in_r8;
  unsigned __int64 uVar4;
  unsigned int auStack_40;
  
  uVar4 = 0;
  auStack_40 = 0;
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 8);
  uVar1 = fn_82E50BE8(0x68,0,0,0,0);
  if ((uVar1 & 0xffffffff) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_82E561A8(uVar1,&auStack_40);
    uVar4 = (unsigned __int64)auStack_40;
  }
  if (piVar3 == (int *)0x0) {
    uVar4 = 0xffffffff8007000e;
  }
  else {
    if (-1 < (int)uVar4) {
      piVar3[0x11] = *(int *)(param_1 + 0x44);
      piVar3[0x12] = *(int *)(param_1 + 0x48);
      piVar3[0x13] = *(int *)(param_1 + 0x4c);
      piVar3[0x14] = *(int *)(param_1 + 0x50);
      piVar3[0x15] = *(int *)(param_1 + 0x54);
      piVar3[0x16] = *(int *)(param_1 + 0x58);
      piVar3[0x17] = *(int *)(param_1 + 0x5c);
      piVar3[0x18] = *(int *)(param_1 + 0x5c);
      lVar2 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x5c) & 0x7fffffff) << 1;
      if (0x7fffffff < *(unsigned int *)(param_1 + 0x5c)) {
        lVar2 = -1;
      }
      uVar4 = fn_82E50BE8(lVar2,0,0,0,0,in_r8,piVar3 + 0x11);
      piVar3[0x19] = (int)uVar4;
      if ((uVar4 & 0xffffffff) == 0) {
        uVar4 = 0xffffffff8007000e;
      }
      else {
        memcpy(uVar4,*(unsigned int *)(param_1 + 100),*(int *)(param_1 + 0x5c) << 1);
        uVar4 = (**(int (***)())*piVar3)(piVar3,0xffffffff8215ed78,param_2);
        if (-1 < (__int64)uVar4) goto LAB_82e5639c;
      }
    }
    (**(int (***)())(*piVar3 + 0x2c))(piVar3,1);
  }
LAB_82e5639c:
  fn_82E50F10(param_1 + 8);
  return uVar4;
}

