typedef struct { int pad0[2]; void (*assert_fn)(const char *, const char *, int); } Fns_8251DB70;
typedef struct { int pad0[1]; int pad1; int cur; } G_8251DB70;
typedef struct { int pad0[5]; int ent[4]; int count; } Stack_8251DB70;
typedef struct { int pad[1]; Stack_8251DB70 *stk; } H_8251DB70;
extern Fns_8251DB70 lbl_83276774;
extern struct { int pad0; int f4; int f8; char pad[0xe0]; H_8251DB70 *fec; } lbl_832960A0;
extern H_8251DB70 *lbl_8329618C;

void fn_8251DB70(void)
{
  Stack_8251DB70 *s;
  int n;
  if (lbl_83276774.assert_fn != 0) {
    lbl_83276774.assert_fn("meTickClosingTransition", "D:\\Work\\R1SDK\\Olympus_testing\\red\\Ghoulies\\game\\app\\app_scene.cpp", 0xcb2);
  }
  if (lbl_832960A0.fec != 0) s = lbl_832960A0.fec->stk;
  else s = 0;
  n = s->count;
  if (n <= 0 || s->ent[n - 1] != lbl_832960A0.f8) {
    s->ent[n] = lbl_832960A0.f8;
    s->count = s->count + 1;
  }
  lbl_832960A0.f4 = 0;
}
