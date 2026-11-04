typedef struct F_82727520 { unsigned short pad : 4; unsigned short f800 : 1; unsigned short pad2 : 11; } F_82727520;
typedef struct A_82727520 { void *vt; int one; int zero; short h[6]; char pad[8]; } A_82727520;
typedef struct B_82727520 { char b[0x30]; } B_82727520;
extern char lbl_82010C6C[];
extern int fn_8267BF50();
extern void fn_8267C488(void *);
extern void fn_826FDED0(void *, int);
extern void fn_826FDF58(void *);
extern void fn_827266E8(void *, void *, void *);
extern void fn_82726AB8(void *, void *);
extern void *fn_8278B290(void *);
extern void fn_8278BC18(void *);
extern void *fn_8278BD68(void *, void *);
extern void *fn_8278C528(void *, void *, void *);
extern void *fn_8278D3F0(void *, void *, void *);
extern void fn_8278DAD0(void *);
extern void fn_82794C90(void *, void *);
extern void fn_82794D68(void *, void *);
#define INIT_A(x) do { (x).zero = 0; (x).h[0] = 0; (x).vt = lbl_82010C6C; (x).h[1] = 0; (x).h[2] = 0; (x).h[3] = 0; (x).h[4] = 0; (x).h[5] = 0; (x).one = 1; } while (0)
void fn_82727520(char *self)
{
  struct { A_82727520 a1; A_82727520 a2; B_82727520 b1; A_82727520 t2; A_82727520 tA; B_82727520 tB; B_82727520 tB2; } L;
  void *p1c, *p18;
  void *ctx;
  unsigned bit;
  fn_826FDED0(&L.b1, fn_8267BF50());
  INIT_A(L.a1);
  ctx = *(void **)(*(char **)(self + 0xa0) + 8);
  p1c = ((void **)ctx)[7];
  p18 = ((void **)ctx)[6];
  if ((unsigned char)((F_82727520 *)(*(char **)(self + 0x9c) + 0x50))->f800 == 0) {
    fn_827266E8(self, &L.b1, &L.a1);
    if (p1c != 0) {
      fn_82726AB8(&L.b1, fn_8278D3F0(&L.tB, p1c, &L.b1));
      fn_826FDF58(&L.tB);
    }
    if (p18 != 0) {
      fn_8278BD68(&L.a1, fn_8278C528(&L.tA, p18, &L.a1));
      L.tA.vt = lbl_82010C6C;
      fn_8278B290(&L.tA);
      fn_8267C488(&L.tA);
    }
  } else {
    if (p1c != 0) fn_82726AB8(&L.b1, p1c);
    if (p18 != 0) fn_8278BD68(&L.a1, p18);
    fn_826FDED0(&L.tB, fn_8267BF50(self));
    L.a2.vt = lbl_82010C6C; L.a2.one = 1; L.a2.zero = 0; L.a2.h[0] = 0; L.a2.h[1] = 0; L.a2.h[2] = 0; L.a2.h[3] = 0; L.a2.h[4] = 0; L.a2.h[5] = 0;
    fn_8278DAD0(&L.tB);
    fn_8278BC18(&L.a2);
    fn_82726AB8(&L.b1, fn_8278D3F0(&L.tB2, &L.tB, &L.b1));
    fn_826FDF58(&L.tB2);
    fn_8278BD68(&L.a1, fn_8278C528(&L.t2, &L.a2, &L.a1));
    L.t2.vt = lbl_82010C6C;
    fn_8278B290(&L.t2);
    fn_8267C488(&L.t2);
    L.a2.vt = lbl_82010C6C;
    fn_8278B290(&L.a2);
    fn_8267C488(&L.a2);
    fn_826FDF58(&L.tB);
  }
  fn_82794C90(*(void **)(*(char **)(self + 0xa0) + 8), &L.b1);
  fn_82794D68(*(void **)(*(char **)(self + 0xa0) + 8), &L.a1);
  L.a1.vt = lbl_82010C6C;
  fn_8278B290(&L.a1);
  fn_8267C488(&L.a1);
  fn_826FDF58(&L.b1);
}
