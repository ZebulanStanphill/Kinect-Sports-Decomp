extern unsigned int *auStack_470;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82DB4A58();
extern int fn_830AFDF8();


unsigned char *
fn_82DB5E90(unsigned char *param_1,int *param_2,int *param_3,unsigned __int64 param_4,int *param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  unsigned char uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  unsigned char auStack_470 [1024];
  
  uVar4 = 1;
  iVar5 = 0;
  if (0 < param_3[1]) {
    iVar6 = 0;
    uVar4 = 1;
    do {
      piVar7 = (int *)(iVar6 + *param_3);
      if (*(char *)(*(int *)(iVar6 + *param_3) + 0x1c) == '\x05') {
        uVar1 = fn_830AFDF8(param_2[1],piVar7[1],param_2[3],0x100,auStack_470);
        iVar2 = fn_82DB4A58((double)*(float *)(*param_2 + 8),uVar1,piVar7,auStack_470,uVar1,
                              param_4);
        if (-1 < iVar2) {
          if (param_5 == (int *)0x0) {
            *param_1 = 0;
            return param_1;
          }
          uVar4 = 0;
          iVar3 = fn_82CE5410();
          if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
                    /* WARNING: Subroutine does not return */
            fn_82CE63B0(*(unsigned int *)(iVar3 + 0x10),param_5,0xc);
          }
          iVar3 = param_5[1];
          param_5[1] = iVar3 + 1;
          iVar3 = iVar3 * 0xc;
          iVar8 = iVar3 + *param_5;
          *(int *)(iVar3 + *param_5) = *piVar7;
          iVar3 = (**(int (***)())(**(int **)(*piVar7 + 0xc) + 0x20))();
          if (iVar3 == 0xb) {
            iVar3 = *(int *)(*piVar7 + 0xc);
            *(int *)(iVar8 + 4) = iVar2 * 0x20 + *(int *)(iVar3 + 0x28) + 0x30;
            iVar3 = *(int *)(iVar3 + 0x28);
            *(unsigned int *)(iVar8 + 8) =
                 (unsigned int)*(unsigned char *)(iVar3 + 10) * (int)(short)iVar2 +
                 (unsigned int)*(unsigned short *)(iVar3 + 6) * 0x20 + iVar3 + 0x30;
          }
          else {
            *(unsigned int *)(iVar8 + 4) = 0;
            *(unsigned int *)(iVar8 + 8) = 0;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar5 < param_3[1]);
  }
  *param_1 = uVar4;
  return param_1;
}

