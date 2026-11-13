extern unsigned int *auStack_40;
extern int fn_82C2B590();
extern int fn_82C2D110();
extern int fn_82E32F68();
extern int fn_82E33270();
extern int fn_82E345A8();
extern int fn_82E348F8();
extern int fn_82E34D90();
extern int fn_82E34E58();
extern int fn_82E36248();
extern int fn_82E36D28();
extern int fn_82E371E8();
extern int fn_82E37E98();
extern int fn_82E67C80();
extern int fn_82E68100();
extern int fn_82E6DA00();


unsigned __int64
fn_82E388C8(int *param_1,int param_2,unsigned __int64 param_3,int param_4,unsigned __int64 *param_5,
             unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 auStack_40;
  
  if (param_5 == (unsigned __int64 *)0x0) {
    uVar1 = fn_82E34D90(param_2,param_3,param_4,&auStack_40);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
  }
  else {
    auStack_40 = *param_5;
  }
  uVar1 = fn_82E34E58(param_1,param_2,param_3,param_4,&auStack_40,param_6);
  if ((-1 < (int)uVar1) && (uVar1 = fn_82E32F68(param_1), -1 < (int)uVar1)) {
    iVar2 = fn_82C2D110();
    *param_1 = iVar2;
    if (iVar2 == 0) {
      fn_82C2B590(param_1);
      uVar1 = 0xffffffff8007000e;
    }
    else {
      *(unsigned int *)(iVar2 + 0x334) = *(unsigned int *)(param_4 + 0x34);
      if (((((*(int *)(iVar2 + 0x48) != 3) &&
            (uVar1 = fn_82E36D28(param_1,param_2,param_3,param_4,&auStack_40,param_6),
            -1 < (int)uVar1)) &&
           (uVar1 = fn_82E371E8(param_1,*(unsigned int *)(param_2 + 0x54),
                                  *(unsigned int *)(param_2 + 0xc),*(unsigned int *)(param_2 + 0x28)),
           -1 < (int)uVar1)) &&
          ((*(int *)(param_2 + 100) == 0 ||
           (uVar1 = fn_82E6DA00(param_1,*(int *)(param_2 + 100),*(unsigned int *)(param_2 + 0x68))
           , -1 < (int)uVar1)))) &&
         ((uVar1 = fn_82E348F8(param_1), -1 < (int)uVar1 &&
          ((uVar1 = fn_82E33270(param_1), -1 < (int)uVar1 &&
           (uVar1 = fn_82E345A8(param_1), -1 < (int)uVar1)))))) {
        fn_82E36248(param_1);
        uVar1 = fn_82E37E98();
        if (-1 < (int)uVar1) {
          param_1[0x42d0] = (int)fn_82E68100;
          param_1[0x42d1] = (int)fn_82E67C80;
        }
      }
    }
  }
  return uVar1;
}

