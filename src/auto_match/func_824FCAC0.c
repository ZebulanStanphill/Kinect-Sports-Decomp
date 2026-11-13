extern unsigned int *auStack_60;
extern int fn_824A1C90();
extern int fn_824FCD30();
extern int fn_8250DA48();
extern int fn_8265C9E0();
extern int fn_827F04B0();
extern int fn_827F0FB8();
extern int fn_827F1148();
extern int fn_827F2038();
extern int fn_827F2D60();
extern int fn_827F2DD0();
extern int fn_827F3070();
extern int fn_827F46E8();
extern int fn_827F4818();
extern int fn_827F5708();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_30;
extern unsigned int uStack_34;


void fn_824FCAC0(int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar5;
  unsigned __int64 uVar3;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  double dVar7;
  unsigned char auStack_60 [44];
  unsigned int uStack_34;
  unsigned int uStack_30;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x18c) == 0) {
    uVar5 = (**(int (***)())(**(int **)(iVar1 + 0x8c0) + 0x4c))();
    *(unsigned int *)(iVar1 + 0x18c) = uVar5;
  }
  uVar5 = *(unsigned int *)(iVar1 + 0x18c);
  uVar3 = fn_827F04B0(0x18c);
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6 = (unsigned int *)fn_827F1148(uVar3,uVar5,0);
  }
  puVar2 = (unsigned int *)param_1[1];
  if (puVar6 != puVar2) {
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    param_1[1] = (int)puVar6;
  }
  uVar3 = fn_827F2038(0x110);
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6 = (unsigned int *)fn_827F3070(uVar3,uVar5);
  }
  puVar2 = (unsigned int *)param_1[2];
  if (puVar6 != puVar2) {
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    param_1[2] = (int)puVar6;
  }
  uVar3 = fn_827F2038(0x110);
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6 = (unsigned int *)fn_827F3070(uVar3,uVar5);
  }
  puVar2 = (unsigned int *)param_1[3];
  if (puVar6 != puVar2) {
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    param_1[3] = (int)puVar6;
  }
  fn_827F4818(auStack_60,0,param_1[2],param_1[3]);
  uStack_34 = 1;
  uStack_30 = lbl_8218E8E8;
  uVar3 = fn_827F46E8(0x118);
  if ((uVar3 & 0xffffffff) == 0) {
    puVar6 = (unsigned int *)0x0;
  }
  else {
    puVar6 = (unsigned int *)fn_8250DA48(uVar3,auStack_60);
  }
  puVar2 = (unsigned int *)param_1[4];
  if (puVar6 != puVar2) {
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,1);
    }
    param_1[4] = (int)puVar6;
  }
  fn_827F5708((double)lbl_821CA460,param_1[4]);
  fn_827F0FB8(param_1[1],param_1[2],1);
  fn_827F0FB8(param_1[1],param_1[3],1);
  fn_827F0FB8(param_1[1],param_1[4],1);
  dVar7 = (double)ltcg_pool_0_0f;
  fn_827F2DD0(dVar7,uVar5,param_1[1]);
  uVar5 = *(unsigned int *)(*param_1 + 0x8c0);
  uVar3 = fn_8265C9E0(0xe0);
  if ((uVar3 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_824A1C90(uVar3,uVar5,param_1[5]);
  }
  fn_827F2D60(dVar7,param_1[3],uVar4);
  fn_824FCD30(param_1);
  return;
}

