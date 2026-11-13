extern unsigned char fn_8261A518(void *, float);
typedef struct N { void *a; struct N *next; } N;
typedef struct { int pad[2]; N *head; float f; int pad2[2]; unsigned char flag; } S;
void fn_825C6B00(S *p, float x)
{
  float old = p->f;
  N *n = p->head;
  if (x != old) {
    float d;
    p->f = x;
    d = x - old;
    p->flag = 0;
    for (; n != 0; n = n->next) {
      p->flag = fn_8261A518(n->a, d) | p->flag;
    }
  }
}
