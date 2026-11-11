extern int fn_82F666D0(char *buffer, unsigned int count, const char *format, void *locale, char *args);

int fn_82F66768(char *buffer, unsigned int count, const char *format, char *args)
{
    return fn_82F666D0(buffer, count, format, 0, args);
}
