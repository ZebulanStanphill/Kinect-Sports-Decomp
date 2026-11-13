#define true 1
#define _uStack00000030 ((*(unsigned __int64*)&uStack00000030))
#define _uStack00000038 ((*(unsigned __int64*)&uStack00000038))
extern int fn_82CF8740();
extern unsigned int uStack00000030;
extern unsigned int uStack00000034;
extern unsigned int uStack00000038;


void fn_82CF84B0(int *param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int uStack00000030;
  unsigned int uStack00000034;
  unsigned int uStack00000038;
  
  _uStack00000030 = param_4;
  _uStack00000038 = param_5;
  if (param_1[2] < param_1[1] << 1) {
    fn_82CF8740(param_1,param_2,(param_1[2] + 1) * 2);
  }
  iVar1 = *param_1;
  iVar3 = 1;
  uVar4 = (param_3 >> 4) * -0x61c8864f & param_1[2];
  iVar5 = uVar4 * 0x10;
  iVar2 = *(int *)(iVar1 + iVar5);
  do {
    if (iVar2 == -1) {
LAB_82cf8554:
      param_1[1] = iVar3 + param_1[1];
      *(unsigned int *)(iVar1 + iVar5) = param_3;
      iVar5 = iVar5 + *param_1;
      *(unsigned int *)(iVar5 + 4) = uStack00000030;
      *(unsigned int *)(iVar5 + 8) = uStack00000034;
      *(unsigned int *)(iVar5 + 0xc) = uStack00000038;
      return;
    }
    if (*(unsigned int *)(iVar1 + iVar5) == param_3) {
      iVar3 = 0;
      goto LAB_82cf8554;
    }
    uVar4 = uVar4 + 1 & param_1[2];
    iVar5 = uVar4 * 0x10;
    iVar2 = *(int *)(iVar5 + *param_1);
  } while( true );
}

