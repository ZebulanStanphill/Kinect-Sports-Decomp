extern void fn_8265C990(void *p, unsigned int flags);

void d3dx_zcfree(void *opaque, void *p)
{
    fn_8265C990(p, 0x24810000);
}
