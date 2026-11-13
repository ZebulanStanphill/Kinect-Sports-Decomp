extern int fn_826912E0();
extern int fn_826913D8();
extern int fn_82693108();
extern int fn_82693208();
extern unsigned int lbl_8200E1B0;
extern unsigned int lbl_831F129C;


unsigned int *
fn_826914F8(unsigned int *param_1,unsigned short param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5
             ,unsigned char *param_6)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char uVar6;
  unsigned int *puVar5;
  __int64 lVar4;
  char cVar7;
  unsigned __int64 uVar8;
  unsigned short uVar9;
  
  uVar8 = (unsigned __int64)(unsigned int)param_1[0x88];
  if (((uVar8 == 0) || (((unsigned int)param_1[0x83] + param_3 & 0xffffffff) <= uVar8)) ||
     (piVar1 = (int *)param_1[0x89], piVar1 == (int *)0x0)) {
    *param_6 = 0;
    uVar3 = param_5 + 0x2fU & 0xfffffff0;
    puVar5 = (unsigned int *)fn_826912E0(param_1[2],uVar3);
    if (puVar5 != (unsigned int *)0x0) {
      puVar5[2] = uVar3;
      *(unsigned short *)(puVar5 + 3) = param_2;
      if ((param_4 & 0xffff0000) == 0) {
        if ((param_4 & 0xff00) == 0) {
          uVar9 = (unsigned short)(unsigned char)(&lbl_8200E1B0)[(unsigned int)param_4 & 0xff];
        }
        else {
          uVar9 = (unsigned char)(&lbl_8200E1B0)[(unsigned int)(param_4 >> 8) & 0xff] + 8;
        }
      }
      else if ((param_4 & 0xff000000) == 0) {
        uVar9 = (unsigned char)(&lbl_8200E1B0)[(unsigned int)(param_4 >> 0x10) & 0xff] + 0x10;
      }
      else {
        uVar9 = (unsigned char)(&lbl_8200E1B0)[(unsigned int)(param_4 >> 0x18) & 0xff] + 0x18;
      }
      puVar5[4] = 0;
      *(unsigned short *)((int)puVar5 + 0xe) = uVar9 & 0xff;
      puVar5[5] = *param_1;
      puVar5[6] = (int)param_3;
      puVar5[7] = 0;
      if ((param_3 & 0xffffffff) == 0) {
LAB_826916b4:
        uVar2 = param_1[0x6c];
        *puVar5 = param_1 + 0x6b;
        puVar5[1] = uVar2;
        *(unsigned int **)param_1[0x6c] = puVar5;
        param_1[0x6c] = puVar5;
        param_1[0x83] = puVar5[6] + param_1[0x83];
        *param_6 = 1;
        return puVar5;
      }
      if ((param_4 & 0xffffffff) < 0x1000) {
        param_4 = 0x1000;
      }
      lVar4 = (**(int (***)())(*(int *)param_1[1] + 4))((int *)param_1[1],param_3,param_4);
      puVar5[7] = (int)lVar4;
      if (lVar4 != 0) {
        cVar7 = fn_82693108(lbl_831F129C,lVar4,puVar5[6]);
        if (cVar7 != '\0') {
          fn_82693208(lbl_831F129C,puVar5[7],puVar5[6],puVar5);
          goto LAB_826916b4;
        }
        (**(int (***)())(*(int *)param_1[1] + 8))((int *)param_1[1],puVar5[7],param_3,param_4);
      }
      fn_826913D8(param_1[2],puVar5,uVar3);
    }
  }
  else {
    uVar6 = (**(int (***)())(*piVar1 + 4))(piVar1,*param_1,((unsigned int)param_1[0x83] - uVar8) + param_3);
    *param_6 = uVar6;
  }
  return (unsigned int *)0x0;
}

