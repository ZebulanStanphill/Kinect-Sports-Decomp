extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int fStack_5c;
extern int fn_8242DE00();
extern int fn_8244C8E0();
extern int fn_82528FA8();
extern int fn_8252CAF8();
extern int fn_82536690();
extern unsigned int lbl_82193E50;
extern unsigned int lbl_821CA460;
extern unsigned int uStack_68;


void fn_824482A0(int *param_1)

{
  unsigned __int64 in_r7;
  unsigned int uVar1;
  unsigned int uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int aiStack_70 [2];
  unsigned __int64 uStack_68;
  unsigned char auStack_60 [4];
  float fStack_5c;
  unsigned char auStack_50 [80];
  
  uVar1 = 0;
  dVar5 = (double)lbl_82193E50;
  dVar4 = (double)lbl_821CA460;
  do {
    uVar2 = 0;
    if (*(int *)(param_1[0x12] + 0x1c) != 0) {
      do {
        uStack_68 = (unsigned __int64)uVar2;
        dVar3 = (double)(*(float *)(param_1[0x12] + 0x18) * (float)uStack_68 +
                        *(float *)(param_1[0x12] + 0x14));
        (**(int (***)())(*param_1 + 0x1c))(dVar3,auStack_50,param_1);
        (**(int (***)())(*param_1 + 0x20))(dVar3,auStack_60,param_1);
        fStack_5c = (float)((double)fStack_5c + dVar5);
        aiStack_70[0] =
             fn_82528FA8(dVar4,*(unsigned int *)(*(int *)(*(int *)param_1[0x10] + 0x174) + 0x9c)
                               ,(unsigned __int64)(unsigned int)param_1[0x12] + 0x10,auStack_50,auStack_60,in_r7,0)
        ;
        if (*(int *)(aiStack_70[0] + 400) != 0) {
          *(unsigned int *)(**(int **)(*(int *)(aiStack_70[0] + 400) + 400) + 0x118) = 1;
        }
        fn_8252CAF8(aiStack_70[0],0,0);
        fn_82536690(param_1[0x12],aiStack_70);
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(unsigned int *)(param_1[0x12] + 0x1c));
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  fn_8244C8E0(param_1);
  fn_8242DE00(*(unsigned int *)param_1[0x10],((unsigned int *)param_1[0x10])[0x45]);
  return;
}

