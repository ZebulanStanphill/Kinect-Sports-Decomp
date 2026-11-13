#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_b0;
extern int fn_82CF84B0();
extern int fn_82D00D50();
extern int fn_82D00E00();
extern unsigned int uStack_b8;
extern unsigned int uStack_c0;


unsigned __int64 fn_82CF7F50(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uStack_c0;
  unsigned int uStack_b8;
  unsigned char auStack_b0 [128];
  
  RtlEnterCriticalSection(param_1 + 0x18);
  uVar1 = (**(int (***)())(**(int **)(param_1 + 0x34) + 4))(*(int **)(param_1 + 0x34),param_3);
  iVar3 = (**(int (***)())(**(int **)(param_1 + 0x34) + 0x2c))(*(int **)(param_1 + 0x34),uVar1,param_3);
  *(int *)(param_1 + 0x48) = iVar3 + *(int *)(param_1 + 0x48);
  uStack_b8 = CONCAT13('\x01' - (param_2 == 0),(((unsigned __int64)(uStack_b8) >> 8) & 0xFFFFFF));
  if (*(int *)(param_1 + 4) == 0) {
    uStack_c0 = 0;
  }
  else {
    uVar2 = fn_82D00D50(*(int *)(param_1 + 4),auStack_b0,0x20);
    uStack_c0 = fn_82D00E00(param_1 + 8,auStack_b0,uVar2);
  }
  fn_82CF84B0(*(unsigned int *)(param_1 + 0x44),*(unsigned int *)(param_1 + 0x38),uVar1,
                  CONCAT44(uStack_c0,(int)param_3),(unsigned __int64)uStack_b8 << 0x20);
  RtlLeaveCriticalSection(param_1 + 0x18);
  return uVar1;
}

