extern int fn_82A1E6A0();
extern int fn_82A1EF78();
extern int fn_82FEC008();
extern int fn_82FF8FB0();
extern void fn_83037768(void);
extern char lbl_832643B4[];
extern unsigned int lbl_83264EC8;


char fn_83037858(int *param_1)

{
  int iVar1;
  unsigned *piVar2; unsigned *handles=(unsigned *)(param_1+1);
  int iVar3;
  
  iVar1 = fn_82A1EF78(0x20);
  param_1[1] = iVar1;
  piVar2 = (unsigned *)fn_82FEC008();
  param_1[2] = *piVar2;
  iVar1 = fn_82A1E6A0(0,0,0,0);
  iVar3 = 0;
  param_1[3] = iVar1;
  *(unsigned char *)(param_1 + 4) = 0;
  piVar2 = handles;
  for(iVar3=0;iVar3<3;iVar3++) {
    if (*piVar2 == 0) {
      return '\x02';
    }

    piVar2++;
  }
  fn_82FF8FB0(fn_83037768,param_1,lbl_832643B4,&lbl_83264EC8,"AK::EventManager");
  return (lbl_83264EC8 == 0) + '\x01';
}

