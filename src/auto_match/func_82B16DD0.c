#define true 1
extern int fn_82B82D28();
extern unsigned int iStack_30;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;


unsigned __int64
fn_82B16DD0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned int *param_5,
             unsigned int *param_6)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uStack00000024;
  int iStack_30;
  int aiStack_2c;
  
  uStack00000024 = (unsigned int)param_3;
  if ((*(unsigned int *)(param_2 + 8) & 0x3f80) == 0x80) {
    while( true ) {
      puVar1 = *(unsigned int **)(param_2 + 0x30);
      if ((*(unsigned int *)(puVar1[3] + 8) & 0x3f80) == 16000) break;
      fn_82B82D28(*(unsigned int *)(param_2 + 0x2c),param_3,&aiStack_2c,&stack0x00000024,
                        &iStack_30,0,param_2,0);
      if (iStack_30 != 0) goto LAB_82b16e04;
      for (iVar2 = *(int *)(aiStack_2c + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if ((*(int *)(iVar2 + 0x10) != 0) && (*(int *)(iVar2 + 0x10) != param_2)) goto LAB_82b16e04;
      }
      if ((*(unsigned int *)(aiStack_2c + 8) & 0x3f80) != 0x80) goto LAB_82b16e04;
      param_3 = (unsigned __int64)uStack00000024;
      param_2 = aiStack_2c;
    }
    *param_4 = puVar1[3];
    uVar3 = 1;
    *param_5 = (*puVar1 >> 5 & 0xff) >> ((unsigned int)((param_3 & 0xffffffff) << 1) & 0x3e) & 3;
    *param_6 = *puVar1 & 0x1f;
  }
  else {
LAB_82b16e04:
    uVar3 = 0;
  }
  return uVar3;
}

