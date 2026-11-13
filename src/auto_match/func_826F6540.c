#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
extern int fn_826E7BF8();
extern int fn_826E7E60();


void fn_826F6540(int param_1,int param_2)

{
  int aiStack_30 [6];
  
  aiStack_30[0] = param_1 + 5;
  *(unsigned int *)(param_2 + 0x50) = 0;
  *(unsigned int *)(param_2 + 0x4c) = 0;
  *(unsigned int *)(param_2 + 0x54) = 0;
  *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 2;
  aiStack_30[1] = 0xffffffff;
  aiStack_30[3] = 0;
  *(unsigned int *)(param_2 + 0x44) =
       (unsigned int)CONCAT11(*(unsigned char *)(param_1 + 6),*(unsigned char *)(param_1 + 5));
  *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 1;
  aiStack_30[2] = 4;
  *(unsigned int *)(param_2 + 0x40) =
       (unsigned int)CONCAT11(*(unsigned char *)(param_1 + 8),*(unsigned char *)(param_1 + 7));
  *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 4;
  fn_826E7BF8(aiStack_30,param_2 + 0x24);
  if (*(char *)(param_1 + 4) != '\0') {
    *(unsigned char *)(param_2 + 0x4b) = *(unsigned char *)(param_2 + 0x4b) | 8;
    fn_826E7E60(aiStack_30,param_2 + 4);
  }
  return;
}

