extern unsigned int *auStack_2740;
extern int fn_82CFBE40();
extern unsigned int stack0x00000020;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack00000040;
extern unsigned int uStack00000048;


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82CEDE90(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  unsigned __int64 uStack00000040;
  unsigned __int64 uStack00000048;
  unsigned char auStack_2740 [10024];
  
  uStack00000020 = param_3;
  uStack00000028 = param_4;
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  uStack00000040 = param_7;
  uStack00000048 = param_8;
  thunk_FUN_82f6ede8(auStack_2740,0x2728,param_2,&stack0x00000020);
  piVar1 = *(int **)(param_1 + 8);
  iVar2 = *piVar1;
  uVar3 = fn_82CFBE40(auStack_2740);
  (**(int (***)())(iVar2 + 0x10))(piVar1,auStack_2740,uVar3);
  return;
}

