extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern int fn_82FEF5A0();
extern int fn_82FFE0F0();
extern int fn_83015B10();
extern int fn_83017108();
extern int fn_83034FA0();
extern unsigned int lbl_821AAD20;


void fn_83017A30(__int64 param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  char cVar3;
  float *pfVar2;
  int iVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  unsigned char auStack_50 [4];
  struct { float first; float second; } stack_pair_4c;

  
  iVar4 = param_2[3];
  if ((iVar4 == 2) || (iVar4 == 1)) {
    (**(int (***)())(*(int *)*param_2 + 0x50))();
  }
  else if (iVar4 == 0) {
    iVar4 = param_2[4];
    uVar1 = param_2[2];
    dVar6 = (double)lbl_821AAD20;
    dVar7 = dVar6;
    if (iVar4 != param_2[5]) {
      do {
        cVar3 = fn_83017108(param_1,*(unsigned int *)(iVar4 + 4),uVar1,&stack_pair_4c.first,auStack_50);
        if (cVar3 == '\0') {
          pfVar2 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(unsigned int *)(iVar4 + 4));
          dVar5 = dVar6;
          if (pfVar2 != (float *)0x0) {
            dVar5 = (double)*pfVar2;
          }
          stack_pair_4c.first = (float)dVar5;
        }
        dVar5 = (double)fn_83015B10((double)stack_pair_4c.first,iVar4 + 8);
        iVar4 = iVar4 + 0x14;
        dVar7 = (double)(float)(dVar5 + dVar7);
      } while (iVar4 != param_2[5]);
    }
    stack_pair_4c.second = (float)dVar7;
    (**(int (***)())(*(int *)*param_2 + 4))((int *)*param_2,(short)param_2[1],&stack_pair_4c.second,4);
  }
  else if (iVar4 == 4) {
    iVar4 = param_2[4];
    uVar1 = param_2[2];
    dVar6 = (double)lbl_821AAD20;
    dVar7 = dVar6;
    if (iVar4 != param_2[5]) {
      do {
        cVar3 = fn_83017108(param_1,*(unsigned int *)(iVar4 + 4),uVar1,&stack_pair_4c.first,auStack_50);
        if (cVar3 == '\0') {
          pfVar2 = (float *)fn_82FFE0F0(param_1 + 0x61c,*(unsigned int *)(iVar4 + 4));
          dVar5 = dVar6;
          if (pfVar2 != (float *)0x0) {
            dVar5 = (double)*pfVar2;
          }
          stack_pair_4c.first = (float)dVar5;
        }
        dVar5 = (double)fn_83015B10((double)stack_pair_4c.first,iVar4 + 8);
        iVar4 = iVar4 + 0x14;
        dVar7 = (double)(float)(dVar5 + dVar7);
      } while (iVar4 != param_2[5]);
    }
    stack_pair_4c.second = (float)dVar7;
    fn_82FEF5A0(*param_2,(short)param_2[1],&stack_pair_4c.second,4);
  }
  else {
    fn_83034FA0(*param_2);
  }
  return;
}

