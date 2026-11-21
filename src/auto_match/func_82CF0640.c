typedef int int3;
#define CONCAT11(a, b) ((unsigned short)(((unsigned __int64)(a) << 8) | (unsigned __int64)(unsigned char)(b)))
#define CONCAT12(a, b) ((unsigned int)(((unsigned __int64)(a) << 16) | (unsigned __int64)(unsigned short)(b)))
#define CONCAT13(a, b) ((unsigned int)(((unsigned __int64)(a) << 24) | (unsigned __int64)(unsigned int)(b)))
#define CONCAT21(a, b) ((unsigned int)(((unsigned __int64)(a) << 8) | (unsigned __int64)(unsigned char)(b)))
#define CONCAT22(a, b) ((unsigned int)(((unsigned __int64)(a) << 16) | (unsigned __int64)(unsigned short)(b)))
#define CONCAT31(a, b) ((unsigned int)(((unsigned __int64)(a) << 8) | (unsigned __int64)(unsigned char)(b)))

/* WARNING: Inlined function: __savegprlr_27 */

void fn_82CF0640(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3,char param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned char uStack_70;
  unsigned char uStack_6f;
  unsigned char uStack_6e;
  unsigned char uStack_6d;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned short uStack_5e;
  unsigned char uStack_50;
  unsigned char uStack_4f;
  unsigned char uStack_4e;
  unsigned char *puStack_48;
  unsigned int uStack_44;
  unsigned int auStack_40 [4];
  
  while (puVar2 = param_1, puVar2 < param_2) {
    uVar1 = *puVar2;
    if (param_4 == '\0') {
      if (uVar1 < 10) goto switchD_82cf0704_caseD_46;
LAB_82cf06c4:
      iVar3 = fn_82CEA2F0(param_3,uVar1,&puStack_48);
      if (iVar3 != 0) {
        return;
      }
      *puVar2 = (unsigned int)puStack_48;
      switch(*puStack_48) {
      case 0x45:
      case 0x53:
      case 0x54:
      case 0x6c:
        param_1 = puVar2 + 3;
        if (param_4 != '\0') {
          uVar1 = puVar2[1];
          uStack_70 = (unsigned char)(uVar1 >> 0x18);
          uStack_6d = (unsigned char)uVar1;
          uStack_6e = (unsigned char)(uVar1 >> 8);
          uStack_6f = (unsigned char)(uVar1 >> 0x10);
          uStack_68 = CONCAT22(CONCAT11(uStack_6d,uStack_6e),CONCAT11(uStack_6f,uStack_70));
          puVar2[1] = uStack_68;
          uVar1 = puVar2[2];
          uStack_70 = (unsigned char)(uVar1 >> 0x18);
          uStack_6d = (unsigned char)uVar1;
          uStack_6e = (unsigned char)(uVar1 >> 8);
          uStack_6f = (unsigned char)(uVar1 >> 0x10);
          uStack_64 = CONCAT31(CONCAT12(uStack_6d,CONCAT11(uStack_6e,uStack_6f)),uStack_70);
          puVar2[2] = uStack_64;
        }
        break;
      case 0x46:
      case 0x4e:
      case 0x50:
      case 0x70:
        goto switchD_82cf0704_caseD_46;
      default:
        goto __restgprlr_27;
      case 0x4c:
        iVar3 = fn_82CEA2F0(param_3,puVar2[3],auStack_40);
        if (iVar3 == 0) {
          puVar2[3] = auStack_40[0];
        }
        param_1 = puVar2 + 4;
        if (param_4 != '\0') {
          uVar1 = puVar2[1];
          uStack_6e = (unsigned char)(uVar1 >> 8);
          uStack_6f = (unsigned char)(uVar1 >> 0x10);
          uStack_70 = (unsigned char)(uVar1 >> 0x18);
          puVar2[1] = CONCAT31(CONCAT21(CONCAT11((char)uVar1,uStack_6e),uStack_6f),uStack_70);
          uVar1 = puVar2[2];
          uStack_70 = (unsigned char)(uVar1 >> 0x18);
          uStack_6d = (unsigned char)uVar1;
          uStack_6e = (unsigned char)(uVar1 >> 8);
          puVar2[2] = CONCAT13(uStack_6d,
                               CONCAT12(uStack_6e,(short)CONCAT21((short)(uVar1 >> 0x10),uStack_70))
                              );
        }
        break;
      case 0x4d:
        param_1 = puVar2 + 2;
        if (param_4 != '\0') {
          uVar1 = puVar2[1];
          uStack_4e = (unsigned char)(uVar1 >> 8);
          uStack_4f = (unsigned char)(uVar1 >> 0x10);
          uStack_50 = (unsigned char)(uVar1 >> 0x18);
          puVar2[1] = CONCAT31(CONCAT21(CONCAT11((char)uVar1,uStack_4e),uStack_4f),uStack_50);
        }
        break;
      case 0x4f:
        iVar3 = fn_82CEA2F0(param_3,puVar2[3],&uStack_44);
        if (iVar3 == 0) {
          puVar2[3] = uStack_44;
        }
        param_1 = puVar2 + 4;
        if (param_4 != '\0') {
          uVar1 = puVar2[1];
          uStack_70 = (unsigned char)(uVar1 >> 0x18);
          uStack_6f = (unsigned char)(uVar1 >> 0x10);
          uStack_6d = (unsigned char)uVar1;
          uStack_5e = CONCAT11(uStack_6f,uStack_70);
          puVar2[1] = CONCAT13(uStack_6d,(int3)CONCAT22((short)(uVar1 >> 8),uStack_5e));
          uVar1 = puVar2[2];
          uStack_6f = (unsigned char)(uVar1 >> 0x10);
          uStack_70 = (unsigned char)(uVar1 >> 0x18);
          uStack_6d = (unsigned char)uVar1;
          puVar2[2] = CONCAT13(uStack_6d,
                               (int3)CONCAT31(CONCAT21((short)(uVar1 >> 8),uStack_6f),uStack_70));
        }
      }
    }
    else {
      uStack_6f = (unsigned char)(uVar1 >> 0x10);
      uStack_70 = (unsigned char)(uVar1 >> 0x18);
      uStack_6d = (unsigned char)uVar1;
      uStack_6e = (unsigned char)(uVar1 >> 8);
      uStack_6c = CONCAT31(CONCAT21(CONCAT11(uStack_6d,uStack_6e),uStack_6f),uStack_70);
      if (9 < uStack_6c) goto LAB_82cf06c4;
      *puVar2 = uStack_6c;
switchD_82cf0704_caseD_46:
      param_1 = puVar2 + 1;
    }
  }
__restgprlr_27:
  return;
}
