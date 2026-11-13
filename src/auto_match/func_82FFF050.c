extern int fn_82FAB9C0();
extern int fn_82FF86A8();
extern int fn_82FF8ED8();
extern int fn_830080D8();
extern int fn_83028F50();
extern int fn_83029740();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern char lbl_8326434C[];

typedef struct Res_82FFF050 Res_82FFF050;
typedef struct { void *s0; void *s1; void (*f8)(Res_82FFF050 *); } ResVt_82FFF050;
struct Res_82FFF050 {
    ResVt_82FFF050 *vt;
    char pad[0x84];
    unsigned int f88;
    unsigned int f8c;
};
typedef struct { char pad[4]; char sub[1]; } Global_82FFF050;
extern Global_82FFF050 *lbl_832642E0;
extern unsigned char fn_83028CE8(Res_82FFF050 *res);

int fn_82FFF050(char *a, char *b, char *c)
{
  int r;
  int *key;
  int k;
  Res_82FFF050 *res;
  Res_82FFF050 **slot;

  a = a + 4;
  r = 1;
  key = (int *)fn_82FF8ED8(a, *(int *)(b + 4));
  if (key == 0) {
    return 2;
  }
  k = *key;
  res = (Res_82FFF050 *)fn_82FAB9C0(lbl_832642E0->sub, k);
  if (res != 0) {
    if (res->f8c != res->f88 || fn_83028CE8(res) == 0) {
      RtlEnterCriticalSection(lbl_8326434C);
      r = fn_83029740(res, key, *(int *)(b + 4), c, 1);
      RtlLeaveCriticalSection(lbl_8326434C);
      if (r != 1) {
        res->vt->f8(res);
      }
    }
  } else {
    RtlEnterCriticalSection(lbl_8326434C);
    res = (Res_82FFF050 *)fn_83028F50(k);
    if (res == 0) {
      r = 2;
    } else {
      r = fn_83029740(res, key, *(int *)(b + 4), c, 0);
      if (r != 1) {
        res->vt->f8(res);
      }
    }
    RtlLeaveCriticalSection(lbl_8326434C);
  }
  if (r == 1) {
    slot = (Res_82FFF050 **)fn_830080D8(c + 0x34);
    if (slot != 0) {
      *slot = res;
    }
  }
  fn_82FF86A8(a);
  return r;
}
