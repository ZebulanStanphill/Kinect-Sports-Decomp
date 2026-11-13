#define true 1
extern unsigned int *auStack_6c;
extern unsigned int *auStack_80;
extern int fn_82C07298();
extern int fn_82C078F0();
extern int fn_82C07C18();
extern int fn_82C09348();
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C10F40();
extern int fn_82C114A0();
extern unsigned int iStack_70;
extern unsigned int iStack_74;
extern unsigned int iStack_78;
extern unsigned int iStack_7c;


/* WARNING: Type propagation algorithm not settling */

unsigned __int64 fn_82C094B8(int param_1,unsigned __int64 param_2,__int64 *param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned short auStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  unsigned int auStack_6c [3];
  __int64 alStack_60 [2];
  
  iStack_78 = 0;
  iStack_7c = 0;
  auStack_6c[0] = 0;
  iStack_70 = 0;
  auStack_80 = 0;
  auStack_6c[2] = 0;
  iStack_74 = 0;
  auStack_6c[1] = 0;
  if ((((param_1 == 0) || (param_3 == (__int64 *)0x0)) || (*(int *)(param_1 + 0x210) == 0)) ||
     (*(unsigned int *)(*(int *)(param_1 + 4) + 0x10) < param_2)) {
    uVar1 = 4;
  }
  else {
    *param_3 = 0;
    uVar1 = fn_82C07298();
    if (-1 < (int)uVar1) {
      do {
        iVar2 = fn_82C09348(param_1,auStack_6c,&iStack_70,0);
        if (iStack_70 != 0) {
          uVar1 = fn_82C10F40(*(unsigned int *)(*(int *)(param_1 + 4) + 0x7c),auStack_6c[0] & 0xff,
                               &iStack_78);
          if ((int)uVar1 < 0) break;
          if (*(int *)(iStack_78 + 4) == 2) {
            uVar1 = fn_82C078F0(param_1,0,&auStack_80);
            if ((int)uVar1 < 0) break;
            uVar3 = ((__int64)
                     (int)((int)(((__int64)*(int *)(*(int *)(iStack_78 + 8) + 8) *
                                  (__int64)(int)(unsigned int)auStack_80 & 0xffffffffU) >> 3) + 3U >> 2)
                     * (__int64)*(int *)(*(int *)(iStack_78 + 8) + 0xc) & 0x3fffffffU) << 2;
          }
          else {
            uVar3 = -(unsigned __int64)(*(int *)(iStack_78 + 4) == 1) & 0x1000;
          }
          uVar1 = fn_82C10AD0(*(unsigned int *)(param_1 + 0x260),8,uVar3,&iStack_7c);
          if ((int)uVar1 < 0) break;
          do {
            uVar1 = 0xffffffff805000a8;
            if (((*(int *)(param_1 + 0x218) != 0) &&
                (uVar1 = fn_82C114A0(*(int *)(param_1 + 0x218),iStack_7c,uVar3,&iStack_74,
                                      auStack_6c + 2,alStack_60,auStack_6c + 1,0), -1 < (int)uVar1))
               && (iStack_74 == 0)) {
              *(unsigned int *)(param_1 + 0x218) = 0;
            }
            if ((int)uVar1 < 0) goto LAB_82c096c8;
            if ((__int64)param_2 <= alStack_60[0]) {
              if (*(int *)(param_1 + 0x22c) != 0) {
                *param_3 = alStack_60[0];
              }
              *(unsigned int *)(param_1 + 0x22c) = 0;
            }
          } while (iStack_74 != 0);
          uVar1 = fn_82C10B28(*(unsigned int *)(param_1 + 0x260),8,&iStack_7c);
          if ((int)uVar1 < 0) break;
        }
        if ((iVar2 != 0) || (*(int *)(param_1 + 0x22c) == 0)) break;
      } while( true );
    }
LAB_82c096c8:
    if (iStack_7c != 0) {
      fn_82C10B28(*(unsigned int *)(param_1 + 0x260),8,&iStack_7c);
    }
    uVar1 = fn_82C07C18(uVar1);
  }
  return uVar1;
}

