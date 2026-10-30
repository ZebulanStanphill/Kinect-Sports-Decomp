extern void fn_8284F6F8(void);
typedef struct { void (*fn)(void); int a; int b; } Job;
extern void fn_82859808(Job *j);

void fn_8284F7A8(int a, int b)
{
    Job j;
    j.fn = fn_8284F6F8;
    j.a = a;
    j.b = b;
    fn_82859808(&j);
}
