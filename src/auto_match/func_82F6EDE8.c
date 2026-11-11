extern int fn_82F6ED00(char *buffer, unsigned int count, const char *format, void *locale, char *args);

int fn_82F6EDE8(char *buffer, unsigned int count, const char *format, char *args)
{
    return fn_82F6ED00(buffer, count, format, 0, args);
}
