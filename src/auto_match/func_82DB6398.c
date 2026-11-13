extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_83080BC0();
extern int fn_83089E78();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_58;


void fn_82DB6398(unsigned __int64 param_1,__int64 param_2,int param_3,unsigned __int64 param_4,int *param_5,
                  int *param_6)

{
  unsigned short uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  struct { int first; int second; } stack_pair_60;

  unsigned int uStack_58;
  
  stack_pair_60.first = 0;
  stack_pair_60.second = 0;
  uStack_58 = 0x80000000;
  fn_83089E78(param_2 + 0x10,&stack_pair_60.first);
  iVar4 = 0;
  if (0 < stack_pair_60.second) {
    iVar5 = 0;
    do {
      piVar6 = (int *)(iVar5 + stack_pair_60.first);
      if (param_3 <= (int)(unsigned int)*(unsigned char *)(*piVar6 + 0xc)) {
        iVar3 = (int)*(char *)(piVar6[1] + 0x10) + piVar6[1];
        if (*(char *)(iVar3 + 0xe8) != '\x05') {
          uVar1 = *(unsigned short *)(iVar3 + 0xa8);
          iVar2 = *param_5;
          if (7 < *(unsigned char *)((unsigned int)uVar1 + iVar2)) goto LAB_82db64b0;
          if (*(char *)(iVar3 + 0xe8) != '\x05') {
            if (*(char *)((unsigned int)uVar1 + iVar2) == '\0') {
              *(unsigned char *)((unsigned int)uVar1 + iVar2) = 1;
              fn_83080BC0(param_1,iVar3 + 0x130);
            }
          }
        }
        iVar3 = fn_82CE5410();
        if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
          fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_6,4);
        }
        *(int *)(param_6[1] * 4 + *param_6) = *piVar6;
        param_6[1] = param_6[1] + 1;
      }
LAB_82db64b0:
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 8;
    } while (iVar4 < stack_pair_60.second);
  }
  iVar4 = fn_82CE5410();
  stack_pair_60.second = 0;
  if ((uStack_58 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
              (*(int **)(iVar4 + 0x10),stack_pair_60.first,uStack_58 & 0x3fffffff,8);
  }
  return;
}

