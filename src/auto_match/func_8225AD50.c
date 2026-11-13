extern void *fn_8265C9E0(unsigned);
extern int lbl_821984AC;

typedef struct B_8225AD50 { void *vt; float v; } B_8225AD50;

static B_8225AD50 *Init(B_8225AD50 *p, float *v)
{
  p->vt = &lbl_821984AC;
  p->v = *v;
  return p;
}

B_8225AD50 **fn_8225AD50(B_8225AD50 **param_1, float *param_2)
{
  B_8225AD50 *mem = (B_8225AD50 *)fn_8265C9E0(8);
  B_8225AD50 *p = mem ? Init(mem, param_2) : 0;
  *param_1 = p;
  return param_1;
}
