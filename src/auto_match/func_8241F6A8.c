extern unsigned int *auStack_1030;
extern unsigned int *auStack_830;
extern int fn_82293E20();
extern int fn_822ABA88();
extern int fn_82358FD8();
extern int fn_82528EE0();
extern unsigned int lbl_82193A18;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8241F6A8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  unsigned char auStack_1030 [2048];
  unsigned char auStack_830 [2096];
  
  piVar1 = (int *)param_1;
  iVar2 = *piVar1;
  piVar1 = *(int **)(*(int *)(piVar1[6] * 0x1ac + piVar1[2]) * 4 + **(int **)(iVar2 + 8));
  fn_822ABA88(*(unsigned int *)(piVar1[4] * 4 + *piVar1),0);
  dVar4 = (double)*(float *)(iVar2 + 0x65c);
  dVar3 = (double)*(float *)(iVar2 + 0x658);
  if ((param_1 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(iVar2 + 0x2b20)) {
    iVar2 = *(int *)(iVar2 + 0xd4);
    fn_82358FD8(*(unsigned int *)(iVar2 + 0x1c),auStack_1030,0x400,lbl_82193A18);
    fn_82528EE0(auStack_830,0x400,auStack_1030,param_2);
    fn_82293E20(dVar3,dVar4,iVar2);
  }
  return;
}

