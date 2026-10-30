extern void fn_82230300(void *s, unsigned char built, unsigned int newsize);
extern void fn_822B2888(void *s, unsigned int n);
extern void *fn_8223E0E0(void *s, unsigned int n, unsigned char c);

/* basic_string<char>(const unsigned short *first, const unsigned short *last) */
void *fn_82865C68(void *s, unsigned short *first, unsigned short *last)
{
    fn_82230300(s, 0, 0);
    fn_822B2888(s, last - first);
    for (; first != last; first++) {
        fn_8223E0E0(s, 1, (unsigned char)*first);
    }
    return s;
}
