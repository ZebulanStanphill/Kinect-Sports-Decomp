typedef struct { char pad[0x58]; int a; int b; char rest[0x26d0 - 0x60]; } E;
typedef struct { int idx; int pad[3]; E arr[1]; } P;

void fn_82635A70(P *p, int a, int b)
{
  E *e = &p->arr[p->idx];
  e->a = a;
  e->b = b;
}
