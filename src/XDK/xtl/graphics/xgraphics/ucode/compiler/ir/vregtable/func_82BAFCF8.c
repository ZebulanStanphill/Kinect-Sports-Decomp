#define true 1
extern unsigned int *auStack_40;
extern int fn_82B7BD28();
extern int fn_82B7BEB0();
extern int fn_82BAF3D8();
extern int fn_82BC05A8();
extern int fn_82BC0618();
extern int fn_82BC06D0();


void fn_82BAFCF8(int *param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned char auStack_40 [16];
  unsigned int *puStack_30;
  unsigned int *puStack_2c;
  
  fn_82BC06D0(auStack_40,param_1[1]);
  while( true ) {
    puStack_2c = puStack_30;
    if (puStack_30 == (unsigned int *)0x0) break;
    (**(int (***)())*puStack_30)(puStack_30,1);
    fn_82BC0618(auStack_40);
  }
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    fn_82BC05A8(iVar1);
    fn_82B7BEB0(*(unsigned int *)(iVar1 + -4),iVar1 + -4);
  }
  uVar2 = *(unsigned int *)(*param_1 + 0x5ac);
  puVar3 = (unsigned int *)fn_82B7BD28(uVar2,0x1c);
  puVar4 = puVar3 + 1;
  *puVar3 = uVar2;
  if (puVar4 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x0;
  }
  else {
    fn_82BAF3D8(puVar4,*(unsigned int *)(*param_1 + 0x5ac),0xffffffff82baf478,0xffffffff82baf468,
                  0x10);
  }
  param_1[1] = (int)puVar4;
  return;
}

