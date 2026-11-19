typedef union Bytes_82BB9E50 {
    unsigned int word;
    unsigned char c[4];
} Bytes_82BB9E50;

Bytes_82BB9E50 fn_82BB9E50(Bytes_82BB9E50 value)
{
    Bytes_82BB9E50 result;

    result.word = 0;
    result.c[0] = value.c[0] != 1;
    result.c[1] = value.c[1] != 1;
    result.c[2] = value.c[2] != 1;
    result.c[3] = value.c[3] != 1;
    return result;
}
