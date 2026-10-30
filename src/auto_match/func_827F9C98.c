extern int fn_82800080(void *p);
typedef struct { char pad[0x24]; void *a; void *b; void *c; } S;
int fn_827F9C98(S **p)
{
  int n = fn_82800080((*p)->a);
  n += fn_82800080((*p)->b);
  return n + fn_82800080((*p)->c);
}
