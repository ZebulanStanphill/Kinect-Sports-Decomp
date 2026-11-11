extern int fn_82F66778(char *buffer, unsigned int size, unsigned int count, const char *format, void *locale, char *args);

int fn_82F668C8(char *buffer, unsigned int size, unsigned int count, const char *format, char *args)
{
    return fn_82F66778(buffer, size, count, format, 0, args);
}
