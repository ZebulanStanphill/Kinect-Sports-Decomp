#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_82F68CC0();


unsigned __int64 fn_82AA89B8(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  
  puVar1 = *(unsigned int **)(param_1 + 0xe8);
  if ((int)puVar1[1] < 0) {
    uVar2 = 0xfffffffffffffff5;
  }
  else {
    puVar1[2] = 0;
    if ((int)puVar1[1] < 0x28) {
      uVar2 = 0xfffffffffffffff4;
    }
    else {
      fn_82F68CC0(param_1,*puVar1,0x28);
      uVar2 = 0;
      puVar1[2] = puVar1[2] + 0x28;
      *(unsigned short *)(param_1 + 8) = CONCAT11(*(unsigned char *)(param_1 + 9),*(unsigned char *)(param_1 + 8))
      ;
      *(unsigned short *)(param_1 + 10) =
           CONCAT11(*(unsigned char *)(param_1 + 0xb),*(unsigned char *)(param_1 + 10));
      *(unsigned short *)(param_1 + 0xc) =
           CONCAT11(*(unsigned char *)(param_1 + 0xd),*(unsigned char *)(param_1 + 0xc));
      *(unsigned short *)(param_1 + 0xe) =
           CONCAT11(*(unsigned char *)(param_1 + 0xf),*(unsigned char *)(param_1 + 0xe));
      *(unsigned int *)(param_1 + 0x10) =
           (unsigned int)*(unsigned char *)(param_1 + 0x13) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x12) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x11) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x10);
      *(unsigned int *)(param_1 + 0x14) =
           (unsigned int)*(unsigned char *)(param_1 + 0x17) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x16) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x15) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x14);
      *(unsigned int *)(param_1 + 0x18) =
           (unsigned int)*(unsigned char *)(param_1 + 0x1b) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x1a) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x19) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x18);
      *(unsigned int *)(param_1 + 0x1c) =
           (unsigned int)*(unsigned char *)(param_1 + 0x1f) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x1e) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x1d) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x1c);
      *(unsigned int *)(param_1 + 0x20) =
           (unsigned int)*(unsigned char *)(param_1 + 0x23) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x22) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x21) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x20);
      *(unsigned int *)(param_1 + 0x24) =
           (unsigned int)*(unsigned char *)(param_1 + 0x27) << 0x18 | (unsigned int)*(unsigned char *)(param_1 + 0x26) << 0x10 |
           (unsigned int)*(unsigned char *)(param_1 + 0x25) << 8 | (unsigned int)*(unsigned char *)(param_1 + 0x24);
    }
  }
  return uVar2;
}

