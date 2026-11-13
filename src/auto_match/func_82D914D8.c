typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82CE4040();
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DAF6D0();
extern unsigned int iStack_9c;
extern unsigned int uStack_98;


void fn_82D914D8(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piStack_a0;
  int iStack_9c;
  unsigned int uStack_98;
  int aiStack_94 [17];
  
  iVar4 = *(int *)(param_2 + 0xcc);
  piStack_a0 = aiStack_94;
  iStack_9c = 0;
  uStack_98 = 0x80000010;
  iVar6 = 0;
  if (*(short *)(param_2 + 0x20c) != 0) {
    iVar7 = 0;
    do {
      piVar1 = *(int **)(iVar7 + *(int *)(param_2 + 0x208));
      (**(int (***)())(*piVar1 + 0x10))(piVar1,&piStack_a0);
      bVar2 = true;
      iVar3 = 0;
      piVar5 = piStack_a0;
      if (0 < iStack_9c) {
        do {
          if ((*(char *)(*piVar5 + 0xe8) != '\x05') && (*piVar5 != param_2)) {
            bVar2 = false;
            break;
          }
          iVar3 = iVar3 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar3 < iStack_9c);
      }
      if (bVar2) {
        iVar3 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_3,4);
        }
        *(int **)(param_3[1] * 4 + *param_3) = piVar1;
        param_3[1] = param_3[1] + 1;
        fn_82CE4040(piVar1);
        fn_82DAF6D0(iVar4,piVar1);
        *(unsigned char *)(iVar4 + 0x25) = *(unsigned char *)(iVar4 + 0x25) & 0xf3 | 4;
        if (*(short *)(iVar4 + 0x22) == -1) {
          *(short *)(iVar4 + 0x22) = (short)*(unsigned int *)(param_1 + 0x44);
          iVar3 = fn_82CE5410();
          if (*(unsigned int *)(param_1 + 0x44) == (*(unsigned int *)(param_1 + 0x48) & 0x3fffffff)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),(int *)(param_1 + 0x40),4);
          }
          *(int *)(*(int *)(param_1 + 0x44) * 4 + *(int *)(param_1 + 0x40)) = iVar4;
          *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (iVar6 < (int)(unsigned int)*(unsigned short *)(param_2 + 0x20c));
  }
  iVar4 = fn_82CE5410();
  iStack_9c = 0;
  if ((uStack_98 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),piStack_a0,uStack_98 & 0x3fffffff,4);
  }
  return;
}

