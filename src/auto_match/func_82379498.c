extern unsigned int *auStack_40;
extern unsigned int fStack_24;
extern unsigned int fStack_4c;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_82534820();
extern int fn_82539560();
extern int fn_82552BE8();
extern unsigned int lbl_82005748;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D1C38;
extern unsigned int lbl_831D1C3C;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


void fn_82379498(int *param_1,int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  char cVar3;
  double dVar4;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  struct { unsigned int first; float second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned char auStack_40 [28];
  float fStack_24;
  
  if (param_2 != (int *)0x0) {
    if (*param_2 != 0) {
      cVar3 = fn_82534820();
      if (cVar3 != '\0') {
        puVar1 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
        uVar6 = puVar1[1];
        uVar7 = puVar1[2];
        uVar8 = puVar1[3];
        puVar2 = (unsigned int *)((int)&stack_pair_50.first + in_r0 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        dVar5 = (double)ltcg_pool_0_0f;
        dVar4 = (double)fn_82539560((double)stack_pair_50.second,(double)lbl_831D1C38,(double)lbl_831D1C3C,
                                     dVar5,(double)lbl_82005748);
        if (dVar5 < dVar4) {
          stack_pair_50.first = 0;
          stack_pair_50.second = 0.0;
          uStack_48 = 0;
          fn_82230110(auStack_40,0xffffffff821b3844);
          fStack_24 = (float)dVar4;
          fn_8236D0D0(&stack_pair_50.first,auStack_40);
          fn_82230300(auStack_40,1,0);
          fn_82552BE8(*(unsigned int *)(*param_1 + 0x4c),param_2,param_1 + 8,&stack_pair_50.first);
          fn_822CD140(&stack_pair_50.first);
        }
      }
    }
  }
  return;
}

