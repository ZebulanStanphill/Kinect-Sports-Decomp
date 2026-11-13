#define true 1
extern int fn_82A40BA8();
extern int fn_82A43A30();
extern int fn_82A45660();
extern int fn_82A459A8();
extern int fn_82A4F4E0();


void fn_82A48470(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  fn_82A459A8();
  for (uVar2 = 0; uVar2 < *(unsigned int *)(param_1 + 0x134); ++uVar2) {
      fn_82A45660(*(unsigned int *)(param_1 + 0x14c),uVar2);
  }
  *(unsigned int *)(param_1 + 0x150) = 0;
  *(unsigned int *)(param_1 + 0x148) = 0;
  while( true ) {
    iVar1 = fn_82A40BA8(param_1 + 400);
    if (iVar1 == 0) break;
    fn_82A43A30(param_1,*(unsigned int *)(iVar1 + 8),0);
    fn_82A4F4E0(iVar1);
  }
  return;
}

