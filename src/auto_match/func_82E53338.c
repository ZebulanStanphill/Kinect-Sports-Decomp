extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E518B8();
extern int fn_82E520C8();
extern int fn_82E52208();
extern int fn_82E53288();
extern int fn_82EE21F8();


unsigned __int64 fn_82E53338(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_40;
  
  uVar3 = 0;
  auStack_40 = 0;
  if (param_2 == (unsigned int *)0x0) {
    return 0xffffffff80070057;
  }
  *param_2 = 0;
  fn_82E50CB8(param_1 + 100);
  uVar1 = fn_82E50BE8(0x10c,0,0,0,0);
  if ((uVar1 & 0xffffffff) == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_82E53288(uVar1,*(unsigned int *)(param_1 + 0x60),&auStack_40);
    uVar3 = (unsigned __int64)auStack_40;
  }
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xffffffff8007000e;
  }
  else {
    if (-1 < (int)uVar3) {
      *(unsigned short *)(piVar2 + 0x17) = *(unsigned short *)(param_1 + 0x5c);
      uVar3 = fn_82EE21F8(0xffffffff8202e618,piVar2 + 0x14,param_1 + 0x50);
      if ((((-1 < (__int64)uVar3) &&
           (uVar3 = fn_82E52208(param_1,piVar2), -1 < (__int64)uVar3)) &&
          (uVar3 = fn_82E520C8(piVar2), -1 < (__int64)uVar3)) &&
         ((uVar3 = fn_82E518B8(param_1,piVar2), -1 < (__int64)uVar3 &&
          (uVar3 = (**(int (***)())*piVar2)(piVar2,0xffffffff8215466c,param_2), -1 < (__int64)uVar3))))
      goto LAB_82e5346c;
    }
    (**(int (***)())(*piVar2 + 0xac))(piVar2,1);
  }
LAB_82e5346c:
  fn_82E50F10(param_1 + 100);
  return uVar3;
}

