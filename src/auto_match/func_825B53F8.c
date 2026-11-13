extern int fn_8260B5C0();
extern int fn_8284D840();
extern int fn_82851250();


void fn_825B53F8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
                  unsigned __int64 param_9,unsigned __int64 param_10)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  
  puVar1 = *(unsigned int **)(param_4 + 8);
  fn_82851250(param_2,param_3,*puVar1,puVar1[1],param_6,param_7,param_9,param_10,param_5);
  uVar4 = fn_8284D840(*puVar1);
  if ((uVar4 & 8) != 0) {
    fn_8260B5C0(param_1,puVar1,param_6,param_7);
  }
  iVar2 = *(int *)(*(int *)(param_4 + 0x14) + 0x1fc);
  if (iVar2 != 0) {
    piVar3 = *(int **)(iVar2 + 0x1a8);
    (**(int (***)())(*piVar3 + 4))(param_1,param_2,param_3,piVar3,param_5,param_6,param_7);
  }
  return;
}

