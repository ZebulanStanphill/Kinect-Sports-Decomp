extern int fn_82F70110(unsigned short *buffer, unsigned int count, const unsigned short *format, void *locale, char *args);

int fn_82F70238(unsigned short *buffer, unsigned int count, const unsigned short *format, char *args)
{
    return fn_82F70110(buffer, count, format, 0, args);
}
