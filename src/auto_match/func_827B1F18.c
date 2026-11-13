extern int fn_827B19D8();


unsigned __int64 fn_827B1F18(unsigned int *param_1,int param_2,int param_3)

{
  char cVar1;
  unsigned char bVar2;
  unsigned char bVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned char bVar6;
  unsigned char abStack_30 [48];
  
  cVar1 = (char)param_2;
  bVar2 = (unsigned char)(param_2 >> 4);
  cVar4 = (char)param_3;
  if ((((param_2 < -0x20) || (0x1f < param_2)) || (param_3 < -0x20)) || (0x1f < param_3)) {
    bVar6 = (unsigned char)(param_3 >> 2);
    if (((param_2 < -0x200) || (0x1ff < param_2)) || ((param_3 < -0x200 || (0x1ff < param_3)))) {
      bVar3 = (unsigned char)(param_2 >> 0xc);
      if (((param_2 < -0x2000) || (0x1fff < param_2)) || ((param_3 < -0x2000 || (0x1fff < param_3)))
         ) {
        abStack_30[0] = cVar1 << 4 | 7;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = bVar2;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = cVar4 << 6 | bVar3 & 0x3f;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = bVar6;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = (unsigned char)(param_3 >> 10);
        fn_827B19D8(*param_1,abStack_30);
        uVar5 = 5;
      }
      else {
        abStack_30[0] = cVar1 << 4 | 6;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = bVar2;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = cVar4 << 2 | bVar3 & 3;
        fn_827B19D8(*param_1,abStack_30);
        abStack_30[0] = (unsigned char)(param_3 >> 6);
        fn_827B19D8(*param_1,abStack_30);
        uVar5 = 4;
      }
    }
    else {
      abStack_30[0] = cVar1 << 4 | 5;
      fn_827B19D8(*param_1,abStack_30);
      abStack_30[0] = cVar4 << 6 | bVar2 & 0x3f;
      fn_827B19D8(*param_1,abStack_30);
      abStack_30[0] = bVar6;
      fn_827B19D8(*param_1,abStack_30);
      uVar5 = 3;
    }
  }
  else {
    abStack_30[0] = cVar1 << 4 | 4;
    fn_827B19D8(*param_1,abStack_30);
    abStack_30[0] = cVar4 << 2 | bVar2 & 3;
    fn_827B19D8(*param_1,abStack_30);
    uVar5 = 2;
  }
  return uVar5;
}

