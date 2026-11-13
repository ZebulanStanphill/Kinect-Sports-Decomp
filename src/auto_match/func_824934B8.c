extern unsigned int *auStack_30;
extern int fn_822315A0();
extern int fn_82490F58();
extern int fn_82522588();
extern unsigned int iStack_2c;


double fn_824934B8(int param_1,int param_2)

{
  int iVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  double extraout_f1;
  double dVar5;
  double dVar6;
  unsigned char auStack_30 [4];
  int iStack_2c;
  __int64 lStack_28;
  
  piVar3 = (int *)fn_82522588(auStack_30,*(unsigned int *)**(unsigned int **)(param_1 + 0x5c));
  iVar1 = *(int *)(*piVar3 + 0x2b0);
  if (iStack_2c != 0) {
    fn_822315A0(iStack_2c);
  }
  uVar4 = (iVar1 - *(int *)(param_1 + 0x58)) - 1;
  uVar4 = 0xffffffffU - ((int)uVar4 >> 0x1f) & uVar4;
  uVar2 = fn_82490F58(param_2,*(unsigned int *)(param_1 + 0x34),*(unsigned int *)(param_1 + 0x38));
  lStack_28 = (__int64)(int)uVar4;
  dVar6 = extraout_f1;
  dVar5 = (double)fn_82490F58(uVar2,*(unsigned int *)(param_2 + 0x14));
  return (double)(float)(dVar6 * (double)lStack_28 + dVar5);
}

