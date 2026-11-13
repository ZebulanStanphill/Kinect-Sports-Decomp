extern void free(void *p);

void fn_82F6E230(void *p)
{
    if (p != 0)
        free(((void **)((unsigned int)p & ~3u))[-1]);
}
