#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_4c;
extern int fn_82E56A88();
extern int fn_82E56AF0();
extern int fn_82E56B70();
extern int fn_82EE55F8();
extern int fn_82EE5BE8();
extern unsigned int lbl_8202E618;
extern unsigned int lbl_8202E61C;
extern unsigned int lbl_8202E620;
extern unsigned int lbl_8202E624;
extern unsigned int lbl_82154A98;
extern unsigned int lbl_82154AA8;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_4e;
extern unsigned int uStack_50;


__int64 fn_82E572E8(int param_1,int *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  int iVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned short uStack_50;
  unsigned short uStack_4e;
  unsigned short auStack_4c [6];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  
  if (param_2 == (int *)0x0) {
    lVar3 = -0x7fffbffd;
  }
  else {
    uStack_40 = lbl_8202E618;
    uStack_3c = lbl_8202E61C;
    uStack_38 = lbl_8202E620;
    uStack_34 = lbl_8202E624;
    lVar3 = (**(int (***)())(*param_2 + 0xc))(param_2,&uStack_40);
    if (-1 < lVar3) {
      pbVar5 = (unsigned char *)&uStack_40;
      pbVar6 = &lbl_82154A98;
      do {
        bVar1 = *pbVar6;
        bVar2 = *pbVar5;
        if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar5 = pbVar5 + 1;
      } while (pbVar6 != &lbl_82154AA8);
      if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
        uVar8 = 0;
        uStack_50 = 0;
        lVar3 = fn_82EE55F8(param_2,&uStack_50);
        if (-1 < lVar3) {
          iVar7 = param_1 + 0x44;
          iVar4 = fn_82E56AF0(iVar7,uStack_50,0xffffffffffffffff);
          if (iVar4 == 0) {
LAB_82e57468:
            lVar3 = -0x7ff8fff2;
          }
          else if (uStack_50 != 0) {
            do {
              lVar3 = fn_82EE5BE8(param_2,uVar8,&uStack_4e,auStack_4c);
              if (lVar3 < 0) {
                return lVar3;
              }
              if (uVar8 < *(unsigned int *)(param_1 + 0xac)) {
                if (*(unsigned int *)(param_1 + 0xac) <= uVar8) goto LAB_82e57468;
                iVar4 = fn_82E56B70(iVar7,uVar8,CONCAT22(auStack_4c[0],uStack_4e));
              }
              else {
                iVar4 = fn_82E56A88(iVar7,CONCAT22(auStack_4c[0],uStack_4e),0);
              }
              if (iVar4 == 0) goto LAB_82e57468;
              uVar8 = uVar8 + 1 & 0xffff;
            } while (uVar8 < uStack_50);
          }
        }
      }
      else {
        lVar3 = -0x7ff8ffa9;
      }
    }
  }
  return lVar3;
}

