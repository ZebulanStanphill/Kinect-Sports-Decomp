extern int fn_82F67988(void *stream);
int close_backing_store(void *cinfo, char *info)
{
    return fn_82F67988(*(void **)(info + 0xc));
}
