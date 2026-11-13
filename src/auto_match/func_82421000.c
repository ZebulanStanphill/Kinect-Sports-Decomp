extern unsigned int *auStack_60;
extern unsigned int fStack_44;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_82250A18();
extern int fn_822CD140();
extern int fn_8236D0D0();
extern int fn_824180B0();
extern int fn_8241CE30();
extern int fn_82421510();
extern int fn_82539560();
extern unsigned int lbl_832975B0;
extern unsigned int stack0x00000020;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


void fn_82421000(unsigned __int64 param_1,int param_2)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  double dVar3;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned char auStack_60 [28];
  float fStack_44;
  
  stack_pair_70.first = 0;
  stack_pair_70.second = 0;
  iVar2 = **(int **)(param_2 + 0xc);
  puVar1 = (unsigned int *)((unsigned int)(&stack0x00000020 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  uStack_68 = 0;
  dVar3 = (double)fn_82539560(param_1,(double)*(float *)(iVar2 + 0x83c),
                               (double)*(float *)(iVar2 + 0x840),(double)*(float *)(iVar2 + 0x844),
                               (double)*(float *)(iVar2 + 0x848));
  fn_82230110(auStack_60,0xffffffff821b8218);
  fStack_44 = (float)dVar3;
  fn_8236D0D0(&stack_pair_70.first,auStack_60);
  fn_82230300(auStack_60,1,0);
  fn_824180B0(*(unsigned int **)(param_2 + 0xc),(unsigned __int64)**(unsigned int **)(param_2 + 0xc) + 0x14a0,
                    &stack0x00000020,&stack_pair_70.first);
  fn_82421510(param_1,param_2);
  iVar2 = lbl_832975B0;
  if (lbl_832975B0 == 0) {
    iVar2 = fn_82250A18();
  }
  if (*(char *)(iVar2 + 4) != '\0') {
    fn_8241CE30(param_1,*(unsigned int *)(param_2 + 0xc),param_2,6);
  }
  fn_822CD140(&stack_pair_70.first);
  return;
}

