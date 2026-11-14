/* destroy count elements of size bytes, last first */
void fn_822301D0(char *base, unsigned int size, int count, void (*destroy)(void *))
{
    base += size * count;
    while (--count >= 0) {
        base -= size;
        destroy(base);
    }
}
