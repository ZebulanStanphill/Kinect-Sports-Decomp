typedef union Bytes_82BB9EC0 {
    unsigned int word;
    unsigned char c[4];
} Bytes_82BB9EC0;

Bytes_82BB9EC0 fn_82BB9EC0(Bytes_82BB9EC0 mask, Bytes_82BB9EC0 value)
{
    Bytes_82BB9EC0 result;

    result.word = 0;
    result.c[0] = mask.c[0] ? 0 : value.c[0];
    result.c[1] = mask.c[1] ? 0 : value.c[1];
    result.c[2] = mask.c[2] ? 0 : value.c[2];
    result.c[3] = mask.c[3] ? 0 : value.c[3];
    return result;
}
