#define true 1
extern unsigned int *auStack_28;
extern int fn_82C10B28();
extern int fn_82C10F68();
extern unsigned int stack0x00000014;
extern unsigned int uStack00000014;
extern unsigned int uStack_2c;


unsigned __int64 fn_82C11050(unsigned int param_1)

{
  unsigned int uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uStack00000014;
  unsigned char abStack_30 [4];
  unsigned int uStack_2c;
  unsigned int auStack_28 [10];
  
  uStack_2c = 0;
  auStack_28[0] = 0;
  abStack_30[0] = 0;
  uStack00000014 = param_1;
  iVar3 = fn_82C10F68(param_1,&uStack_2c,auStack_28,abStack_30);
  if (iVar3 != -0x7fafffea) {
    uVar4 = (unsigned __int64)abStack_30[0];
    while (uVar1 = uStack00000014, -1 < iVar3) {
      uVar2 = (unsigned __int64)uStack00000014;
      if (*(int (***)())(uStack00000014 + 0x208) != (int (**)())0x0) {
        (**(int (***)())(uStack00000014 + 0x208))
                  (uVar2,*(unsigned int *)((int)(uVar4 << 2) + uStack00000014),uVar4,
                   *(unsigned int *)(uStack00000014 + 0x20c));
      }
      lVar5 = uVar4 * 4 + uVar2;
      iVar3 = fn_82C10B28(*(unsigned int *)(uVar1 + 0x1fc),2,lVar5);
      if (-1 < iVar3) {
        *(unsigned int *)lVar5 = 0;
      }
      uVar4 = (unsigned __int64)*(unsigned char *)(uStack00000014 + 0x200);
      while( true ) {
        if (0x7e < uVar4) goto LAB_82c1113c;
        if (*(int *)((int)(uVar4 << 2) + uStack00000014) != 0) break;
        uVar4 = uVar4 + 1 & 0xff;
      }
      *(char *)(uStack00000014 + 0x200) = (char)(uVar4 + 1);
      iVar3 = 0;
    }
  }
LAB_82c1113c:
  *(unsigned char *)(uStack00000014 + 0x200) = 0;
  fn_82C10B28(*(unsigned int *)(uStack00000014 + 0x1fc),2,&stack0x00000014);
  return 0;
}

