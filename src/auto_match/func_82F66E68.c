extern int fn_82F66D18(unsigned short *buffer, unsigned int size, unsigned int count, const unsigned short *format, void *locale, char *args);

int fn_82F66E68(unsigned short *buffer, unsigned int size, unsigned int count, const unsigned short *format, char *args)
{
    return fn_82F66D18(buffer, size, count, format, 0, args);
}
