extern int fn_82D45088();


void fn_82D455F0(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  unsigned int uVar1;
  unsigned short *puVar2;
  
  puVar2 = (unsigned short *)(param_2 * 2 + *(int *)(param_1 + 0x1c));
  uVar1 = (unsigned int)*(unsigned short *)((param_2 + 2) * 2 + *(int *)(param_1 + 0x1c));
  fn_82D45088(param_1,(unsigned int)*puVar2 * 3,(unsigned int)puVar2[1] * 3,uVar1 * 3,uVar1,param_4,
                    param_5,param_6);
  return;
}

