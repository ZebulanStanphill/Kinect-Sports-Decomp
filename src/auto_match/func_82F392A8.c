extern unsigned int *auStack_70;
extern unsigned int *auStack_7c;
extern int fn_82F377E8();
extern int fn_82F39000();
extern int fn_82F40450();
extern unsigned int lbl_820ED0A8;
extern unsigned int lbl_820ED0B8;
extern unsigned int uStack_78;


unsigned __int64 fn_82F392A8(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned int uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  int *piStack_80;
  unsigned char auStack_7c [4];
  unsigned __int64 uStack_78;
  unsigned __int64 auStack_70 [2];
  unsigned char abStack_60 [96];
  
  if (((param_4 == (unsigned int *)0x0) || ((param_2 & 0xffffffff) == 0)) ||
     ((param_3 & 0xffffffff) == 0)) {
    uVar5 = 0xffffffff80070057;
  }
  else {
    uVar5 = fn_82F39000();
    if ((-1 < (int)uVar5) &&
       (uVar5 = (**(int (***)())(*param_1 + 0x2c))(param_1,auStack_70), -1 < (int)uVar5)) {
      if ((param_3 & 0xffffffff) < auStack_70[0]) {
        uVar5 = 0xffffffffc00d36b1;
      }
      else {
        uVar3 = param_1[0x1c];
        lVar9 = 0;
        uVar8 = 0;
        if (uVar3 != 0) {
          do {
            fn_82F377E8(param_1 + 2,uVar8,&piStack_80);
            piVar4 = (int *)*piStack_80;
            if (piVar4 == (int *)0x0) {
              uVar5 = 0xffffffff8000ffff;
              break;
            }
            uVar5 = (**(int (***)())(*piVar4 + 0xc))(piVar4,abStack_60);
            if ((int)uVar5 < 0) break;
            uStack_78 = 0;
            uVar5 = (**(int (***)())(*piVar4 + 0x14))(piVar4,0,&uStack_78);
            if ((int)uVar5 < 0) break;
            if (0xffffffff < uStack_78) {
              return 0xffffffffc00d3a9a;
            }
            uVar5 = (**(int (***)())(*piVar4 + 0x1c))(piVar4,param_2,param_3 - lVar9,auStack_7c);
            if ((int)uVar5 < 0) break;
            pbVar6 = abStack_60;
            pbVar7 = &lbl_820ED0A8;
            do {
              bVar1 = *pbVar7;
              bVar2 = *pbVar6;
              if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
              pbVar7 = pbVar7 + 1;
              pbVar6 = pbVar6 + 1;
            } while (pbVar7 != &lbl_820ED0B8);
            if (((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) &&
               (uVar5 = fn_82F40450(piVar4,0), (int)uVar5 < 0)) break;
            uVar8 = uVar8 + 1;
            lVar9 = (uStack_78 & 0xffffffff) + lVar9;
            param_2 = (uStack_78 & 0xffffffff) + param_2;
          } while ((uVar8 & 0xffffffff) < (unsigned __int64)uVar3);
        }
        *param_4 = (int)lVar9;
      }
    }
  }
  return uVar5;
}

