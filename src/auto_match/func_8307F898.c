extern int fn_82D04B90(char **buf, const char *fmt, ...);

char *fn_8307F898(float *v, char **buf, char sep)
{
    fn_82D04B90(buf, "%f%c%f%c%f%c%f", v[0], sep, v[1], sep, v[2], sep, v[3]);
    return *buf;
}
