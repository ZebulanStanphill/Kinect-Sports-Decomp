extern unsigned int *auStack_40;
extern int fn_82E531C8();
extern int fn_82F68CC0();


unsigned __int64
fn_82E53558(int param_1,unsigned int param_2,unsigned int *param_3,unsigned short *param_4,unsigned __int64 param_5,
             unsigned int *param_6)

{
  __int64 lVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int auStack_40;
  
  uVar3 = 0;
  if ((param_3 == (unsigned int *)0x0) || (param_4 == (unsigned short *)0x0)) {
    uVar3 = 0xffffffff80004003;
  }
  else if ((param_2 & 0xffff) < *(unsigned int *)(param_1 + 0x108)) {
    lVar1 = fn_82E531C8(param_1 + 0xa0,param_2 & 0xffff,&auStack_40);
    puVar2 = (unsigned int *)(-(unsigned int)(lVar1 != 0) & auStack_40);
    if (puVar2 == (unsigned int *)0x0) {
      uVar3 = 0xffffffffc00d36bb;
    }
    else {
      *param_3 = *puVar2;
      param_3[1] = puVar2[1];
      param_3[2] = puVar2[2];
      param_3[3] = puVar2[3];
      *param_4 = *(unsigned short *)(puVar2 + 4);
      if (param_6 != (unsigned int *)0x0) {
        if ((param_5 & 0xffffffff) == 0) {
          if (*param_6 != 0) {
            return 0xffffffff80070057;
          }
        }
        else if ((unsigned int)puVar2[5] <= *param_6) {
          *param_6 = puVar2[5];
          fn_82F68CC0(param_5,puVar2[6],puVar2[5]);
          return 0;
        }
        uVar3 = 0xffffffffc00d36b1;
        *param_6 = puVar2[5];
      }
    }
  }
  else {
    uVar3 = 0xffffffffc00d36bf;
  }
  return uVar3;
}

