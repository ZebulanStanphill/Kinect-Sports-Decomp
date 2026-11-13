extern unsigned int *auStack_70;
extern int fn_8268D008();
extern int fn_826CD200();
extern int memset();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;


void fn_826CDE90(int param_1,int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int *piVar2;
  unsigned char uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_70 [16];
  struct { int first; int second; } stack_pair_60;

  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0xac);
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      piVar2 = *(int **)((int)((uVar7 & 0xffffffff) << 2) + *(int *)(param_1 + 0xa8));
      if (*(short *)(piVar2 + 0x19) != 0) {
        if (param_2[1] == 0) {
          fn_826CD200(param_2,uVar6);
                    /* WARNING: Subroutine does not return */
          memset(*param_2,1,uVar6);
        }
        stack_pair_60.first = piVar2[0x11];
        stack_pair_60.second = piVar2[0x12];
        iStack_58 = piVar2[0x13];
        iStack_54 = piVar2[0x14];
        iStack_50 = piVar2[0x15];
        iStack_4c = piVar2[0x16];
        fn_8268D008(&stack_pair_60.first,auStack_70,param_3);
        iVar1 = *param_2;
        uVar3 = (**(int (***)())(*piVar2 + 0x30))(piVar2,auStack_70,1);
        uVar5 = uVar7 + 1;
        *(unsigned char *)(iVar1 + (int)uVar7) = uVar3;
        if ((uVar5 & 0xffffffff) < uVar6) {
          lVar4 = (uVar5 & 0x3fffffff) << 2;
          do {
            iVar1 = *(int *)((int)lVar4 + *(int *)(param_1 + 0xa8));
            if ((iVar1 != 0) && ((int)(unsigned int)*(unsigned short *)(piVar2 + 0x19) < *(int *)(iVar1 + 0x14)))
            break;
            lVar4 = lVar4 + 4;
            *(unsigned char *)(*param_2 + (int)uVar5) = *(unsigned char *)(*param_2 + (int)uVar7);
            uVar5 = uVar5 + 1;
          } while ((uVar5 & 0xffffffff) < uVar6);
        }
        uVar7 = uVar5 - 1;
      }
      uVar7 = uVar7 + 1;
    } while ((uVar7 & 0xffffffff) < uVar6);
  }
  return;
}

