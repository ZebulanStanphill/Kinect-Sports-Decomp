#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_9c;
extern unsigned int *auStack_a0;
extern int fn_8289DF30();
extern int fn_828A02B8();
extern int fn_828A22D0();
extern int fn_8289DF30();
extern int fn_828A80B0();
extern int fn_828A7138();
extern int fn_828A80B0();
extern unsigned int iStack_c4;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_4c;
extern unsigned int uStack_b0;
extern unsigned int uStack_b4;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_828A8160(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int aiStack_d0;
  unsigned int *puStack_c8;
  int iStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned char *puStack_b8;
  unsigned int uStack_b4;
  unsigned int uStack_b0;
  unsigned int *puStack_ac;
  unsigned char *puStack_a8;
  unsigned int *puStack_a4;
  unsigned char auStack_a0 [4];
  unsigned char auStack_9c [80];
  unsigned int uStack_4c;
  unsigned char *puStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;

  puStack_c8 = (unsigned int *)0x0;
  iStack_c4 = 0;
  RtlEnterCriticalSection(param_1 + 3);
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 4) == 1)) {
    aiStack_d0 = param_1[2];
    if ((int *)aiStack_d0 == (int *)**(unsigned int **)*param_1) {
      aiStack_d0 = *(int *)**(unsigned int **)*param_1;
    }
    fn_828A7138(param_1,0,&aiStack_d0,1);
  }
  fn_828A22D0(&puStack_c8,param_1);
  RtlLeaveCriticalSection(param_1 + 3);
  puVar2 = puStack_c8;
  puStack_48 = auStack_9c;
  auStack_a0[0] = 0;
  uStack_4c = 10;
  puStack_b8 = auStack_a0;
  uStack_44 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  puVar1 = (unsigned int *)*puStack_c8;
  uStack_c0 = *puVar1;
  uStack_bc = uStack_c0;
  uStack_b4 = uStack_c0;
  uStack_40 = param_2;
  fn_828A02B8(&uStack_c0);
  puStack_a8 = auStack_a0;
  puStack_ac = *(unsigned int **)*puVar2;
  uStack_b0 = *puStack_ac;
  puStack_a4 = puStack_ac;
  fn_828A02B8(&uStack_b0);
  fn_828A80B0(puVar2[2],CONCAT44(uStack_b0,puStack_ac),CONCAT44(puStack_a8,puStack_a4),
                CONCAT44(uStack_c0,uStack_bc),CONCAT44(puStack_b8,uStack_b4));
  if (uStack_3c < uStack_38) {
    fn_828A80B0(param_1,puVar1);
  }
  fn_8289DF30(auStack_a0);
  if (iStack_c4 != 0) {
    fn_8289DF30();
  }
  return;
}
