extern int fn_82FFFC20();
extern int fn_8302BBA8();


void fn_8303CB30(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  double dVar5;
  
  dVar5 = (double)fn_82FFFC20(param_1 + 0x2c);
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  uVar2 = *(unsigned int *)(param_1 + 0x34);
  dVar5 = (double)(float)(dVar5 + (double)*(float *)(param_1 + 0x28));
  iVar3 = *param_2;
  uVar4 = fn_8302BBA8(param_1);
  (**(int (***)())(iVar3 + 0xac))(dVar5,param_2,0,uVar2,param_4,uVar1 >> 3 & 0x1f,uVar4);
  return;
}

