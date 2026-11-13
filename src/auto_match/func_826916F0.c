extern int fn_826912E0();
extern int fn_826913D8();
extern int fn_82693108();
extern int fn_82693208();
extern unsigned int lbl_8200E1B0;
extern unsigned int lbl_831E7E60;
extern unsigned int lbl_831F129C;
extern unsigned int uStack_60;


unsigned int *
fn_826916F0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned char *param_4)

{
  int *piVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned char uVar5;
  unsigned int *puVar4;
  char cVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned short uVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned int uStack_60;
  int aiStack_5c [23];
  
  lVar10 = (unsigned __int64)lbl_831E7E60 + 0x2c4;
  RtlEnterCriticalSection(lVar10);
  uVar8 = (unsigned __int64)(unsigned int)param_1[0x88];
  if ((uVar8 == 0) || (((unsigned int)param_1[0x83] + param_2 & 0xffffffff) <= uVar8)) {
LAB_8269177c:
    *param_4 = 0;
    puVar4 = (unsigned int *)fn_826912E0(param_1[2],0x20);
    if (puVar4 == (unsigned int *)0x0) {
LAB_82691930:
      puVar4 = (unsigned int *)0x0;
    }
    else {
      *(unsigned short *)((int)puVar4 + 0xe) = 0;
      puVar4[4] = 0;
      puVar4[2] = 0x20;
      *(unsigned short *)(puVar4 + 3) = 9;
      puVar4[5] = *param_1;
      puVar4[6] = 0;
      puVar4[7] = 0;
      if ((param_2 & 0xffffffff) != 0) {
        uVar8 = (**(int (***)())(*(int *)param_1[1] + 0x10))
                          ((int *)param_1[1],param_2,param_3,aiStack_5c,&uStack_60);
        puVar4[7] = (int)uVar8;
        if ((uVar8 & 0xffffffff) == 0) {
          fn_826913D8(param_1[2],puVar4,puVar4[2]);
          goto LAB_82691768;
        }
        uVar7 = param_3;
        if ((param_3 & 0xffffffff) < 0x1001) {
          uVar7 = 0x1000;
        }
        lVar11 = ((uVar8 + uVar7) - 1 & ~(uVar7 - 1)) - uVar8;
        if ((uStack_60 & 0xffff0000) == 0) {
          if ((uStack_60 & 0xff00) == 0) {
            uVar9 = (unsigned short)(unsigned char)(&lbl_8200E1B0)[uStack_60 & 0xff];
          }
          else {
            uVar9 = (unsigned char)(&lbl_8200E1B0)[uStack_60 >> 8 & 0xff] + 8;
          }
        }
        else if ((uStack_60 & 0xff000000) == 0) {
          uVar9 = (unsigned char)(&lbl_8200E1B0)[uStack_60 >> 0x10 & 0xff] + 0x10;
        }
        else {
          uVar9 = (unsigned char)(&lbl_8200E1B0)[uStack_60 >> 0x18] + 0x18;
        }
        uVar3 = (unsigned int)lVar11;
        puVar4[7] = (int)uVar8 + uVar3;
        puVar4[6] = aiStack_5c[0] - uVar3;
        *(unsigned short *)((int)puVar4 + 0xe) = uVar9 & 0xff;
        puVar4[4] = uVar3 | 0x80000000;
        cVar6 = fn_82693108(lbl_831F129C);
        if (cVar6 == '\0') {
          (**(int (***)())(*(int *)param_1[1] + 0x14))
                    ((int *)param_1[1],(unsigned __int64)(unsigned int)puVar4[7] - lVar11,
                     (unsigned __int64)(unsigned int)puVar4[6] + lVar11,
                     1 << (*(unsigned short *)((int)puVar4 + 0xe) & 0x3f));
          (**(int (***)())(*(int *)param_1[1] + 0x14))((int *)param_1[1],puVar4[7],param_2,param_3);
          fn_826913D8(param_1[2],puVar4,puVar4[2]);
          goto LAB_82691930;
        }
        fn_82693208(lbl_831F129C,puVar4[7],puVar4[6],puVar4);
      }
      uVar2 = param_1[0x6c];
      *puVar4 = param_1 + 0x6b;
      puVar4[1] = uVar2;
      *(unsigned int **)param_1[0x6c] = puVar4;
      param_1[0x6c] = puVar4;
      param_1[0x83] = (puVar4[4] & 0x7fffffff) + puVar4[6] + param_1[0x83];
      *param_4 = 1;
    }
    RtlLeaveCriticalSection(lVar10);
  }
  else {
    piVar1 = (int *)param_1[0x89];
    if (piVar1 == (int *)0x0) goto LAB_8269177c;
    uVar5 = (**(int (***)())(*piVar1 + 4))(piVar1,*param_1,((unsigned int)param_1[0x83] - uVar8) + param_2);
    *param_4 = uVar5;
LAB_82691768:
    RtlLeaveCriticalSection(lVar10);
    puVar4 = (unsigned int *)0x0;
  }
  return puVar4;
}

