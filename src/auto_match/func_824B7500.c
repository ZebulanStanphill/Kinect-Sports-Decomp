typedef struct Pkt_824B7500 { char pad[0x14]; int f14; int f18; int f1c; int f20; int f24; int f28; } Pkt_824B7500;
extern Pkt_824B7500 *fn_8225F160(void);
extern int fn_823AB478(int);
extern void *fn_8245AE18(void);
extern void fn_8245AF50(void *, int);
extern void fn_8245AFC0(void *, int, int);
extern void fn_8245B050(void *, int, int);
extern void fn_8245B100(void *);
extern void fn_8245B168(void *, short *, int);
extern int fn_8245B1F0(void);
extern void fn_824B70F0(void);
extern unsigned char fn_82512508(int);
extern unsigned char fn_828EA5F8(int);
extern unsigned char fn_828EA610(int);

void fn_824B7500(int param_1, int param_2, int param_3, int param_4, int param_5, int param_6,
                 int param_7, int param_8, int s54, int s5c, int s64, int s6c, int s74, int s7c, int s84)
{
  Pkt_824B7500 *iVar1;
  Pkt_824B7500 *pk;
  int uVar5;
  short buf;

  uVar5 = param_3 > 1 ? 4 : param_2;
  pk = fn_8225F160();
  pk->f18 = 2;
  pk->f1c = 0;
  pk->f28 = uVar5;
  pk->f20 = param_4;
  pk->f24 = 0;
  if (fn_828EA610(param_1) == 0) {
    if (fn_828EA5F8(param_1) != 0 && fn_82512508(param_1) != 0) {
      iVar1 = (Pkt_824B7500 *)fn_8245AE18();
      if (fn_8245B1F0() != 0) {
        fn_8245AF50(iVar1, 0x1a);
        if (iVar1->f14 == 0) {
          iVar1->f14 = 1;
        }
        { unsigned char tid = fn_823AB478(param_1); fn_8245B050(iVar1, tid, 4); }
        fn_8245B050(iVar1, (unsigned char)uVar5, 4);
        fn_8245B050(iVar1, (unsigned char)param_3, 4);
        fn_8245B100(iVar1);
        buf = param_6; fn_8245B168(iVar1, &buf, 2);
        buf = param_8; fn_8245B168(iVar1, &buf, 2);
        buf = s7c; fn_8245B168(iVar1, &buf, 2);
        buf = s5c; fn_8245B168(iVar1, &buf, 2);
        buf = s6c; fn_8245B168(iVar1, &buf, 2);
        buf = param_4; fn_8245B168(iVar1, &buf, 2);
        buf = param_7; fn_8245B168(iVar1, &buf, 2);
        buf = s54; fn_8245B168(iVar1, &buf, 2);
        buf = s84; fn_8245B168(iVar1, &buf, 2);
        buf = s64; fn_8245B168(iVar1, &buf, 2);
        buf = s74; fn_8245B168(iVar1, &buf, 2);
        buf = param_5; fn_8245B168(iVar1, &buf, 2);
        fn_824B70F0();
        fn_8245AFC0(iVar1, 0, 0);
      }
    }
  }
}
