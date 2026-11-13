typedef struct Data_83057B58 { char pad[0x3c]; float a; float b; int pad44[2]; float d; float c; int pad54[2]; float e; } Data_83057B58;
typedef struct Out_83057B58 { int kind; float v[5]; } Out_83057B58;
void fn_83057B58(Data_83057B58 *d, Out_83057B58 *out)
{
  float *p = out->v;
  out->kind = 2;
  *p++ = d->a;
  *p++ = d->b * 3.98107171f;
  *p++ = d->c * 3.98107171f;
  *p++ = d->d;
  *p = d->e;
}
