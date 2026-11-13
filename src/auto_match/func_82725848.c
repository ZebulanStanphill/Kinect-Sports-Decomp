extern int fn_8267C4C8();
extern int fn_8267C4F0();
extern int fn_82683F88();
extern int fn_82687270();
extern int fn_827249B8();


int * fn_82725848(int *param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *apiStack_20 [2];
  
  if (*(short *)(param_1[0x27] + 0x1a) == 0) {
    return (int *)0x0;
  }
  fn_827249B8(apiStack_20,param_1[0x29],param_1[0x27] + 0x10);
  if (apiStack_20[0] == (int *)0x0) {
    lVar1 = (**(int (***)())(*param_1 + 0x94))(param_1);
    if (lVar1 == 0) goto LAB_82725934;
    fn_8267C4C8(lVar1);
    uVar3 = 0xffffffff82010f08;
  }
  else {
    uVar2 = (**(int (***)())(*apiStack_20[0] + 8))();
    if ((uVar2 & 0xff00) == 0x200) {
      if (apiStack_20[0] != (int *)0x0) {
        fn_82687270();
        return apiStack_20[0];
      }
      return (int *)0x0;
    }
    lVar1 = (**(int (***)())(*param_1 + 0x94))(param_1);
    if (lVar1 == 0) goto LAB_82725934;
    fn_8267C4C8(lVar1);
    uVar3 = 0xffffffff82010ea8;
  }
  fn_82683F88(lVar1 + 0xc,uVar3,*(unsigned short *)(param_1[0x27] + 0x1a),
                    *(unsigned short *)((int)param_1 + 0x12),
                    ((unsigned __int64)*(unsigned int *)(param_1[0x27] + 0x48) & 0xfffffffc) + 8);
  fn_8267C4F0(lVar1);
LAB_82725934:
  if (apiStack_20[0] != (int *)0x0) {
    fn_82687270();
  }
  return (int *)0x0;
}

