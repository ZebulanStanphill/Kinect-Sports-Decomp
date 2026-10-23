typedef unsigned int size_t;
extern size_t strlen(const char *s);
extern void fn_82230300(void *p, int a, int b);
extern void fn_82230360(void *p, const char *s, size_t n);

void *fn_82230110(void *param_1, const char *param_2)
{
    fn_82230300(param_1, 0, 0);
    fn_82230360(param_1, param_2, strlen(param_2));
    return param_1;
}
