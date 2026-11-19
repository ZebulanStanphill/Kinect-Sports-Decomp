extern int fclose(void *stream);
int close_backing_store(void *cinfo, char *info)
{
    return fclose(*(void **)(info + 0xc));
}
