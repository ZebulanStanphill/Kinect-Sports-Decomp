typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_826944C8();
extern int fn_826949A8();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826A98D8();
extern unsigned int iStack_4c;
extern unsigned int lbl_82005758;


__int64 fn_826AA010(unsigned __int64 param_1,int param_2,char *param_3,unsigned int *param_4,int *param_5
                      )

{
  unsigned int *puVar1;
  unsigned int uVar2;
  bool bVar3;
  __int64 lVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char cVar8;
  __int64 lVar9;
  __int64 lVar10;
  __int64 lVar11;
  double dVar12;
  unsigned int *puStack_50;
  int iStack_4c;
  int aiStack_48 [18];
  
  cVar8 = *param_3;
  piVar6 = *(int **)(param_2 + 0x74);
  lVar10 = 0;
  if (cVar8 == '\x05') {
    fn_82696D38(&puStack_50,param_3,param_2,0xffffffffffffffff,0);
    lVar4 = fn_82693A98(&puStack_50);
    lVar11 = 0;
    if (0 < lVar4) {
      do {
        iVar5 = fn_82693B08(&puStack_50,lVar11);
        if (iVar5 == 0x3a) {
          fn_826949A8(&iStack_4c,&puStack_50,0,lVar11);
          piVar6 = (int *)fn_826A98D8(param_2,&iStack_4c,0);
          if (piVar6 != (int *)0x0) {
            if ((int)lVar11 < (int)lVar4) {
              piVar7 = (int *)fn_826949A8(aiStack_48,&puStack_50,lVar11 + 1,lVar4 + 1);
              puVar1 = (unsigned int *)*piVar7;
              puVar1[2] = puVar1[2] + 1;
              uVar2 = puStack_50[2];
              puStack_50[2] = (int)((unsigned __int64)uVar2 - 1);
              if ((unsigned __int64)uVar2 - 1 == 0) {
                fn_826944C8(puStack_50);
              }
              lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_48[0] + 8) - 1;
              *(int *)(aiStack_48[0] + 8) = (int)lVar4;
              puStack_50 = puVar1;
              if (lVar4 == 0) {
                fn_826944C8(aiStack_48[0]);
              }
              lVar4 = (unsigned __int64)*(unsigned int *)(iStack_4c + 8) - 1;
              *(int *)(iStack_4c + 8) = (int)lVar4;
              if (lVar4 == 0) {
                fn_826944C8(iStack_4c);
              }
              break;
            }
            piVar6 = (int *)0x0;
          }
          lVar9 = (unsigned __int64)*(unsigned int *)(iStack_4c + 8) - 1;
          *(int *)(iStack_4c + 8) = (int)lVar9;
          if (lVar9 == 0) {
            fn_826944C8(iStack_4c);
          }
        }
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < (int)lVar4);
    }
    if ((piVar6 != (int *)0x0) &&
       (cVar8 = (**(int (***)())(*piVar6 + 0x11c))(piVar6,*puStack_50,param_5,1), cVar8 != '\0')) {
      lVar10 = 1;
    }
    uVar2 = puStack_50[2];
    puStack_50[2] = (int)((unsigned __int64)uVar2 - 1);
    if ((unsigned __int64)uVar2 - 1 == 0) {
      fn_826944C8(puStack_50);
    }
  }
  else if (cVar8 != '\x06') {
    if ((cVar8 == '\x03') || (bVar3 = false, cVar8 == '\x04')) {
      bVar3 = true;
    }
    if (bVar3) {
      dVar12 = (double)fn_826972E0(param_3,param_2);
      lVar10 = 1;
      *param_5 = (int)(dVar12 - lbl_82005758);
    }
  }
  if ((lVar10 != 0) && (param_4 != (unsigned int *)0x0)) {
    *param_4 = piVar6;
  }
  return lVar10;
}

