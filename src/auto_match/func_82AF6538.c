extern int fn_82ABE250();
extern int fn_82AF5350();
extern int fn_82AF53F0();


void fn_82AF6538(unsigned __int64 param_1,unsigned int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  
  param_2[2] = param_2[2] | 0x4000;
  *param_2 = *param_2 & 0xe0001fff | (*param_2 & 0xffffe000) + param_4 * 0x2000 & 0x1fffe000;
  piVar1 = *(int **)(param_3 + 0x20);
  if ((piVar1 != (int *)0x0) && (piVar1[1] == 0)) {
    iVar2 = *piVar1;
    if ((*(unsigned int *)(iVar2 + 8) & 0x2000) != 0) {
      uVar3 = fn_82AF5350(param_1,param_2,iVar2);
      fn_82AF53F0(param_1,param_2);
      if ((uVar3 & 0xff) == 0) {
        puVar4 = (unsigned int *)fn_82ABE250(param_1,8,0x31);
        *puVar4 = param_2;
        puVar4[1] = *(unsigned int *)(iVar2 + 0x14);
        *(unsigned int **)(iVar2 + 0x14) = puVar4;
      }
    }
  }
  return;
}

