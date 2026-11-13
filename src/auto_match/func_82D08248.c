typedef struct { float a, b, c, v; } E_82D08248;
typedef struct { E_82D08248 *data; int n; } V_82D08248;
void fn_82D08248(V_82D08248 *s, float d)
{
  int i = 0;
  if (s->n <= 0) return;
  do {
    float *p = &s->data[i].v;
    *p = *p - d;
    i++;
  } while (i < s->n);
}
