extern int memcmp(const void *a, const void *b, unsigned int n);

unsigned char fn_8266B340(const char *header)
{
    if (header == 0)
        return 0;
    if (memcmp(header, "XLIPFSCP", 8) != 0)
        return 0;
    return 1;
}
