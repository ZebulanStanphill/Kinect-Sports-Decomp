extern int fn_82FA5060();
extern unsigned int lbl_831BC768;


int fn_83006278(int *param_1,unsigned int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int iVar2;
  
  iVar2 = param_1[10];
  if (iVar2 == 0) {
    if (param_2 == 0) {
      return 1;
    }
    puVar1 = (unsigned int *)fn_82FA5060(lbl_831BC768,0x40);
    param_1[10] = puVar1;
    if (puVar1 != (unsigned int *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0xffffffff;
      puVar1[4] = 0;
      *(unsigned char *)(puVar1 + 5) = 0;
      puVar1[6] = 0xffffffff;
      puVar1[7] = 0;
      *(unsigned char *)(puVar1 + 8) = 0;
      puVar1[9] = 0xffffffff;
      puVar1[10] = 0;
      *(unsigned char *)(puVar1 + 0xb) = 0;
      puVar1[0xc] = 0xffffffff;
      puVar1[0xd] = 0;
      *(unsigned char *)(puVar1 + 0xe) = 0;
      *(unsigned char *)(puVar1 + 0xf) = 0;
    }
    iVar2 = param_1[10];
    if (iVar2 == 0) {
      return 0x34;
    }
  }
  *(unsigned char *)(iVar2 + 0x3c) = *(unsigned char *)(iVar2 + 0x3c) & ~(unsigned char)param_3 | (unsigned char)param_2;
  (*(int (**)())(*param_1 + 0x14))(param_1);
  (*(int (**)())(*param_1 + 0xe4))(param_1,param_2,param_3);
  (*(int (**)())(*param_1 + 0x54))(param_1,param_2,param_3,0,0);
  return 1;
}

