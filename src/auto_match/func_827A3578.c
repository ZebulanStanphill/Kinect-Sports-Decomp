typedef unsigned char bool;
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827A1508();
extern int fn_827A8738();

typedef struct Hdr_827A3578 { unsigned flag : 1; unsigned rest : 31; int pad; unsigned val; } Hdr_827A3578;

unsigned int fn_827A3578(int param_1,int param_2,unsigned int *param_3)
{
  bool bVar1;
  unsigned int uVar3;
  Hdr_827A3578 *piVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar2;
  unsigned int t;
  unsigned int fl;
  struct { unsigned int first; unsigned int second; unsigned int rest[24]; } it;

  uVar3 = fn_827A1508(*(unsigned int *)(param_1 + 8));
  if ((int)uVar3 != -1) {
    piVar4 = (Hdr_827A3578 *)fn_827A8738(*(unsigned int *)(param_1 + 8) + 0x24,uVar3);
    if (piVar4 != 0) {

  if ((unsigned char)piVar4->flag) { t = piVar4->val & 0xffffff; if (t == 0xffffff) t = 0xffffffff; } else t = piVar4->val;
  uVar5 = t;
  uVar7 = param_2 - t;
  fn_82756F70(&it.first,piVar4);
  uVar6 = 0;
  while( 1 ) {
    bVar1 = (it.first == 0) || (it.first >= it.second);
    if (((bVar1) || ((*(unsigned short *)(it.first + 4) & 0xf000) != 0)) ||
       ((*(unsigned char *)(it.first + 6) & 1) != 0)) break;
    fn_827555D8(&it.first);
  }
  uVar9 = 0;
  uVar8 = 0;
  do {
    uVar5 = uVar9 + uVar5;
    bVar1 = (it.first == 0) || (it.first >= it.second);
    if (bVar1) break;
    uVar9 = (unsigned int)(*(unsigned short *)(it.first + 4) >> 0xc);
    uVar6 = it.first;
    uVar8 = uVar8 + uVar9;
    fn_827555D8(&it.first);
  } while (uVar8 <= uVar7);
  if (param_3 != (unsigned int *)0x0) {
    *param_3 = uVar5;
  }
  fn_82756488(&it.first);
  return uVar6;
    }
  }
  return 0;
}
