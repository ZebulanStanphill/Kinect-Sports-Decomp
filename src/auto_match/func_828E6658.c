extern void fn_828E6358(void *);
typedef struct Buf_828E6658 { unsigned __int64 v[3]; } Buf_828E6658;
typedef struct Fn_828E6658 {
  unsigned int vt;
  unsigned int pad;
  Buf_828E6658 buf;
} Fn_828E6658;
typedef void (*Mgr_828E6658)(void *, void *, int);

void fn_828E6658(Fn_828E6658 *param_1, Fn_828E6658 *param_2)
{
  unsigned int vt;
  if (param_2 != param_1) {
    vt = param_2->vt;
    if (vt != 0) {
      param_1->vt = vt;
      if ((vt & 1) != 0) {
        param_1->buf = param_2->buf;
      } else {
      (*(Mgr_828E6658 *)(vt & 0xfffffffe))(&param_2->buf, &param_1->buf, 1);
      }
      param_2->vt = 0;
      return;
    }
    fn_828E6358(param_1);
  }
}
