unsigned short fn_828184F0(const char *text, unsigned int length)
{
    unsigned int hash = 0;
    unsigned int i;

    for (i = 0; i < length; i++)
        hash = hash * 33 + *text;
    return (unsigned short)hash;
}
