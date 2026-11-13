typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82631920();
extern int fn_82639F78();


void fn_828535D8(int param_1,int param_2,__int64 param_3)

{
  unsigned short uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  int aiStack_230 [140];
  
  puVar5 = (unsigned int *)0x0;
  thunk_FUN_82838b18(aiStack_230,(unsigned __int64)*(unsigned int *)(param_2 + 0x14) + param_3,param_1 + 0xa4,
                     *(unsigned short *)(param_2 + 0x1a),*(unsigned short *)(param_2 + 0x1c));
  lVar6 = 0;
  if (*(short *)(param_2 + 0x18) != 0) {
    do {
      uVar1 = *(unsigned short *)(param_2 + 0x1a);
      bVar2 = false;
      if (uVar1 < *(unsigned short *)(param_2 + 0x1c)) {
        iVar3 = 0;
        if (uVar1 != 0) {
          piVar4 = aiStack_230;
          do {
            if (*(char *)(*(int *)(param_2 + 0x10) + iVar3) ==
                *(char *)(*(int *)(param_2 + 0xc) + (int)lVar6)) {
              bVar2 = true;
              puVar5 = (unsigned int *)
                       ((unsigned int)*(unsigned char *)(*(int *)(param_2 + 4) + *piVar4) * 0x10 +
                       *(int *)(param_2 + 8));
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 < (int)(unsigned int)uVar1);
        }
      }
      if (!bVar2) {
        puVar5 = (unsigned int *)
                 ((unsigned int)*(unsigned char *)(*(int *)(param_2 + 0xc) + (int)lVar6) * 0x10 +
                 *(int *)(param_2 + 8));
      }
      fn_82639F78(*(unsigned int *)(param_1 + 4),lVar6,puVar5[1],0,*puVar5,
                        0x8000000000000000 >>
                        ((((0x5f - lVar6) * 0x5556 & 0xffffffffU) >> 0x10) + 0x20 & 0x7f));
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x18));
  }
  fn_82631920(*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_2 + 0x24));
  return;
}

