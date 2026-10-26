extern unsigned int fn_827F7028(void *p);
extern unsigned int fn_827F7110(void *p);
typedef struct { int a, b; void *p; } S;
unsigned int fn_827F3A60(S *s)
{
return (fn_827F7028(s->p) + fn_827F7110(s->p) + 15) & ~15;
}
