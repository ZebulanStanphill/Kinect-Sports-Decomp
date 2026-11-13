#define true 1
extern unsigned int *auStack_50;
extern int fn_82522DF8();
extern int fn_82598DF0();
extern int fn_82599308();
extern int fn_8259A230();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern int fn_82CE5410();
extern int fn_82CE93A0();
extern int fn_82CE93F8();
extern int fn_82D80A60();
extern int fn_82D80A68();
extern int fn_82D80A78();
extern int fn_82D81720();
extern int fn_82D818E0();
extern int fn_82D842D0();
extern unsigned int lbl_8218E8FC;
extern unsigned int lbl_83296E18;
extern unsigned int uStack_3c;


void fn_825991A0(double param_1,double param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  char cVar5;
  unsigned int *puVar4;
  unsigned char auStack_50 [20];
  unsigned int uStack_3c;
  
  iVar2 = fn_82599308();
  if ((*(int *)(iVar2 + 4) == 0) && ((param_4 & 0xffffffff) != 0)) {
    fn_82CE93A0(auStack_50);
    uStack_3c = 0xb;
    iVar2 = fn_82CE5410();
    uVar1 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x1c0);
    if ((uVar1 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82CE93F8(uVar1,auStack_50);
    }
    iVar2 = fn_82599308();
    *(unsigned int *)(iVar2 + 4) = uVar3;
    iVar2 = fn_82599308();
    fn_82D80A78(*(unsigned int *)(iVar2 + 4));
    fn_82598DF0(auStack_50);
  }
  if ((double)(float)(param_2 * (double)lbl_8218E8FC) < param_1) {
    param_1 = (double)(float)(param_2 * (double)lbl_8218E8FC);
  }
  fn_82D80A60(param_1,param_3);
  fn_82D818E0(param_3);
  while( true ) {
    cVar5 = fn_82D80A68(param_3);
    if (cVar5 != '\0') break;
    if ((param_4 & 0xffffffff) == 0) {
      fn_82D81720(param_2,param_3);
    }
    else {
      iVar2 = fn_82599308();
      fn_82D842D0(param_2,param_3,*(unsigned int *)(iVar2 + 4),param_4);
    }
  }
  puVar4 = (unsigned int *)fn_82522DF8(0x40);
  *puVar4 = 5;
  fn_82A1BB18();
  uVar3 = fn_8259A230();
  puVar4[1] = uVar3;
  puVar4[2] = 0;
  sync(1);
  fn_82BFE128(lbl_83296E18,puVar4);
  return;
}

