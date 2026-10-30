extern const unsigned short *fn_82F70480(void);
int tolower(int c);

int fn_82F62FD0(int c)
{
    return (fn_82F70480()[c] & 1) ? tolower(c) : c;
}
