extern unsigned int *auStack_140;
extern int fn_828358A8();
extern int fn_828359F8();
extern int fn_82F64020();
extern int fn_82F6D000();


void fn_82836748(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                  __int64 param_5,char param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_140 [320];
  
  uVar2 = fn_828358A8(*(unsigned int *)(param_1 + 8));
  auStack_140[0] = 0;
  if (param_6 == '\0') {
    fn_828359F8(param_1,auStack_140,param_5);
  }
  fn_82F64020(auStack_140,0x100,0xffffffff8201f424,auStack_140,uVar2,
                    *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x10));
  fn_82F6D000(param_2,0xffffffff8201f430,auStack_140);
  uVar3 = 0;
  uVar1 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x10);
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x10) != 0) {
    do {
      (**(int (***)())(**(int **)(param_1 + 8) + 4))
                (*(int **)(param_1 + 8),param_2,param_1,param_4,param_5 + 1,0,uVar3);
      uVar3 = uVar3 + 1;
      param_4 = param_4 + (unsigned __int64)uVar1;
    } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x10) + 0x10));
  }
  return;
}

