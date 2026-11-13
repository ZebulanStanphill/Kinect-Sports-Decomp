extern int fn_82233888();
extern void fn_8289D4C0(void *);
extern void *lbl_82197080[];
extern void *lbl_82197100[];
extern void *lbl_821980D0[];
extern void *lbl_82198128[];
extern void *lbl_821981D0[];

typedef struct { void **vt; int pad[0x14]; } M;

static void M_dtor(M *m, void **vt) { m->vt = vt; fn_8289D4C0(m); }

void fn_82255580(void **param_1)
{
  *param_1 = lbl_82198128;
  M_dtor((M *)(param_1 + 0x13c), lbl_82197100);
  M_dtor((M *)(param_1 + 0x127), lbl_82197100);
  M_dtor((M *)(param_1 + 0x112), lbl_821980D0);
  M_dtor((M *)(param_1 + 0xfb), lbl_82197100);
  M_dtor((M *)(param_1 + 0xe4), lbl_82197100);
  M_dtor((M *)(param_1 + 0xcf), lbl_82197080);
  M_dtor((M *)(param_1 + 0xba), lbl_82197080);
  M_dtor((M *)(param_1 + 0xa5), lbl_82197080);
  M_dtor((M *)(param_1 + 0x90), lbl_82197080);
  M_dtor((M *)(param_1 + 0x7b), lbl_821981D0);
  fn_82233888(param_1);
}
