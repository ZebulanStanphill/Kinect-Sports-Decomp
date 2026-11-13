#define true 1
#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))
extern int fn_83031460();
extern unsigned int uStack_18;


unsigned __int64 fn_83030830(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned int uStack_18;
  
  puVar1 = *(unsigned int **)(param_1 + 0xe4);
  do {
    if (puVar1 == (unsigned int *)0x0) {
LAB_83030864:
      uStack_18 = CONCAT13((unsigned char)((param_3 & 1) << 4) | (((unsigned __int64)(uStack_18) >> 0) & 0xFF) & 7,(((unsigned __int64)(uStack_18) >> 8) & 0xFFFFFF));
      iVar3 = fn_83031460((unsigned int *)(param_1 + 0xe4),param_2,0,
                                (unsigned __int64)uStack_18 << 0x20);
      uVar2 = 2;
      if (iVar3 != 0) {
        uVar2 = 1;
      }
      return uVar2;
    }
    if (puVar1[1] == param_2) {
      if (puVar1 != (unsigned int *)0xfffffff8) {
        *(unsigned char *)(puVar1 + 4) = (unsigned char)((param_3 & 0xff) << 4) & 0x10 | *(unsigned char *)(puVar1 + 4) & 0xef;
        return 1;
      }
      goto LAB_83030864;
    }
    puVar1 = (unsigned int *)*puVar1;
  } while( true );
}

