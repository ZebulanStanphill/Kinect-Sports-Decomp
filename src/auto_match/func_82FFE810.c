extern int fn_82FAB9C0();
extern int fn_82FF86A8();
extern int fn_82FF8ED8();
extern int fn_830080D8();
extern int fn_8302C0F0();
extern int fn_8302C2A0();
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern char lbl_8326434C[];

typedef struct Res_82FFE810 Res_82FFE810;
typedef struct { void *s0; void *s1; void (*f8)(Res_82FFE810 *); } ResVt_82FFE810;
struct Res_82FFE810 {
    ResVt_82FFE810 *vt;
    char pad[0x98];
    unsigned int f9c_hi : 2;
    unsigned int kind : 5;
    unsigned int ready : 1;
    unsigned int f9c_lo : 24;
};
typedef struct { char pad[4]; char sub[1]; } Global_82FFE810;
extern Global_82FFE810 *lbl_832642E0;

int fn_82FFE810(char *a, char *b, char *c)
{
  int r;
  int *key;
  int k;
  Res_82FFE810 *res;
  Res_82FFE810 **slot;

  a = a + 4;
  r = 1;
  key = (int *)fn_82FF8ED8(a, *(int *)(b + 4));
  if (key == 0) {
    return 2;
  }
  k = *key;
  res = (Res_82FFE810 *)fn_82FAB9C0(lbl_832642E0->sub, k);
  if (res != 0) {
    if (res->kind == 0 || (unsigned char)res->ready == 0) {
      RtlEnterCriticalSection(lbl_8326434C);
      r = fn_8302C2A0(res, key, *(int *)(b + 4), c, 1);
      RtlLeaveCriticalSection(lbl_8326434C);
      if (r != 1) {
        res->vt->f8(res);
      }
    }
  } else {
    RtlEnterCriticalSection(lbl_8326434C);
    res = (Res_82FFE810 *)fn_8302C0F0(k);
    if (res == 0) {
      r = 2;
    } else {
      r = fn_8302C2A0(res, key, *(int *)(b + 4), c, 0);
      if (r != 1) {
        res->vt->f8(res);
      }
    }
    RtlLeaveCriticalSection(lbl_8326434C);
  }
  if (r == 1) {
    slot = (Res_82FFE810 **)fn_830080D8(c + 0x34);
    if (slot != 0) {
      *slot = res;
    }
  }
  fn_82FF86A8(a);
  return r;
}
