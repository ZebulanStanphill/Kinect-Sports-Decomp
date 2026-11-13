extern int fn_8252CAF8();
extern int fn_82569980();
extern int fn_8261D908();
extern unsigned int ltcg_pool_0_0f;


void fn_8260E528(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned char bVar5;
  
  iVar4 = param_3;
  iVar3 = fn_82569980(param_1,*(unsigned char *)(param_3 + 0x10));
  if (iVar3 != -1) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xd8) + iVar3 * 0x30 + 0x10);
    if (iVar3 != 0) {
      if (param_5 == 0) {
        *(unsigned int *)(iVar3 + 0x300) = ltcg_pool_0_0f;
      }
      else if (param_5 == 2) {
        bVar5 = 0;
        if (*(int *)(iVar4 + 0x18) != 0) {
          bVar5 = 0;
          if (*(int *)(iVar3 + 0x8c0) != 0) {
            iVar2 = (unsigned int)*(unsigned char *)(iVar4 + 0x1c) * 4;
            iVar1 = iVar2 >> 3;
            bVar5 = *(unsigned char *)(iVar1 + *(int *)(iVar3 + 0x8c0) + 0xd4) >>
                    (iVar2 + iVar1 * -8 & 0x3fU) & 0xf;
          }
          fn_8252CAF8(iVar3,(unsigned int)*(unsigned char *)(iVar4 + 0x1c),*(unsigned char *)(param_3 + 0x1d));
        }
        fn_8261D908((double)*(float *)(param_3 + 0x14),iVar3);
        if (*(int *)(param_3 + 0x18) != 0) {
          fn_8252CAF8(iVar3,*(unsigned char *)(param_3 + 0x1c),bVar5);
        }
      }
    }
  }
  return;
}

