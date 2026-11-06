extern int fn_82FAB9C0();
extern int fn_82FF86A8();
extern int fn_82FF8ED8();
extern int fn_830080D8();
extern int fn_83021570();
extern int fn_83021668();
extern int fn_83021A08();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern char lbl_8326434C[];

typedef struct Res_82FFAEF8 Res_82FFAEF8;
typedef struct { void *s0; void *s1; void (*f8)(Res_82FFAEF8 *); } ResVt_82FFAEF8;
struct Res_82FFAEF8 { ResVt_82FFAEF8 *vt; };
typedef struct { char pad[0x674]; char sub[1]; } Global_82FFAEF8;
extern Global_82FFAEF8 *lbl_832642E0;

int fn_82FFAEF8(char *a, char *b, char *c)
{
  int r;
  int *key;
  int k;
  Res_82FFAEF8 *res;
  Res_82FFAEF8 **slot;

  a = a + 4;
  r = 1;
  key = (int *)fn_82FF8ED8(a, *(int *)(b + 4));
  if (key == 0) {
    return 2;
  }
  k = *key;
  res = (Res_82FFAEF8 *)fn_82FAB9C0(lbl_832642E0->sub, k);
  if (res == 0) {
    res = (Res_82FFAEF8 *)fn_83021570(k);
    if (res == 0) {
      r = 2;
      goto done;
    }
    RtlEnterCriticalSection(lbl_8326434C);
    r = fn_83021A08(res, key, *(int *)(b + 4));
    if (r != 1) {
      res->vt->f8(res);
    } else {
      fn_83021668(res);
    }
    RtlLeaveCriticalSection(lbl_8326434C);
    if (r != 1) {
      goto done;
    }
  }
  slot = (Res_82FFAEF8 **)fn_830080D8(c + 0x34);
  if (slot != 0) {
    *slot = res;
  }
done:
  fn_82FF86A8(a);
  return r;
}
