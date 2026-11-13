extern unsigned int *auStack_210;
extern int fn_82C41CA0();
extern int fn_82C41E28();
extern int _blkmov();
extern unsigned int lbl_820F9000;
extern unsigned int lbl_820F9040;
extern unsigned int uStack_200;
extern unsigned int uStack_204;
extern unsigned int uStack_208;


/* WARNING: Type propagation algorithm not settling */

void fn_82C41F90(unsigned __int64 param_1,int param_2,__int64 param_3,int *param_4,unsigned int param_5)

{
  int *piVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  unsigned int auStack_210 [2];
  struct { unsigned int first; unsigned int second; } stack_pair_208;

  unsigned int uStack_200;
  int aiStack_1f4 [105];
  
  uStack_200 = 0x40000000;
  stack_pair_208.first = 0x40000000;
  aiStack_1f4[2] = 0x8000000;
  auStack_210[0] = 2;
  aiStack_1f4[1] = 0x8000000;
  iVar5 = 0;
  if (0 < (int)param_5) {
    iVar4 = 0;
    do {
      stack_pair_208.second = *(unsigned int *)(&lbl_820F9000 + ((unsigned int)*(unsigned char *)(iVar5 + param_2) + iVar4) * 4);
      fn_82C41E28(param_1,&stack_pair_208.first,3,aiStack_1f4 + 1,auStack_210[0],aiStack_1f4 + 1,auStack_210
                   );
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 0x20;
    } while (iVar5 < (int)param_5);
  }
  uVar3 = (__int64)((int)param_5 >> 1) + (unsigned __int64)((int)param_5 < 0 && (param_5 & 1) != 0);
  if (0 < (int)uVar3) {
    _blkmov(param_3 + 4,aiStack_1f4 + 2,(uVar3 & 0x3fffffff) << 2);
  }
  iVar5 = 3;
  aiStack_1f4[1] = 0x8000000;
  aiStack_1f4[3] = 0x8000000;
  auStack_210[0] = 3;
  aiStack_1f4[2] = *(int *)(&lbl_820F9040 + (unsigned int)*(unsigned char *)(param_2 + 1) * 4) >> 3;
  if (3 < (int)param_5) {
    iVar4 = 0x30;
    do {
      stack_pair_208.second = *(unsigned int *)(&lbl_820F9000 + ((unsigned int)*(unsigned char *)(iVar5 + param_2) + iVar4) * 4);
      fn_82C41CA0(param_1,&stack_pair_208.first,3,aiStack_1f4 + 1,auStack_210[0],aiStack_1f4 + 1,auStack_210
                   );
      iVar5 = iVar5 + 2;
      iVar4 = iVar4 + 0x20;
    } while (iVar5 < (int)param_5);
  }
  if (0 < (int)uVar3) {
    piVar2 = aiStack_1f4;
    do {
      piVar1 = piVar2 + 2;
      piVar2 = piVar2 + 1;
      param_4 = param_4 + 1;
      *param_4 = *piVar1 - *piVar2;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

