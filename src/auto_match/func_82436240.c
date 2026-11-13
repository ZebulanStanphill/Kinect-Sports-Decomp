extern unsigned int *auStack_70;
extern int fn_82292100();
extern int fn_82292100();
extern int fn_82358FD8();


void fn_82436240(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned char auStack_70 [64];

  piVar1 = *(int **)(param_1 + 0x40);
  if (piVar1[0x3e] == 0) {
    fn_82358FD8(*piVar1,auStack_70,0x20,0xffffffff821aa224);
    uVar2 = *param_3;
    fn_82292100(*(unsigned int *)(**(int **)(param_1 + 0x40) + 0xd4),param_2,(int)uVar2 / 100,
                    (unsigned __int64)uVar2 + (__int64)((int)uVar2 / 100) * -100,auStack_70,param_4);
  }
  else {
    uVar2 = *param_3;
    fn_82292100(*(unsigned int *)(*piVar1 + 0xd4),param_2,(int)uVar2 / 100,
                    (unsigned __int64)uVar2 + (__int64)((int)uVar2 / 100) * -100,param_4);
  }
  return;
}
