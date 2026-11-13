extern unsigned int *auStack_58;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern int fn_828A0C20();
extern int fn_828EEAA8();
extern int fn_828EFB68();
extern int fn_82F68CC0();
extern unsigned int uStack_60;
extern unsigned int uStack_a4;


__int64 fn_828EFBE8(int param_1,unsigned __int64 *param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  char cVar4;
  unsigned int *puVar3;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned char auStack_b0 [12];
  unsigned int uStack_a4;
  unsigned char auStack_a0 [64];
  unsigned __int64 uStack_60;
  unsigned char auStack_58 [88];
  
  uVar2 = fn_828EEAA8();
  if (((uVar2 & 0xffffffff) == (unsigned __int64)*(unsigned int *)(param_1 + 4)) ||
     (cVar4 = fn_828A0C20(param_2,uVar2 + 0xc), cVar4 != '\0')) {
    lVar6 = 0xd;
    puVar1 = &uStack_a4;
    do {
      puVar5 = puVar1;
      puVar1 = puVar5 + 1;
      *puVar1 = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    *(unsigned char *)(puVar5 + 2) = 0;
    uStack_60 = *param_2;
    fn_82F68CC0(auStack_58,auStack_a0,0x35);
    puVar3 = (unsigned int *)fn_828EFB68(auStack_b0,param_1,uVar2,&uStack_60);
    uVar2 = (unsigned __int64)*puVar3;
  }
  return uVar2 + 0x14;
}

