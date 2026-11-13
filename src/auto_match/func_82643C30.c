#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8264D6C0();


void fn_82643C30(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  puVar1 = *(unsigned int **)(param_1 + 0xc);
  lVar4 = (((param_3 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_3 & 0x1fffffff) + -0x40000000
  ;
  *(unsigned int *)param_2 = (int)lVar4;
  lVar2 = (((param_2 & 0xffffffff) >> 0x14) + 0x200 & 0x1000) + (param_2 & 0x1fffffff) + -0x40000000
  ;
  *(unsigned int **)(param_1 + 4) = (unsigned int *)param_2;
  lVar3 = ((unsigned __int64)((unsigned int)puVar1 >> 0x14) + 0x200 & 0x1000) + (ZEXT48(puVar1) & 0x1fffffff) +
          -0x40000000;
  *(int *)(param_1 + 0xc) = (int)param_3 + -4;
  enforceInOrderExecutionIO();
  fn_8264D6C0(lVar2,lVar4,0,puVar1,lVar2,lVar3);
  *puVar1 = (int)lVar2;
  enforceInOrderExecutionIO();
  fn_8264D6C0(lVar3,lVar3 + 0x10);
  return;
}

