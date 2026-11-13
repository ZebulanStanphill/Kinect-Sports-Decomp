#define CONCAT17(h,l) ((unsigned __int64)((((unsigned char)(h)) << 56) | ((unsigned __int64)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b8;
extern int fn_8223F508();
extern int fn_8223F5A0();
extern int fn_82295A48();
extern int fn_82296328();
extern int fn_822969C8();
extern int fn_82296E38();
extern int fn_82297DB0();
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_c0;


unsigned __int64
fn_82295200(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             char param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned char *puVar5;
  unsigned __int64 *puVar6;
  short sVar7;
  unsigned __int64 uVar8;
  unsigned int ****ppppuVar9;
  __int64 lVar10;
  unsigned __int64 uStack_c0;
  unsigned char auStack_b8 [8];
  unsigned int ***apppuStack_b0 [4];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [112];
  
  if ((*(unsigned int *)(param_4 + 0x14) & 0x4000) == 0) {
    (**(int (***)())(*param_2 + 0x1c))();
  }
  else {
    iVar1 = **(int **)(param_4 + 0x30);
    uStack_c0 = CONCAT44(iVar1,(((unsigned __int64)(uStack_c0) >> 32) & 0xFFFFFFFF));
    fn_8223F508(iVar1);
    piVar3 = (int *)fn_822969C8(&uStack_c0);
    if (iVar1 != 0) {
      puVar4 = (unsigned int *)fn_8223F5A0(iVar1);
      if (puVar4 != (unsigned int *)0x0) {
        (**(int (***)())*puVar4)(puVar4,1);
      }
    }
    fn_82297DB0(apppuStack_b0,0,0);
    if (param_6 == '\0') {
      (**(int (***)())(*piVar3 + 0x10))(auStack_70,piVar3);
      fn_82295A48(apppuStack_b0,auStack_70);
      puVar5 = auStack_70;
    }
    else {
      (**(int (***)())(*piVar3 + 0x14))(auStack_90);
      fn_82295A48(apppuStack_b0,auStack_90);
      puVar5 = auStack_90;
    }
    fn_82297DB0(puVar5,1,0);
    uVar8 = (unsigned __int64)uStack_a0;
    if (((__int64)*(unsigned __int64 *)(param_4 + 0x20) < 1) ||
       (uVar2 = *(unsigned __int64 *)(param_4 + 0x20) & 0xffffffff, lVar10 = uVar2 - uVar8, uVar2 <= uVar8)
       ) {
      lVar10 = 0;
    }
    if ((*(unsigned int *)(param_4 + 0x14) & 0x1c0) != 0x40) {
      puVar6 = (unsigned __int64 *)fn_82296328(auStack_b8,param_3,param_5,lVar10);
      param_3 = *puVar6;
      uVar8 = (unsigned __int64)uStack_a0;
      lVar10 = 0;
    }
    if (uStack_9c < 8) {
      apppuStack_b0[0] = apppuStack_b0;
    }
    uStack_c0 = param_3;
    if (uVar8 != 0) {
      uStack_c0 = ((((unsigned __int64)(uStack_c0)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((int)param_3)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
      iVar1 = (((unsigned __int64)(uStack_c0) >> 32) & 0xFFFFFFFF);
      ppppuVar9 = (unsigned int ****)apppuStack_b0[0];
      do {
        if ((iVar1 == 0) || (sVar7 = fn_82296E38(iVar1,*(unsigned short *)ppppuVar9), sVar7 == -1))
        {
          uStack_c0 = CONCAT17(1,(((unsigned __int64)(uStack_c0) >> 8) & 0xFFFFFFFFFFFFFF));
        }
        uVar8 = uVar8 - 1;
        ppppuVar9 = (unsigned int ****)((int)ppppuVar9 + 2);
      } while (uVar8 != 0);
    }
    *(unsigned __int64 *)(param_4 + 0x20) = 0;
    fn_82296328(param_1,uStack_c0,param_5,lVar10);
    fn_82297DB0(apppuStack_b0,1,0);
  }
  return param_1;
}

