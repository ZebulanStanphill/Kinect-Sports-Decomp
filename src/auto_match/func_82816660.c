typedef struct { unsigned pad[2]; void *flag; unsigned more[2]; unsigned count; } Queue_82816660;
extern int fn_82816480(Queue_82816660 *, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned, unsigned);
int fn_82816660(Queue_82816660 *p, unsigned a, unsigned b, unsigned c, unsigned d, unsigned n) {
 unsigned flags = 2;
 ++p->count;
 if (p->flag && n <= 1) flags = 0x1002;
 return fn_82816480(p, a, b, c, d, flags, n < 1 ? 1 : n, 0);
}
