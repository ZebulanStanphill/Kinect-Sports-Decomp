extern int fn_82F85880(int *retval, char *dst, unsigned int size, unsigned short wc, void *locale);

int fn_82F85978(int *retval, char *dst, unsigned int size, unsigned short wc)
{
    return fn_82F85880(retval, dst, size, wc, 0);
}
