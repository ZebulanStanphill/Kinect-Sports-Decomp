extern int fn_82FFFC20();
extern int fn_8302BBA8();


void fn_8303C690(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0x14);
  dVar4 = (double)fn_82FFFC20(param_1 + 0x2c);
  iVar2 = *param_2;
  dVar4 = (double)(float)(dVar4 + (double)*(float *)(param_1 + 0x28));
  uVar3 = fn_8302BBA8(param_1);
  (**(int (***)())(iVar2 + 0xbc))
            (dVar4,param_2,0,*(unsigned int *)(param_1 + 0x34),param_4,uVar1 >> 3 & 0x1f,uVar3);
  return;
}

