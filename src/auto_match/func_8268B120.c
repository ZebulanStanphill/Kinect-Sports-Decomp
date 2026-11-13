extern void fn_8268B0C0(unsigned int *p, unsigned int n);
extern void fn_826BD398(void *buf, unsigned int *len, void *src);
void *memcpy(void *dst, const void *src, unsigned int n);

void fn_8268B120(unsigned int *param_1, void *param_2)
{
    unsigned int off;
    unsigned int len;
    char buf[10];

    off = param_1[1];
    len = 0;
    fn_826BD398(buf, &len, param_2);
    fn_8268B0C0(param_1, len + off);
    memcpy((char *)*param_1 + off, buf, len);
}
