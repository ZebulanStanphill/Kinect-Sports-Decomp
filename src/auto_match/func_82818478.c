unsigned short fn_82818478(const unsigned short *s)
{
    unsigned int h = 0;
    unsigned short c;
    while ((c = *s++) != 0)
        h = h * 33 + c;
    return (unsigned short)h;
}
