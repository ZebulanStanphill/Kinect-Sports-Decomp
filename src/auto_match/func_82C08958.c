extern unsigned int *auStack_70;
extern int fn_82C067C8();
extern int fn_82C07B48();
extern int fn_82C07C18();
extern int fn_82C105F0();
extern int fn_82C10950();
extern int fn_82C10AD0();
extern int fn_82C10B28();
extern int fn_82C12A00();
extern int fn_82C12B70();
extern unsigned int iStack_48;
extern unsigned int iStack_84;
extern unsigned int iStack_90;
extern unsigned int lbl_820ECD20;
extern unsigned int uStack_80;
extern unsigned int uStack_88;


unsigned __int64
fn_82C08958(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,__int64 param_5)

{
  int iVar1;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  int iStack_90;
  char *pcStack_8c;
  unsigned int uStack_88;
  int iStack_84;
  unsigned int uStack_80;
  unsigned char *puStack_7c;
  unsigned char auStack_70 [40];
  int iStack_48;
  
  pcStack_8c = "WMFDecodeX86";
  if ((((param_1 == (int *)0x0) || ((int)param_4 < -1)) || (4 < (int)param_4)) ||
     (iVar1 = *param_1, iVar1 == 0)) {
    return 4;
  }
  uVar2 = fn_82C10AD0(*(unsigned int *)(iVar1 + 0x260),8,0x18,&iStack_90);
  if (-1 < (int)uVar2) {
    puVar4 = (unsigned int *)(iStack_90 + -4);
    lVar5 = 6;
    do {
      puVar4 = puVar4 + 1;
      *puVar4 = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    uVar2 = fn_82C12B70(iStack_90,*param_1,*(unsigned int *)(iVar1 + 0x20c),auStack_70,
                              *(unsigned int *)(iVar1 + 0x260));
    if (-1 < (int)uVar2) {
      uStack_88 = (unsigned int)(param_5 != 0);
      iStack_84 = iStack_48 << 0xb;
      uStack_80 = 1;
      puStack_7c = &lbl_820ECD20;
      iVar3 = fn_82C07B48(param_2);
      *(int *)(iVar1 + 0x228) = iVar3;
      if (iVar3 == 0) {
        uVar2 = 0xffffffff805000ba;
      }
      else {
        uVar2 = fn_82C10950(*(unsigned int *)(iVar1 + 0x260),1,&pcStack_8c);
        if ((-1 < (int)uVar2) &&
           (uVar2 = fn_82C105F0(*(unsigned int *)(iVar1 + 0x260),1,0xffffffff82c075d8,iVar1),
           -1 < (int)uVar2)) {
          *(unsigned int *)(iVar1 + 0x27c) = 1;
          uVar2 = fn_82C105F0(*(unsigned int *)(iVar1 + 0x260),2,0xffffffff82c075d8,iVar1);
          if (-1 < (int)uVar2) {
            *(unsigned int *)(iVar1 + 0x280) = 2;
            uVar2 = fn_82C105F0(*(unsigned int *)(iVar1 + 0x260),3,0xffffffff82c075d8,iVar1);
            if (-1 < (int)uVar2) {
              *(unsigned int *)(iVar1 + 0x284) = 3;
              uVar2 = fn_82C105F0(*(unsigned int *)(iVar1 + 0x260),5,0xffffffff82c075d8,iVar1);
              if (-1 < (int)uVar2) {
                *(unsigned int *)(iVar1 + 0x288) = 5;
                uVar2 = fn_82C067C8(iVar1,&uStack_80,param_3 == 0,param_4,auStack_70,
                                          &uStack_88,iStack_90);
                if (-1 < (int)uVar2) goto LAB_82c08b84;
              }
            }
          }
        }
      }
    }
  }
  if (iStack_90 != 0) {
    fn_82C12A00();
    if (*(int *)(iVar1 + 0x224) == iStack_90) {
      *(unsigned int *)(iVar1 + 0x224) = 0;
    }
    fn_82C10B28(*(unsigned int *)(iVar1 + 0x260),8,&iStack_90);
  }
LAB_82c08b84:
  uVar2 = fn_82C07C18(uVar2);
  return uVar2;
}

