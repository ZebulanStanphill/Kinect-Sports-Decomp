extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BAFE48();
extern int fn_82BC0088();
extern int fn_82BC0DD8();
extern unsigned char fn_82BC2580(int *);
extern int fn_82BC2958();
extern int fn_82BC2E10();
extern int fn_82BC3EF8();
extern int fn_82BC5538();


void fn_82BA10A0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned char cVar7;
  int lVar8;
  
  uVar4 = fn_82BAFE48(*(unsigned int *)(param_1 + 0xac),0x17,0);
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x5ac);
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x1c);
  uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x6c) + 0x20);
  puVar5 = (unsigned int *)fn_82B7BD28(uVar1,0x3c4);
  *puVar5 = uVar1;
  if (puVar5 + 1 != (unsigned int *)0x0) {
    piVar6 = (int *)fn_82BC3EF8(puVar5 + 1,*(unsigned int *)(param_1 + 0xc));
  } else { piVar6=0; }
  fn_82BC2958(piVar6,0,uVar2);
  fn_82BC2958(piVar6,1,uVar3);
  fn_82BC2958(piVar6,2,uVar4);
  lVar8 = 0;
  do {
    (*(int (**)())(*piVar6 + 0x58))(piVar6,2,lVar8,0);
    lVar8 = lVar8 + 1;
  } while ((int)lVar8 < 4);
  fn_82BC0DD8(uVar3,*(unsigned int *)(param_1 + 0x6c),piVar6);
  fn_82BC2E10(*(unsigned int *)(param_1 + 0x6c));
  (*(int (**)())(**(int **)(param_1 + 0x6c) + 0x60))(*(int *)(param_1+0x6c));
  fn_82BC5538(*(unsigned int *)(param_1 + 0xa8),piVar6);
  cVar7 = fn_82BC2580(piVar6);
  if (cVar7 == '\0') {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","pInst->Validate()","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\cfg.cpp",0x4ae);
  }
  *(int **)(param_1 + 0x6c) = piVar6;
  puVar5 = (unsigned int *)
           fn_82BC0088(*(int *)(param_1 + 0x60),*(unsigned int *)(*(int *)(param_1 + 0x60) + 4))
  ;
  *puVar5 = piVar6;
  return;
}

