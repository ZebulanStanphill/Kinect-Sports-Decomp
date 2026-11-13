extern int fn_82D04AB8();
extern int fn_82D04B90();


void fn_82E0E830(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  int iVar1;
  float *pfVar2;
  
  pfVar2 = (float *)(param_1 + 0x10);
  while (iVar1 = param_3, param_2 - 1U < 0x20) {
    switch(*(unsigned int *)((param_2 - 1U) * 4 + -0x7d1f178c)) {
    case 0x82e0e8f4:
      param_3 = 0;
      param_2 = iVar1;
      break;
    case 0x82e0e90c:
      if (*(char *)pfVar2 != '\0') {
        fn_82D04AB8(param_4,0xffffffff82196f18);
        return;
      }
      fn_82D04AB8(param_4,0xffffffff82196f10);
      return;
    case 0x82e0e938:
      fn_82D04B90(param_4,0xffffffff8214b020,*(char *)pfVar2);
      return;
    case 0x82e0e950:
      fn_82D04B90(param_4,0xffffffff821c54fc,*(char *)pfVar2);
      return;
    case 0x82e0e968:
      fn_82D04B90(param_4,0xffffffff821c7f34,*(char *)pfVar2);
      return;
    case 0x82e0e97c:
      fn_82D04B90(param_4,0xffffffff821c54fc,*(unsigned short *)pfVar2);
      return;
    case 0x82e0e994:
      fn_82D04B90(param_4,0xffffffff821c7f34,*(unsigned short *)pfVar2);
      return;
    case 0x82e0e9a8:
      fn_82D04B90(param_4,0xffffffff821c54fc,*pfVar2);
      return;
    case 0x82e0e9bc:
      fn_82D04B90(param_4,0xffffffff821c7f34,*pfVar2);
      return;
    case 0x82e0e9d0:
      fn_82D04B90(param_4,0xffffffff82132db0,*(unsigned __int64 *)pfVar2);
      return;
    case 0x82e0e9e4:
      fn_82D04B90(param_4,0xffffffff82132db8,*(unsigned __int64 *)pfVar2);
      return;
    case 0x82e0e9f8:
      fn_82D04B90(param_4,0xffffffff8214b01c,(double)*pfVar2);
      return;
    case 0x82e0ea14:
      fn_82D04B90(param_4,0xffffffff8214b01c,(double)(float)((unsigned int)*(unsigned short *)pfVar2 << 0x10))
      ;
      goto switchD_82e0e870_caseD_82e0eba8;
    case 0x82e0ea3c:
      fn_82D04B90(param_4,0xffffffff8214b004,(double)*pfVar2,
                        (double)*(float *)(param_1 + 0x14),(double)*(float *)(param_1 + 0x18),
                        (double)*(float *)(param_1 + 0x1c));
      return;
    case 0x82e0ea7c:
      fn_82D04B90(param_4,0xffffffff8214afc4,(double)*pfVar2,
                        (double)*(float *)(param_1 + 0x14),(double)*(float *)(param_1 + 0x18),
                        (double)*(float *)(param_1 + 0x1c),(double)*(float *)(param_1 + 0x20),
                        (double)*(float *)(param_1 + 0x24));
      return;
    case 0x82e0eb04:
      fn_82D04B90(param_4,0xffffffff8214af70,(double)*pfVar2,
                        (double)*(float *)(param_1 + 0x14),(double)*(float *)(param_1 + 0x18),
                        (double)*(float *)(param_1 + 0x1c),(double)*(float *)(param_1 + 0x20),
                        (double)*(float *)(param_1 + 0x24));
      return;
    case 0x82e0eba8:
      goto switchD_82e0e870_caseD_82e0eba8;
    }
  }
switchD_82e0e870_caseD_82e0eba8:
  return;
}

