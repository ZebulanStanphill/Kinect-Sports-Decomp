extern int fn_828ED1A0();
extern int fn_82CE1408();


void fn_828EE1B8(int *param_1)

{
  char cVar2;
  int iVar1;
  
  if ((((param_1[2] == 2) || (param_1[2] == 4)) && (cVar2 = fn_828ED1A0(param_1), cVar2 == '\0'))
     && ((((param_1[4] == 1 && (*(char *)(param_1 + 0x59) == '\0')) &&
          (*(char *)(param_1 + 0x78) == '\0')) &&
         (((*(char *)(param_1 + 0x53) != *(char *)((int)param_1 + 0x13a) ||
           (*(char *)((int)param_1 + 0x14d) != *(char *)((int)param_1 + 0x13b))) ||
          ((*(char *)((int)param_1 + 0x14e) != *(char *)(param_1 + 0x4f) ||
           (((*(char *)((int)param_1 + 0x14f) != *(char *)((int)param_1 + 0x13d) ||
             (param_1[0x54] != param_1[0x50])) || (param_1[0x55] != param_1[0x51])))))))))) {
    param_1[0x5a] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
    param_1[0x5f] = 0;
    param_1[0x60] = 0;
    (**(int (***)())(*param_1 + 0x28))(param_1,param_1[0x50],param_1[0x54],param_1[0x51],param_1[0x55]);
    iVar1 = fn_82CE1408(param_1[0x16],
                              -(unsigned __int64)(*(char *)((int)param_1 + 0x139) != '\0') & 0x20 |
                              -(unsigned __int64)(*(char *)(param_1 + 0x4e) != '\0') & 8 |
                              -(unsigned __int64)(*(char *)((int)param_1 + 0x137) != '\0') & 4 |
                              -(unsigned __int64)(*(char *)((int)param_1 + 0x136) != '\0') & 2 |
                              -(unsigned __int64)(*(char *)((int)param_1 + 0x14e) != '\0') & 0x200 |
                              -(unsigned __int64)(*(char *)((int)param_1 + 0x14d) != '\0') & 0x100 |
                              -(unsigned __int64)(*(char *)(param_1 + 0x53) != '\0') & 0x10 |
                              -(unsigned __int64)(*(char *)((int)param_1 + 0x14f) != '\0') & 0x400 |
                              (unsigned __int64)(param_1[2] == 2),param_1[0x54],param_1[0x55],
                              param_1 + 0x5a);
    if (iVar1 == 0x3e5) {
      *(unsigned char *)(param_1 + 0x59) = 1;
      *(unsigned char *)(param_1 + 0x56) = *(unsigned char *)(param_1 + 0x53);
      *(unsigned char *)((int)param_1 + 0x159) = *(unsigned char *)((int)param_1 + 0x14d);
      *(unsigned char *)((int)param_1 + 0x15a) = *(unsigned char *)((int)param_1 + 0x14e);
      *(unsigned char *)((int)param_1 + 0x15b) = *(unsigned char *)((int)param_1 + 0x14f);
      param_1[0x57] = param_1[0x54];
      param_1[0x58] = param_1[0x55];
    }
    else {
      (**(int (***)())(*param_1 + 0x2c))(param_1);
    }
  }
  return;
}

