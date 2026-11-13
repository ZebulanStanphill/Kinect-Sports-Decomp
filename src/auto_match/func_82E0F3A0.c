extern unsigned int *auStack_78;
extern unsigned int *auStack_80;
extern unsigned int *auStack_88;
extern unsigned int *auStack_90;
extern int fn_82CEAE80();
extern int fn_82CEAEA8();
extern int fn_82CEB1A8();
extern int fn_82CFD5A8();
extern int fn_82CFD5C0();
extern int fn_82CFFC68();
extern int fn_82CFFD68();
extern int fn_82CFFEB8();
extern int fn_82E0F198();


void fn_82E0F3A0(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  __int64 param_5,unsigned __int64 param_6)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar10;
  unsigned __int64 uVar7;
  unsigned int uVar11;
  __int64 lVar12;
  unsigned char auStack_90 [8];
  unsigned char auStack_88 [8];
  unsigned char auStack_80 [8];
  unsigned char auStack_78 [8];
  
  lVar12 = 0;
  iVar8 = fn_82CEAE80(param_3);
  if (0 < iVar8) {
    do {
      iVar8 = fn_82CEAEA8(param_3,lVar12);
      if (((*(unsigned short *)(iVar8 + 0x10) >> 10 & 1) == 0) &&
         (uVar11 = (unsigned int)*(unsigned char *)(iVar8 + 0xc), uVar11 - 0x16 < 7)) {
        if (uVar11 == 0x16) {
LAB_82e0f4a4:
          lVar2 = param_2;
          lVar3 = param_5;
          if (*(char *)(iVar8 + 0xd) == '\x1c') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_88,lVar2,iVar8);
              puVar10 = (unsigned int *)fn_82CFFEB8(auStack_88,0);
              fn_82E0F198(param_1,*puVar10,puVar10[1],param_4,param_6);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else if (*(char *)(iVar8 + 0xd) == '\x19') {
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_80,lVar2,iVar8);
              puVar10 = (unsigned int *)fn_82CFFEB8(auStack_80,0);
              uVar1 = puVar10[1];
              uVar4 = fn_82CFD5A8(iVar8);
              fn_82E0F3A0(param_1,*puVar10,uVar4,param_4,uVar1,param_6);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
        }
        else if ((uVar11 != 0x17) && (uVar11 != 0x18)) {
          if (uVar11 == 0x19) {
            iVar9 = fn_82CFD5C0(iVar8);
            lVar2 = param_2;
            lVar3 = param_5;
            if (iVar9 == 0) {
              uVar4 = 1;
            }
            else {
              uVar4 = fn_82CFD5C0(iVar8);
            }
            while (-1 < lVar3 + -1) {
              fn_82CFFC68(auStack_78,lVar2,iVar8);
              uVar5 = fn_82CFD5A8(iVar8);
              uVar7 = fn_82CFFD68(auStack_78);
              fn_82E0F3A0(param_1,uVar7,uVar5,param_4,uVar4,param_6);
              lVar6 = fn_82CEB1A8(param_3);
              lVar2 = lVar6 + lVar2;
              lVar3 = lVar3 + -1;
            }
          }
          else {
            if (uVar11 == 0x1a) goto LAB_82e0f4a4;
            if (uVar11 != 0x1b) {
              iVar9 = fn_82CFD5C0(iVar8);
              lVar2 = param_2;
              lVar3 = param_5;
              if (iVar9 == 0) {
                uVar4 = 1;
              }
              else {
                uVar4 = fn_82CFD5C0(iVar8);
              }
              while (-1 < lVar3 + -1) {
                fn_82CFFC68(auStack_90,lVar2,iVar8);
                uVar5 = fn_82CFFD68(auStack_90);
                fn_82E0F198(param_1,uVar5,uVar4,param_4,param_6);
                lVar6 = fn_82CEB1A8(param_3);
                lVar2 = lVar6 + lVar2;
                lVar3 = lVar3 + -1;
              }
            }
          }
        }
      }
      lVar12 = lVar12 + 1;
      iVar8 = fn_82CEAE80(param_3);
    } while ((int)lVar12 < iVar8);
  }
  return;
}

