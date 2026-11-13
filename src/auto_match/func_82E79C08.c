extern int fn_82E65EE8();
extern int fn_82E76C40();
extern int fn_82E79970();


__int64 fn_82E79C08(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned int uVar2;
  int iVar4;
  __int64 lVar3;
  unsigned char bVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned char *pbVar8;
  unsigned int *puVar9;
  int *piStack_40;
  unsigned char *pbStack_3c;
  int aiStack_38 [14];
  
  piStack_40 = (int *)0x0;
  aiStack_38[0] = 0;
  uVar6 = param_2;
  iVar4 = fn_82E76C40();
  iVar4 = iVar4 + (unsigned int)*(unsigned char *)(param_1 + 0x150);
  if ((uVar6 & 0xffffffff) != 0) {
    lVar3 = (**(int (***)())(*(int *)param_2 + 0x9c))(param_2,aiStack_38);
    if ((int)lVar3 < 0) {
      return lVar3;
    }
    if (aiStack_38[0] == 0) {
      lVar3 = fn_82E65EE8(iVar4,&piStack_40);
      if ((-1 < lVar3) && (lVar3 = (**(int (***)())(*piStack_40 + 0x18))(piStack_40,iVar4), -1 < lVar3))
      {
        pbStack_3c = (unsigned char *)0x0;
        lVar3 = (**(int (***)())(*piStack_40 + 0xc))(piStack_40,&pbStack_3c,0,0);
        if (-1 < lVar3) {
          pbVar8 = pbStack_3c;
          if (*(int *)(param_1 + 0x14c) != 0) {
            *pbStack_3c = 0x82;
            pbStack_3c[1] = 0;
            pbStack_3c[2] = 0;
            pbVar8 = pbStack_3c + 3;
          }
          iVar7 = 0;
          *pbVar8 = (((*(unsigned char *)(param_1 + 0x151) & 3) << 2 | *(unsigned char *)(param_1 + 0x152) & 3) << 2 |
                    *(unsigned char *)(param_1 + 0x153) & 3) << 1 | *(int *)(param_1 + 0x154) != 0;
          pbVar8[1] = ((*(char *)(param_1 + 0x15c) << 2 | *(unsigned char *)(param_1 + 0x15d) & 3) << 2 |
                      *(unsigned char *)(param_1 + 0x159) & 3) << 2 | *(unsigned char *)(param_1 + 0x15a) & 3;
          cVar1 = *(char *)(param_1 + 0x151);
          uVar2 = *(unsigned int *)(param_1 + 0x160);
          puVar9 = (unsigned int *)(pbVar8 + 2);
          if (cVar1 == '\x01') {
            iVar7 = 1;
            *(char *)puVar9 = (char)uVar2;
          }
          else if (cVar1 == '\x02') {
            iVar7 = 2;
            *(unsigned short *)puVar9 =
                 (unsigned short)(((unsigned __int64)uVar2 & 0xffff) << 8) |
                 (unsigned short)(((unsigned __int64)uVar2 & 0xffff) >> 8);
          }
          else if (cVar1 == '\x03') {
            *puVar9 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
            iVar7 = 4;
          }
          cVar1 = *(char *)(param_1 + 0x153);
          puVar9 = (unsigned int *)(iVar7 + (int)puVar9);
          uVar2 = *(unsigned int *)(param_1 + 0x164);
          iVar7 = 0;
          if (cVar1 == '\x01') {
            iVar7 = 1;
            *(char *)puVar9 = (char)uVar2;
          }
          else if (cVar1 == '\x02') {
            iVar7 = 2;
            *(unsigned short *)puVar9 =
                 (unsigned short)(((unsigned __int64)uVar2 & 0xffff) << 8) |
                 (unsigned short)(((unsigned __int64)uVar2 & 0xffff) >> 8);
          }
          else if (cVar1 == '\x03') {
            *puVar9 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
            iVar7 = 4;
          }
          cVar1 = *(char *)(param_1 + 0x152);
          puVar9 = (unsigned int *)(iVar7 + (int)puVar9);
          uVar2 = *(unsigned int *)(param_1 + 0x168);
          iVar7 = 0;
          if (cVar1 == '\x01') {
            iVar7 = 1;
            *(char *)puVar9 = (char)uVar2;
          }
          else if (cVar1 == '\x02') {
            iVar7 = 2;
            *(unsigned short *)puVar9 =
                 (unsigned short)(((unsigned __int64)uVar2 & 0xff) << 8) | (unsigned short)(uVar2 >> 8) & 0xff;
          }
          else if (cVar1 == '\x03') {
            *puVar9 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | uVar2 >> 8 & 0xff00 | uVar2 >> 0x18;
            iVar7 = 4;
          }
          puVar9 = (unsigned int *)((int)puVar9 + iVar7);
          *puVar9 = (unsigned int)*(unsigned char *)(param_1 + 0x143) << 0x18 |
                    (unsigned int)*(unsigned char *)(param_1 + 0x142) << 0x10 | (unsigned int)*(unsigned char *)(param_1 + 0x141) << 8
                    | (unsigned int)*(unsigned char *)(param_1 + 0x140);
          *(unsigned short *)(puVar9 + 1) =
               *(unsigned short *)(param_1 + 0x144) << 8 | *(unsigned short *)(param_1 + 0x144) >> 8;
          pbVar8 = (unsigned char *)((int)puVar9 + 6);
          if (*(int *)(param_1 + 0x154) != 0) {
            bVar5 = fn_82E79970(param_1);
            *pbVar8 = *(char *)(param_1 + 0x170) << 6 | bVar5 & 0x3f;
            pbVar8 = (unsigned char *)((int)puVar9 + 7);
          }
          if ((int)pbVar8 - (int)pbStack_3c != iVar4) {
            lVar3 = -0x7fff0001;
          }
          (**(int (***)())(*piStack_40 + 0x10))();
          if (-1 < (int)lVar3) {
            lVar3 = (**(int (***)())(*(int *)param_2 + 0xa8))(param_2,piStack_40);
          }
        }
      }
      if (piStack_40 == (int *)0x0) {
        return lVar3;
      }
      (**(int (***)())(*piStack_40 + 8))();
      return lVar3;
    }
  }
  return -0x7ff8ffa9;
}

