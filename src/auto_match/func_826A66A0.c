extern float fn_826972E0(void *p);
extern void fn_82681898(void *p, double d);

void fn_826A66A0(void *p, int unused, int n)
{
    fn_82681898(p, fn_826972E0(p) - (double)n);
}
