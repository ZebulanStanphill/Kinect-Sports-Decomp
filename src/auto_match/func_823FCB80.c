typedef struct Pair_823FCB80 { int first; unsigned second; } Pair_823FCB80;
typedef struct Self_823FCB80 { void *vt; int f4; int f8; char body[1]; } Self_823FCB80;
extern char lbl_821AD588[];
extern unsigned char fn_8223AAC0(unsigned);
extern void *fn_82365BD8(void *, void *);
extern void fn_823FDDA8();

Self_823FCB80 *fn_823FCB80(Self_823FCB80 *param_1, void *param_2, void *param_3, void *param_4, void *param_5, Pair_823FCB80 *param_6, void *param_7, void *param_8, void *param_9)
{
  struct { Pair_823FCB80 pr; char t9[8], t8[8], t7[8], t5[8], t4[8], t3[8], t2[8]; } L;
  int v;
  unsigned w;

  param_1->f4 = 1;
  param_1->vt = lbl_821AD588;
  param_1->f8 = 1;
  if (param_1->body != 0) {
    w = param_6->second;
    v = param_6->first;
    L.pr.first = 0;
    L.pr.second = 0;
    if (w != 0 && fn_8223AAC0(w) != 0) {
      L.pr.second = w;
      L.pr.first = v;
    }
    fn_823FDDA8(param_1->body,
                fn_82365BD8(L.t2, param_2), fn_82365BD8(L.t3, param_3), fn_82365BD8(L.t4, param_4),
                fn_82365BD8(L.t5, param_5), &L.pr, fn_82365BD8(L.t7, param_7), fn_82365BD8(L.t8, param_8),
                fn_82365BD8(L.t9, param_9));
  }
  return param_1;
}
