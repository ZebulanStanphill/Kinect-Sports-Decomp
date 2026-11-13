typedef unsigned char bool;
#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_8228E658();
extern int fn_82513E08();
extern int fn_825145D0();
extern int fn_8265C9E0();
extern int fn_82F69290();
extern unsigned int lbl_821C2514;
extern unsigned int lbl_83297820;
extern unsigned int stack0x00000024;
extern unsigned int uStack00000024;
extern unsigned int uStack_38;
extern unsigned __int64 storeWordConditionalIndexed();


unsigned int * fn_82513728(unsigned int *param_1,__int64 param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  int iVar7;
  __int64 lVar8;
  int iVar10;
  __int64 lVar9;
  unsigned int *puVar11;
  char in_RESERVE;
  unsigned char bVar12;
  unsigned int uStack00000024;
  unsigned int *apuStack_40 [2];
  unsigned int uStack_38;
  int *piStack_34;
  
  uStack00000024 = param_3;
  iVar5 = lbl_83297820;
  if (lbl_83297820 == 0) {
    iVar5 = fn_825145D0();
  }
  iVar7 = iVar5 + 4;
  iVar3 = iVar7;
  do {
    iVar10 = iVar3;
    iVar5 = *(int *)(iVar5 + 4);
    while( true ) {
      if (iVar5 == 0) {
        if ((iVar10 == iVar7) || (param_3 < *(unsigned int *)(iVar10 + 0x10))) {
          iVar10 = iVar7;
        }
        if (iVar10 == iVar7) {
          uStack_38 = 0;
                    /* WARNING: Subroutine does not return */
          fn_82F69290(&uStack_38,0xffffffff821ddb04);
        }
        puVar6 = (unsigned int *)(**(int (***)())(iVar10 + 0x40))(apuStack_40,iVar10 + 0x14);
        uVar1 = *puVar6;
        *puVar6 = 0;
        if (apuStack_40[0] != (unsigned int *)0x0) {
          (**(int (***)())*apuStack_40[0])(apuStack_40[0],1);
        }
        *param_1 = 0;
        param_1[1] = 0;
        puVar6 = (unsigned int *)fn_8265C9E0(0x14);
        bVar12 = (puVar6 == (unsigned int *)0x0) << 1;
        if (puVar6 == (unsigned int *)0x0) {
          puVar6 = (unsigned int *)0x0;
        }
        else {
          puVar6[3] = uVar1;
          puVar6[1] = 1;
          *puVar6 = &lbl_821C2514;
          puVar6[2] = 1;
        }
        if (param_1[1] != 0) {
          fn_822315A0();
        }
        param_1[1] = puVar6;
        *param_1 = uVar1;
        uStack_38 = 0;
        piStack_34 = (int *)0x0;
        fn_8228E658(&uStack_38,param_1);
        uVar4 = fn_82513E08(param_2 + 4,&stack0x00000024);
        fn_8228E658(uVar4,&uStack_38);
        if (ZEXT48(piStack_34) != 0) {
          lVar9 = ZEXT48(piStack_34) + 8;
          do {
            puVar11 = (unsigned int *)lVar9;
            lVar8 = (unsigned __int64)*puVar11 - 1;
            if (in_RESERVE != '\0') {
              uVar2 = storeWordConditionalIndexed(lVar8,0,lVar9);
              *puVar11 = uVar2;
              bVar12 = 2;
            }
          } while (!(bool)(bVar12 >> 1 & 1));
          if ((int)lVar8 == 0) {
            (**(int (***)())(*piStack_34 + 4))();
          }
        }
        return param_1;
      }
      iVar3 = iVar5;
      if (param_3 <= *(unsigned int *)(iVar5 + 0x10)) break;
      iVar5 = *(int *)(iVar5 + 8);
    }
  } while( true );
}

