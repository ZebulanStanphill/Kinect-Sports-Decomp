#define true 1
extern int fn_822509A0();
extern int fn_82359C18();
extern int fn_823D5BA8();


void fn_823D6088(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *apuStack_40 [16];
  
  fn_823D5BA8();
  fn_823D5BA8(param_1 + 0x10);
  fn_823D5BA8(param_1 + 0x20);
  fn_823D5BA8(param_1 + 0x30);
  fn_823D5BA8(param_1 + 0x40);
  fn_823D5BA8(param_1 + 0x50);
  fn_823D5BA8(param_1 + 0x60);
  fn_823D5BA8(param_1 + 0x70);
  puVar1 = *(unsigned int **)(param_1 + 0x84);
  apuStack_40[0] = (unsigned int *)*puVar1;
  while( true ) {
    puVar2 = apuStack_40[0];
    if (apuStack_40[0] == puVar1) break;
    fn_82359C18(apuStack_40[0] + 6);
    puVar2[10] = 0;
    fn_82359C18(puVar2 + 0xc);
    puVar2[0x10] = 0;
    fn_822509A0(apuStack_40);
    puVar1 = *(unsigned int **)(param_1 + 0x84);
  }
  fn_82359C18(param_1 + 0x90);
  *(unsigned int *)(param_1 + 0xa0) = 0;
  fn_82359C18(param_1 + 0xa8);
  *(unsigned int *)(param_1 + 0xb8) = 0;
  fn_82359C18(param_1 + 0xc0);
  *(unsigned int *)(param_1 + 0xd0) = 0;
  fn_82359C18(param_1 + 0xd8);
  *(unsigned int *)(param_1 + 0xe8) = 0;
  fn_82359C18(param_1 + 0xf0);
  *(unsigned int *)(param_1 + 0x100) = 0;
  fn_82359C18(param_1 + 0x108);
  *(unsigned int *)(param_1 + 0x118) = 0;
  fn_82359C18(param_1 + 0x120);
  *(unsigned int *)(param_1 + 0x130) = 0;
  fn_82359C18(param_1 + 0x138);
  *(unsigned int *)(param_1 + 0x148) = 0;
  fn_82359C18(param_1 + 0x150);
  *(unsigned int *)(param_1 + 0x160) = 0;
  fn_82359C18(param_1 + 0x168);
  *(unsigned int *)(param_1 + 0x178) = 0;
  fn_82359C18(param_1 + 0x180);
  *(unsigned int *)(param_1 + 400) = 0;
  fn_82359C18(param_1 + 0x198);
  *(unsigned int *)(param_1 + 0x1a8) = 0;
  fn_82359C18(param_1 + 0x1b0);
  *(unsigned int *)(param_1 + 0x1c0) = 0;
  fn_82359C18(param_1 + 0x1c8);
  *(unsigned int *)(param_1 + 0x1d8) = 0;
  fn_82359C18(param_1 + 0x1e0);
  *(unsigned int *)(param_1 + 0x1f0) = 0;
  fn_82359C18(param_1 + 0x1f8);
  *(unsigned int *)(param_1 + 0x208) = 0;
  fn_82359C18(param_1 + 0x210);
  *(unsigned int *)(param_1 + 0x220) = 0;
  fn_82359C18(param_1 + 0x228);
  *(unsigned int *)(param_1 + 0x238) = 0;
  fn_82359C18(param_1 + 0x240);
  *(unsigned int *)(param_1 + 0x250) = 0;
  fn_82359C18(param_1 + 600);
  *(unsigned int *)(param_1 + 0x268) = 0;
  fn_82359C18(param_1 + 0x270);
  *(unsigned int *)(param_1 + 0x280) = 0;
  fn_82359C18(param_1 + 0x288);
  *(unsigned int *)(param_1 + 0x298) = 0;
  fn_82359C18(param_1 + 0x2a0);
  *(unsigned int *)(param_1 + 0x2b0) = 0;
  fn_82359C18(param_1 + 0x2b8);
  *(unsigned int *)(param_1 + 0x2c8) = 0;
  fn_82359C18(param_1 + 0x2d0);
  *(unsigned int *)(param_1 + 0x2e0) = 0;
  fn_82359C18(param_1 + 0x2e8);
  *(unsigned int *)(param_1 + 0x2f8) = 0;
  return;
}

