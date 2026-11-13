extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8253D630();
extern int fn_82A1EFC0();
extern int fn_82D81078();
extern int fn_82D85E48();
extern int fn_82D86288();
extern int fn_82D86660();
extern int fn_82D888D0();
extern int fn_82D88EF8();
extern int fn_82D890C8();
extern int fn_82D891F0();


void fn_8253D1C0(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char auStack_50 [16];
  unsigned char auStack_40 [64];
  
  if (((*(short *)(param_1 + 0x60) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) &&
     (*(unsigned int **)(param_1 + 0x50) < *(unsigned int **)(param_1 + 0x54))) {
    fn_82D81078(*(unsigned int *)(param_2 + 0x1f8),**(unsigned int **)(param_1 + 0x50),1);
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_40,0,4);
  }
  *(unsigned short *)(param_1 + 0x60) = 0;
  *(unsigned int *)(param_1 + 0x54) = *(unsigned int *)(param_1 + 0x50);
  if ((*(short *)(param_1 + 0xb0) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(unsigned int **)(param_1 + 0xa4);
    for (puVar1 = *(unsigned int **)(param_1 + 0xa0); puVar1 < puVar2; puVar1 = puVar1 + 1) {
      fn_82D88EF8(*(unsigned int *)(param_2 + 0x1f8),*puVar1);
    }
  }
  *(unsigned short *)(param_1 + 0xb0) = 0;
  *(unsigned int *)(param_1 + 0xa4) = *(unsigned int *)(param_1 + 0xa0);
  if ((*(short *)(param_1 + 0xc4) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(unsigned int **)(param_1 + 0xb8);
    for (puVar1 = *(unsigned int **)(param_1 + 0xb4); puVar1 < puVar2; puVar1 = puVar1 + 1) {
      fn_82D890C8(auStack_50,*(unsigned int *)(param_2 + 0x1f8),*puVar1);
    }
  }
  *(unsigned short *)(param_1 + 0xc4) = 0;
  *(unsigned int *)(param_1 + 0xb8) = *(unsigned int *)(param_1 + 0xb4);
  if ((*(short *)(param_1 + 0x74) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(unsigned int **)(param_1 + 100);
    puVar1 = *(unsigned int **)(param_1 + 0x68);
    fn_82D85E48(*(int *)(param_2 + 0x1f8),puVar2);
    if (*(int *)(param_2 + 0x2ec) == 0) {
      for (; puVar2 < puVar1; puVar2 = puVar2 + 1) {
        fn_8253D630(param_2,*puVar2);
      }
    }
  }
  *(unsigned short *)(param_1 + 0x74) = 0;
  *(unsigned int *)(param_1 + 0x68) = *(unsigned int *)(param_1 + 100);
  if ((*(short *)(param_1 + 0x88) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(unsigned int **)(param_1 + 0x7c);
    for (puVar1 = *(unsigned int **)(param_1 + 0x78); puVar1 < puVar2; puVar1 = puVar1 + 1) {
      fn_82D888D0(*(unsigned int *)(param_2 + 0x1f8),*puVar1);
    }
  }
  *(unsigned short *)(param_1 + 0x88) = 0;
  *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x78);
  if ((*(short *)(param_1 + 0x9c) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    puVar2 = *(unsigned int **)(param_1 + 0x90);
    for (puVar1 = *(unsigned int **)(param_1 + 0x8c); puVar1 < puVar2; puVar1 = puVar1 + 1) {
      fn_82D891F0(*(unsigned int *)(param_2 + 0x1f8),*puVar1);
    }
  }
  *(unsigned short *)(param_1 + 0x9c) = 0;
  *(unsigned int *)(param_1 + 0x90) = *(unsigned int *)(param_1 + 0x8c);
  if ((*(short *)(param_1 + 0xd8) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    fn_82D86288(*(int *)(param_2 + 0x1f8),*(unsigned int *)(param_1 + 200));
  }
  *(unsigned short *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xcc) = *(unsigned int *)(param_1 + 200);
  if ((*(short *)(param_1 + 0xec) != 0) && (*(int *)(param_2 + 0x1f8) != 0)) {
    fn_82D86660(*(int *)(param_2 + 0x1f8),*(unsigned int *)(param_1 + 0xdc));
  }
  *(unsigned short *)(param_1 + 0xec) = 0;
  *(unsigned int *)(param_1 + 0xe0) = *(unsigned int *)(param_1 + 0xdc);
  return;
}

