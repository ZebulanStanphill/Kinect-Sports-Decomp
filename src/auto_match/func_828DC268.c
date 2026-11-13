typedef unsigned char bool;
extern int fn_8223C478();
extern int fn_8224BF30();
extern int fn_828B5D48();
extern int fn_828E9DB8();
extern int fn_828EA2D8();


void fn_828DC268(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  bool bVar4;
  
  uVar1 = *(unsigned int *)(param_1 + 0x94);
  fn_8223C478(param_2,4,0);
  fn_828E9DB8(param_2,uVar1,4);
  fn_8223C478(param_2,0x40,0);
  fn_828EA2D8(param_2,param_1 + 0x98,8);
  if (*(int *)(param_1 + 0x94) == 0) {
    bVar4 = *(int *)(param_1 + 0xa0) != 0;
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,bVar4,1);
    if (bVar4) {
      uVar1 = *(unsigned int *)(param_1 + 0xa0);
      fn_8223C478(param_2,4,0);
      fn_828E9DB8(param_2,uVar1,4);
    }
    uVar1 = *(unsigned int *)(param_1 + 0x80);
    fn_8223C478(param_2,2,0);
    fn_828E9DB8(param_2,uVar1,2);
    uVar1 = *(unsigned int *)(param_1 + 0x84);
    fn_8223C478(param_2,0x10,0);
    fn_828E9DB8(param_2,uVar1,0x10);
    bVar4 = 1 < *(unsigned int *)(param_1 + 0x88);
    fn_8223C478(param_2,1,0);
    fn_828E9DB8(param_2,bVar4,1);
    if (bVar4) {
      uVar2 = *(unsigned int *)(param_1 + 0x88);
      fn_8223C478(param_2,2,0);
      fn_828E9DB8(param_2,(unsigned __int64)uVar2 - 1,2);
    }
    uVar1 = *(unsigned int *)(param_1 + 0x8c);
    fn_8223C478(param_2,2,0);
    fn_828E9DB8(param_2,uVar1,2);
    uVar1 = *(unsigned int *)(param_1 + 0x90);
    fn_8223C478(param_2,0x10,0);
    fn_828E9DB8(param_2,uVar1,0x10);
    fn_828B5D48(param_1 + 0xc0,*(unsigned int *)(param_1 + 0x6c),param_2);
  }
  bVar4 = *(int *)(param_1 + 0xb4) != 0;
  fn_8223C478(param_2,1,0);
  fn_828E9DB8(param_2,bVar4,1);
  if (bVar4) {
    puVar3 = (unsigned int *)(param_1 + 0xa4);
    if (0xf < *(unsigned int *)(param_1 + 0xb8)) {
      puVar3 = (unsigned int *)*puVar3;
    }
    fn_8224BF30(param_2,puVar3,0);
  }
  return;
}

