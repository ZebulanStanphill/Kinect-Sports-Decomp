extern int fn_82F66C70(unsigned short *buffer, unsigned int count, const unsigned short *format, void *locale, char *args);

int fn_82F66D08(unsigned short *buffer, unsigned int count, const unsigned short *format, char *args)
{
    return fn_82F66C70(buffer, count, format, 0, args);
}
