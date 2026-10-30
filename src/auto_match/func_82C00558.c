typedef struct S { char pad[0x38]; int a, b, c, d, e, f; float g; } S;
extern void fn_82C065A0(S *s);
void fn_82C00558(S *s)
{
fn_82C065A0(s);
s->a = 0;
s->b = 0;
s->c = 0;
s->g = 0.0f;
s->d = 0;
s->e = 0;
s->f = 0;
}