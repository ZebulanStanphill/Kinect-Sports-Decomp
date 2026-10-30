extern const unsigned short *fn_82F70480(void);
int toupper(int c);

int fn_82F630A8(int c)
{
    return (fn_82F70480()[c] & 2) ? toupper(c) : c;
}
