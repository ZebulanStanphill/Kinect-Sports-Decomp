extern void fn_82A3BD80(void *reader, int count);

unsigned int fn_82A3BE50(void *reader, int count)
{
    unsigned int bits = *(unsigned int *)((char *)reader + 0x2eb0) >> (32 - count);
    fn_82A3BD80(reader, count);
    return bits;
}
