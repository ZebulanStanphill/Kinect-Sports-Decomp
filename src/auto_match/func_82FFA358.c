#define true 1
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF8938();
extern int fn_82FF8988();
extern int fn_82FFE0F0();
extern int fn_82FFE158();
extern unsigned int lbl_831BC768;
extern unsigned int uStack_7c;
extern unsigned int uStack_8c;


unsigned __int64 fn_82FFA358(__int64 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned char abStack_90 [4];
  unsigned int uStack_8c;
  unsigned char auStack_88 [8];
  unsigned char auStack_80 [4];
  unsigned int uStack_7c;
  
  uVar6 = 1;
  do {
    do {
      if ((param_2 == 0) || ((int)uVar6 != 1)) {
        return uVar6;
      }
      lVar5 = param_1 + 4;
      uVar6 = fn_82FF8938(lVar5,auStack_80,8);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
      iVar4 = param_2 + -8;
      uVar3 = 0;
      param_2 = iVar4;
    } while (uStack_7c == 0);
    while (uVar6 = fn_82FF8938(lVar5,&uStack_8c,4), param_2 = iVar4, (int)uVar6 == 1) {
      uVar6 = fn_82FF8938(lVar5,abStack_90,1);
      param_2 = iVar4 + -4;
      if ((int)uVar6 != 1) break;
      iVar4 = iVar4 + -5;
      iVar1 = fn_82FFE0F0(param_1 + 0x41c,uStack_8c);
      if (iVar1 == 0) {
        iVar1 = fn_82FA5060(lbl_831BC768,(unsigned __int64)abStack_90[0] + 5);
        if (iVar1 == 0) {
          uVar6 = 0x34;
          param_2 = iVar4;
        }
        else {
          *(unsigned char *)((unsigned int)abStack_90[0] + iVar1) = 0x2e;
          *(unsigned char *)((unsigned int)abStack_90[0] + iVar1 + 1) = 0x62;
          *(unsigned char *)((unsigned int)abStack_90[0] + iVar1 + 2) = 0x6e;
          *(unsigned char *)((unsigned int)abStack_90[0] + iVar1 + 3) = 0x6b;
          *(unsigned char *)((unsigned int)abStack_90[0] + iVar1 + 4) = 0;
          uVar6 = fn_82FF8938(lVar5,iVar1,abStack_90[0]);
          if ((int)uVar6 == 1) {
            iVar4 = iVar4 - (unsigned int)abStack_90[0];
            piVar2 = (int *)fn_82FFE158(param_1 + 0x41c,uStack_8c);
            if (piVar2 != (int *)0x0) {
              *piVar2 = iVar1;
              goto LAB_82ffa4d0;
            }
            uVar6 = 0x34;
          }
          fn_82FA5190(lbl_831BC768,iVar1);
          param_2 = iVar4;
        }
        break;
      }
      fn_82FF8988(lVar5,abStack_90[0],auStack_88);
      iVar4 = iVar4 - (unsigned int)abStack_90[0];
LAB_82ffa4d0:
      uVar3 = uVar3 + 1;
      param_2 = iVar4;
      if (uStack_7c <= uVar3) break;
    }
  } while( true );
}

