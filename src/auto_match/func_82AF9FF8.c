typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82AF4BA8();
extern int fn_82AF4C78();
extern int fn_82AF9DC8();
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;


unsigned char fn_82AF9FF8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned int *param_4,
                  unsigned __int64 param_5,unsigned int *param_6,unsigned int *param_7,unsigned __int64 param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  char cVar8;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar4;
  unsigned char bVar9;
  unsigned __int64 uVar10;
  unsigned int *in_stack_00000054;
  unsigned int *in_stack_0000005c;
  unsigned int *in_stack_00000064;
  unsigned int *in_stack_0000006c;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  
  bVar9 = 0;
  cVar8 = fn_82AF9DC8();
  if (cVar8 != '\0') {
    cVar8 = fn_82AF9DC8(param_1,param_2,param_4,param_5,param_7,param_8,in_stack_0000006c);
    if (cVar8 != '\0') {
      if ((in_stack_00000064[2] != 0) && (in_stack_0000006c[2] != 0)) {
        if (((*in_stack_00000064 & 0x7f0) != 0) ||
           (((*in_stack_0000006c & 0x7f0) != 0 || (in_stack_00000064[2] != in_stack_0000006c[2]))))
        goto LAB_82afa0c0;
      }
      *in_stack_00000054 = param_6;
      bVar9 = 1;
      *in_stack_0000005c = param_7;
    }
  }
LAB_82afa0c0:
  cVar8 = fn_82AF9DC8(param_1,param_2,param_3,param_5,param_7,param_8,&uStack_90);
  if (cVar8 != '\0') {
    cVar8 = fn_82AF9DC8(param_1,param_2,param_4,param_5,param_6,param_8,&uStack_80);
    if (cVar8 != '\0') {
      if (bVar9 != 0) {
        if ((*in_stack_00000064 >> 4 & 0x7f) + (*in_stack_0000006c >> 4 & 0x7f) <=
            (uStack_80 >> 4 & 0x7f) + (uStack_90 >> 4 & 0x7f)) goto LAB_82afa1a4;
      }
      if ((uStack_88 != 0) && (uStack_78 != 0)) {
        if (((uStack_90 & 0x7f0) != 0) || (((uStack_80 & 0x7f0) != 0 || (uStack_88 != uStack_78))))
        goto LAB_82afa1a4;
      }
      bVar9 = 1;
      *in_stack_00000054 = param_7;
      *in_stack_0000005c = param_6;
      *in_stack_00000064 = uStack_90;
      in_stack_00000064[1] = uStack_8c;
      in_stack_00000064[2] = uStack_88;
      *in_stack_0000006c = uStack_80;
      in_stack_0000006c[1] = uStack_7c;
      in_stack_0000006c[2] = uStack_78;
    }
  }
LAB_82afa1a4:
  uVar7 = *in_stack_00000064;
  *in_stack_00000064 = uVar7 & 0xfffc7fff;
  if (bVar9 != 0) {
    if ((uVar7 & 0x7f0) == 0) {
      if ((*in_stack_0000006c & 0x7f0) == 0) {
        uVar7 = param_4[3];
        uVar5 = *(unsigned int *)(param_3[3] + 8) >> 7 & 0x7f;
        if ((uVar5 == 0x7d) || (bVar3 = false, uVar5 == 0x7c)) {
          bVar3 = true;
        }
        if (bVar3) {
          uVar5 = *(unsigned int *)(uVar7 + 8) >> 7 & 0x7f;
          if ((uVar5 == 0x7d) || (bVar3 = false, uVar5 == 0x7c)) {
            bVar3 = true;
          }
          if (bVar3) {
            uVar5 = *param_3;
            uVar1 = param_6[3];
            uVar2 = param_7[3];
            uVar5 = fn_82AF4BA8(param_1,param_3[3],uVar5 >> 0x19 & 7,uVar5 >> 5 & 0xff,
                                  uVar5 & 0x1f,&uStack_90);
            *in_stack_00000064 = (uVar5 & 7) << 0xf | *in_stack_00000064 & 0xfffc7fff;
            uVar5 = *param_4;
            uVar5 = fn_82AF4BA8(param_1,uVar7,uVar5 >> 0x19 & 7,uVar5 >> 5 & 0xff,uVar5 & 0x1f,
                                  &uStack_80);
            uVar7 = *in_stack_00000064;
            uVar5 = (uVar5 & 7) << 0xf | uVar7;
            *in_stack_00000064 = uVar5;
            iVar6 = fn_82AF4C78(param_1,&uStack_90,*param_3 >> 0x19 & 7,&uStack_80,
                                  *param_4 >> 0x19 & 7);
            *in_stack_00000064 = uVar7 & 0xfffc7fff | (iVar6 << 0xf | uVar5) & 0x38000;
            uVar7 = *param_6;
            uVar5 = *in_stack_00000064;
            uVar7 = fn_82AF4BA8(param_1,uVar1,uVar7 >> 0x19 & 7,uVar7 >> 5 & 0xff,uVar7 & 0x1f,
                                  &uStack_90);
            *in_stack_00000064 = (uVar7 & 7) << 0xf | uVar5;
            uVar7 = *param_7;
            uVar4 = fn_82AF4BA8(param_1,uVar2,uVar7 >> 0x19 & 7,uVar7 >> 5 & 0xff,uVar7 & 0x1f,
                                  &uStack_80);
            uVar7 = *in_stack_00000064;
            uVar10 = (uVar4 & 7) << 0xf | (unsigned __int64)uVar7;
            *in_stack_00000064 = (unsigned int)uVar10;
            uVar4 = fn_82AF4C78(param_1,&uStack_90,*param_6 >> 0x19 & 7,&uStack_80,
                                  *param_7 >> 0x19 & 7);
            uVar10 = (uVar4 & 0x1ffff) << 0xf | uVar10;
            uVar4 = uVar10 & 0x38000;
            *in_stack_00000064 = uVar7 & 0xfffc7fff | (unsigned int)uVar4;
            bVar9 = -((uVar4 << 0x20 | uVar10 & 0x28000) != 0x28000) & bVar9;
          }
        }
      }
    }
  }
  return bVar9;
}

