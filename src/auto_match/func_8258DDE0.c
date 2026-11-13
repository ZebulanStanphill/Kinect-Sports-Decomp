typedef unsigned char bool;
extern unsigned int *auStack_20;
extern int fn_82230300();
extern int fn_8258E488();


bool fn_8258DDE0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned char auStack_20 [8];
  
  piVar3 = (int *)fn_8258E488(auStack_20,param_1 + 0x1b0,param_2);
  iVar1 = *(int *)(param_1 + 0x1b4);
  iVar2 = *piVar3;
  fn_82230300(param_2,1,0);
  return iVar2 != iVar1;
}

