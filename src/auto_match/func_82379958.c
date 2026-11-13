typedef unsigned char bool;
#define false 0
extern unsigned int *auStack_44;
extern unsigned int *auStack_60;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_822C1730();
extern int fn_822C18B8();
extern int fn_822CD140();
extern int fn_825354B8();
extern int fn_82535298();
extern int fn_82536288();
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


void fn_82379958(int *param_1,int *param_2)

{
  bool bVar1;
  int aiStack_90;
  struct { unsigned int first; unsigned int second; } stack_pair_80;

  unsigned int uStack_78;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned char auStack_60 [28];
  unsigned char auStack_44 [36];

  if (param_2 == (int *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 != 0;
  }
  if (bVar1) {
    stack_pair_80.first = 0;
    stack_pair_80.second = 0;
    uStack_78 = 0;
    fn_82230110(auStack_60,0xffffffff821acd0c);
    fn_82230110(auStack_44,0xffffffff821acd04);
    fn_822C1730(&stack_pair_80.first,auStack_60);
    fn_82230300(auStack_44,1,0);
    fn_82230300(auStack_60,1,0);
    aiStack_90 = *param_2;
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    uStack_68 = 0;
    if (param_1 + 8 == (int *)0x0) {
      aiStack_90 =
           fn_825354B8(&aiStack_90,*(unsigned int *)(*(int *)(*param_1 + 0x4c) + 0x84c),
                             &stack_pair_70.first,&stack_pair_80.first);
    }
    else {
      aiStack_90 =
           fn_82535298(&aiStack_90,param_1 + 8,0,
                             *(unsigned int *)(*(int *)(*param_1 + 0x4c) + 0x84c),&stack_pair_70.first,
                             &stack_pair_80.first);
    }
    fn_82536288(&aiStack_90);
    fn_822CD140(&stack_pair_70.first);
    fn_822C18B8(&stack_pair_80.first);
  }
  return;
}
