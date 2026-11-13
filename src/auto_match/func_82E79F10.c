extern unsigned int *auStack_44;
extern int fn_82E65EE8();
extern int fn_82E78690();
extern int fn_82E79A00();
extern int fn_82F68CC0();
extern unsigned int iStack_4c;


__int64 fn_82E79F10(int param_1,unsigned __int64 param_2,int *param_3)

{
  char cVar1;
  unsigned short uVar2;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  unsigned char *pbVar6;
  unsigned char bVar8;
  int iVar7;
  unsigned short *puVar9;
  unsigned __int64 uVar10;
  int *piStack_50;
  int iStack_4c;
  unsigned char *pbStack_48;
  unsigned int auStack_44 [17];
  
  piStack_50 = (int *)0x0;
  iStack_4c = 0;
  if (((unsigned __int64)*(unsigned int *)(param_1 + 0x1e0) <= (param_2 & 0xffffffff)) || (param_3 == (int *)0x0))
  {
    return -0x7ff8ffa9;
  }
  lVar3 = (**(int (***)())(*param_3 + 0x9c))(param_3,&iStack_4c);
  if ((int)lVar3 < 0) {
    return lVar3;
  }
  if (iStack_4c == 0) {
    return -0x7ff8ffa9;
  }
  lVar3 = fn_82E78690(param_1 + 0x178,param_2,auStack_44);
  puVar9 = (unsigned short *)(-(unsigned int)(lVar3 != 0) & auStack_44[0]);
  if (puVar9 == (unsigned short *)0x0) {
    lVar3 = -0x7fff0001;
    goto LAB_82e7a38c;
  }
  uVar10 = (unsigned __int64)*(unsigned int *)((int)puVar9 + 0x17) - (unsigned __int64)*(unsigned int *)((int)puVar9 + 0x1b);
  lVar3 = fn_82E65EE8(uVar10,&piStack_50);
  if ((lVar3 < 0) || (lVar3 = (**(int (***)())(*piStack_50 + 0x18))(piStack_50,uVar10), lVar3 < 0))
  goto LAB_82e7a38c;
  pbStack_48 = (unsigned char *)0x0;
  lVar3 = (**(int (***)())(*piStack_50 + 0xc))(piStack_50,&pbStack_48,0,0);
  if (lVar3 < 0) goto LAB_82e7a38c;
  if ((*(int *)(puVar9 + 0x96) == 0) || (*(char *)(puVar9 + 0x98) == '\0')) {
    bVar8 = 0;
    if (*(int *)(puVar9 + 1) != 0) {
      bVar8 = 0x80;
    }
    pbVar6 = pbStack_48 + 1;
    iVar7 = 0;
    *pbStack_48 = (unsigned char)*puVar9 & 0x7f | bVar8;
    cVar1 = *(char *)(param_1 + 0x15d);
    bVar8 = *(unsigned char *)(puVar9 + 3);
    if (cVar1 == '\x01') {
      iVar7 = 1;
      *pbVar6 = bVar8;
    }
    else if (cVar1 == '\x02') {
      iVar7 = 2;
      *(unsigned short *)pbVar6 = (unsigned short)bVar8 << 8;
    }
    else if (cVar1 == '\x03') {
      *(unsigned int *)pbVar6 = (unsigned int)bVar8 << 0x18;
      iVar7 = 4;
    }
    puVar5 = (unsigned int *)(pbVar6 + iVar7);
    if (*(int *)(puVar9 + 0x96) == 0) {
      if (*(unsigned short *)((int)puVar9 + 0x1f) < 8) goto LAB_82e7a054;
      cVar1 = *(char *)(param_1 + 0x159);
      iVar7 = 0;
      uVar4 = *(unsigned int *)((int)puVar9 + 7);
      if (cVar1 == '\x01') {
        iVar7 = 1;
        *(unsigned char *)puVar5 = (unsigned char)uVar4;
      }
      else if (cVar1 == '\x02') {
        iVar7 = 2;
        *(unsigned short *)puVar5 =
             (unsigned short)(((unsigned __int64)uVar4 & 0xffff) << 8) | (unsigned short)(((unsigned __int64)uVar4 & 0xffff) >> 8)
        ;
      }
      else if (cVar1 == '\x03') {
        *puVar5 = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00 | uVar4 >> 0x18;
        iVar7 = 4;
      }
      cVar1 = *(char *)(param_1 + 0x15a);
      puVar5 = (unsigned int *)(iVar7 + (int)puVar5);
      uVar2 = *(unsigned short *)((int)puVar9 + 0x1f);
      iVar7 = 0;
      if (cVar1 == '\x01') {
        iVar7 = 1;
        *(unsigned char *)puVar5 = (unsigned char)uVar2;
      }
      else if (cVar1 == '\x02') {
        iVar7 = 2;
        *(unsigned short *)puVar5 = uVar2 << 8 | uVar2 >> 8;
      }
      else if (cVar1 == '\x03') {
        *puVar5 = (unsigned int)uVar2 << 0x18 | (uVar2 & 0xff00) << 8;
        iVar7 = 4;
      }
      puVar5 = (unsigned int *)((int)puVar5 + iVar7);
      *puVar5 = (unsigned int)*(unsigned char *)(puVar9 + 7) << 0x18 | (unsigned int)*(unsigned char *)((int)puVar9 + 0xd) << 0x10 |
                (unsigned int)*(unsigned char *)(puVar9 + 6) << 8 | (unsigned int)*(unsigned char *)((int)puVar9 + 0xb);
      puVar5[1] = (unsigned int)*(unsigned char *)(puVar9 + 9) << 0x18 | (unsigned int)*(unsigned char *)((int)puVar9 + 0x11) << 0x10
                  | (unsigned int)*(unsigned char *)(puVar9 + 8) << 8 | (unsigned int)*(unsigned char *)((int)puVar9 + 0xf);
      iVar7 = *(unsigned short *)((int)puVar9 + 0x1f) - 8;
      fn_82F68CC0(puVar5 + 2,(int)puVar9 + 0x25,iVar7);
      if (*(int *)(param_1 + 0x154) != 0) {
        cVar1 = *(char *)(param_1 + 0x170);
        puVar5 = (unsigned int *)(iVar7 + (int)(puVar5 + 2));
        uVar4 = *(unsigned int *)((int)puVar9 + 0x1b);
        if (cVar1 == '\x01') {
          *(unsigned char *)puVar5 = (unsigned char)uVar4;
        }
        else if (cVar1 == '\x02') {
          *(unsigned short *)puVar5 =
               (unsigned short)(((unsigned __int64)uVar4 & 0xffff) << 8) |
               (unsigned short)(((unsigned __int64)uVar4 & 0xffff) >> 8);
        }
        else if (cVar1 == '\x03') {
          *puVar5 = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00 | uVar4 >> 0x18;
        }
      }
    }
    else if ((*(unsigned short *)((int)puVar9 + 0x1f) == 1) && (*(unsigned int *)((int)puVar9 + 0x1b) < 0x100)) {
      cVar1 = *(char *)(param_1 + 0x159);
      iVar7 = 0;
      uVar4 = *(unsigned int *)((int)puVar9 + 0xf);
      if (cVar1 == '\x01') {
        iVar7 = 1;
        *(unsigned char *)puVar5 = (unsigned char)uVar4;
      }
      else if (cVar1 == '\x02') {
        iVar7 = 2;
        *(unsigned short *)puVar5 = (unsigned short)(((unsigned __int64)uVar4 & 0xff) << 8) | (unsigned short)(uVar4 >> 8) & 0xff;
      }
      else if (cVar1 == '\x03') {
        *puVar5 = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00 | uVar4 >> 0x18;
        iVar7 = 4;
      }
      cVar1 = *(char *)(param_1 + 0x15a);
      pbVar6 = (unsigned char *)(iVar7 + (int)puVar5);
      iVar7 = 0;
      if (cVar1 == '\x01') {
        iVar7 = 1;
        *pbVar6 = 1;
      }
      else if (cVar1 == '\x02') {
        iVar7 = 2;
        pbVar6[0] = 1;
        pbVar6[1] = 0;
      }
      else if (cVar1 == '\x03') {
        iVar7 = 4;
        pbVar6[0] = 1;
        pbVar6[1] = 0;
        pbVar6[2] = 0;
        pbVar6[3] = 0;
      }
      pbVar6[iVar7] = *(unsigned char *)(puVar9 + 0x9e);
      puVar5 = (unsigned int *)(pbVar6 + iVar7 + 1);
      if (*(int *)(param_1 + 0x154) != 0) {
        uVar10 = fn_82E79A00(param_1,param_2);
        cVar1 = *(char *)(param_1 + 0x170);
        iVar7 = 0;
        if (cVar1 == '\x01') {
          iVar7 = 1;
          *(unsigned char *)puVar5 = (unsigned char)uVar10;
        }
        else if (cVar1 == '\x02') {
          iVar7 = 2;
          *(unsigned short *)puVar5 = (unsigned short)((uVar10 & 0xffff) << 8) | (unsigned short)((uVar10 & 0xffff) >> 8);
        }
        else if (cVar1 == '\x03') {
          uVar4 = (unsigned int)uVar10;
          *puVar5 = uVar4 << 0x18 | (uVar4 & 0xff00) << 8 | uVar4 >> 8 & 0xff00 | uVar4 >> 0x18;
          iVar7 = 4;
        }
        puVar5 = (unsigned int *)(iVar7 + (int)puVar5);
      }
      *(unsigned char *)puVar5 = (unsigned char)*(unsigned int *)((int)puVar9 + 0x1b);
    }
    else {
LAB_82e7a054:
      lVar3 = -0x7fff0001;
    }
  }
  else {
    if (((uVar10 & 0xffffffff) != 1) || (0xff < *(unsigned int *)((int)puVar9 + 0x1b))) goto LAB_82e7a054;
    *pbStack_48 = (unsigned char)*(unsigned int *)((int)puVar9 + 0x1b);
  }
  (**(int (***)())(*piStack_50 + 0x10))();
  if (-1 < (int)lVar3) {
    lVar3 = (**(int (***)())(*param_3 + 0xa8))(param_3,piStack_50);
  }
LAB_82e7a38c:
  if (piStack_50 != (int *)0x0) {
    (**(int (***)())(*piStack_50 + 8))();
    return lVar3;
  }
  return lVar3;
}

