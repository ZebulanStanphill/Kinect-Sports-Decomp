extern unsigned int *auStack_140;
extern unsigned int *auStack_14c;
extern unsigned int *auStack_150;
extern unsigned int *auStack_a0;
extern int fn_82520158();
extern int fn_82575FA8();
extern int XMemSet();
extern unsigned int lbl_82192734;
extern unsigned int lbl_821C8EA8;
extern unsigned int uStack_50;
extern unsigned int uStack_70;


unsigned int * fn_825C3C00(unsigned int *param_1,int *param_2)

{
  int in_r0;
  unsigned int uVar1;
  unsigned __int64 in_r8;
  unsigned int *puVar2;
  __int64 lVar3;
  double dVar4;
  double dVar5;
  unsigned int in_register_00010480;
  unsigned int in_register_00010484;
  unsigned int in_register_00010488;
  unsigned int in_vr72;
  unsigned char auStack_150 [4];
  unsigned char auStack_14c [12];
  unsigned char auStack_140 [160];
  unsigned char auStack_a0 [48];
  unsigned char uStack_70;
  unsigned int uStack_50;
  
  param_1[1] = param_2;
  *param_1 = &lbl_821C8EA8;
  dVar4 = (double)*(float *)(*param_2 + 0x828);
  XMemSet(auStack_140,0,0x100);
  uStack_50 = 0xfeeb1e0;
  puVar2 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_00010480;
  puVar2[1] = in_register_00010484;
  puVar2[2] = in_register_00010488;
  puVar2[3] = in_vr72;
  uStack_70 = 1;
  fn_82520158(0xffffffff821c8e80,auStack_14c,0);
  fn_82520158(0xffffffff821c8e94,auStack_150,0);
  puVar2 = param_1 + 3;
  lVar3 = 2;
  dVar5 = (double)lbl_82192734;
  do {
    uVar1 = fn_82575FA8(dVar4,dVar5,param_2,auStack_14c,auStack_140,1,0,in_r8,0);
    puVar2[-1] = uVar1;
    uVar1 = fn_82575FA8(dVar4,dVar5,param_2,auStack_150,auStack_140,1,0,in_r8,0);
    lVar3 = lVar3 + -1;
    puVar2 = puVar2 + 1;
    *puVar2 = uVar1;
  } while (lVar3 != 0);
  return param_1;
}

