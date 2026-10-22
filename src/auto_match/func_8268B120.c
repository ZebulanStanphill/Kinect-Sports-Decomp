typedef unsigned int uint;
extern void fn_8268B0C0(uint *p, uint n);
extern void fn_826BD398(void *buf, uint *len, void *src);
void *memcpy(void *dst, const void *src, unsigned int n);

void fn_8268B120(uint *param_1, void *param_2)
{
    uint off;
    uint len;
    char buf[10];

    off = param_1[1];
    len = 0;
    fn_826BD398(buf, &len, param_2);
    fn_8268B0C0(param_1, len + off);
    memcpy((char *)*param_1 + off, buf, len);
}
