typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_822CD140();
extern int fn_824BF8A8();
extern int fn_82520780();
extern int fn_82552788();
extern int fn_825529B0();
extern unsigned int iStack_70;
extern unsigned int lbl_8218E8E8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


unsigned __int64 fn_82508160(int param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  int *piVar5;
  bool bVar6;
  struct { int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  
  lVar2 = fn_82520780((double)*(float *)(param_2 + 0x84),0xffffffff83265a28);
  piVar5 = *(int **)(param_1 + 0x3c);
  uVar4 = 0;
  do {
    if (piVar5 == *(int **)(param_1 + 0x40)) {
LAB_825081cc:
      if ((*(float *)(param_1 + 0x10) <= ltcg_pool_0_0f) ||
         (bVar1 = false, *(int *)(param_2 + 0x88) != 0)) {
        bVar1 = true;
      }
      iVar3 = fn_825529B0(param_1 + 4);
      if (iVar3 == 0) {
        bVar6 = true;
      }
      else {
        bVar6 = *(int *)(param_2 + 0x88) != 0;
      }
      if ((param_3 != 0) ||
         (((int)lVar2 != (int)lVar2 + -1 + (unsigned int)(lVar2 == 0) && ((unsigned int)LZCOUNT(uVar4) >> 5 != 0))))
      {
        if ((bVar6) && (bVar1)) {
          stack_pair_70.first = 0;
          stack_pair_70.second = 0;
          uStack_68 = 0;
          fn_82552788(*(unsigned int *)(param_1 + 0x14),param_1 + 4,param_2,
                            *(int *)(param_1 + 0x50),*(int *)(param_1 + 0x50) != 0,0,0,&stack_pair_70.first);
          fn_822CD140(&stack_pair_70.first);
          *(unsigned int *)(param_1 + 0x10) = lbl_8218E8E8;
          stack_pair_70.second = *(unsigned int *)(param_2 + 0x94);
          stack_pair_70.first = param_2;
          fn_824BF8A8(param_1 + 0x3c,&stack_pair_70.first);
          return 1;
        }
        if ((*(int *)(param_1 + 0x24) != 0) && (param_4 != 0)) {
          *(int *)(param_1 + 0x18) = param_2;
          *(int *)(param_1 + 0x1c) = param_3;
          *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_2 + 0x8c);
        }
      }
      return 0;
    }
    if (*piVar5 == param_2) {
      uVar4 = 1;
      goto LAB_825081cc;
    }
    piVar5 = piVar5 + 2;
  } while( true );
}

