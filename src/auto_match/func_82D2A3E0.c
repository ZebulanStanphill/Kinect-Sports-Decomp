extern unsigned int *auStack_80;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D0B6F8();
extern int fn_82D0B888();
extern int fn_82D20448();
extern int fn_82D27FF0();
extern int fn_82D28488();
extern int fn_82D29220();
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int uStack_70;


int * fn_82D2A3E0(double param_1,double param_2,int *param_3,unsigned __int64 param_4,unsigned __int64 param_5
                   ,int *param_6)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int *puVar5;
  int iVar6;
  double dVar7;
  unsigned char auStack_80 [8];
  struct { int first; int second; } stack_pair_78;

  unsigned int uStack_70;
  
  puVar1 = (unsigned int *)fn_82D28488(param_4);
  *param_3 = 10;
  piVar2 = (int *)fn_82D29220(auStack_80,puVar1,param_5);
  iVar4 = *piVar2;
  *param_3 = iVar4;
  if (iVar4 == 0) {
    stack_pair_78.first = 0;
    stack_pair_78.second = 0;
    uStack_70 = 0x80000000;
    fn_82D20448(puVar1);
    fn_82D27FF0(puVar1,&stack_pair_78.first,1,1);
    iVar4 = 0;
    if (0 < stack_pair_78.second) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(*(int *)(iVar6 + stack_pair_78.first) + 0x7b8);
        if (iVar3 == 0) {
          *param_3 = 2;
        }
        else {
          dVar7 = (double)fn_82D0B888(iVar3);
          if ((dVar7 < param_2) || (dVar7 = (double)fn_82D0B6F8(iVar3), dVar7 < param_1)) {
            *param_3 = 8;
          }
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < stack_pair_78.second);
    }
    iVar4 = 0;
    if (*param_3 == 0) {
      if (0 < stack_pair_78.second) {
        iVar6 = 0;
        do {
          puVar5 = (unsigned int *)(iVar6 + stack_pair_78.first);
          iVar3 = fn_82CE5410();
          if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_6,4);
          }
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 4;
          *(unsigned int *)(param_6[1] * 4 + *param_6) = *puVar5;
          param_6[1] = param_6[1] + 1;
        } while (iVar4 < stack_pair_78.second);
      }
    }
    else if (0 < stack_pair_78.second) {
      iVar6 = 0;
      do {
        puVar5 = *(unsigned int **)(iVar6 + stack_pair_78.first);
        if (puVar5 != (unsigned int *)0x0) {
          (**(int (***)())*puVar5)(puVar5,1);
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar4 < stack_pair_78.second);
    }
    iVar4 = fn_82CE5410();
    stack_pair_78.second = 0;
    if ((uStack_70 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),stack_pair_78.first,uStack_70 & 0x3fffffff,4);
    }
    stack_pair_78.first = 0;
    uStack_70 = 0x80000000;
  }
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  return param_3;
}

