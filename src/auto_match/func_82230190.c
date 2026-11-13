void fn_82230190(char *ptr, unsigned int size, int count, void (*ctor)(void *))
{
    while (--count >= 0) {
        ctor(ptr);
        ptr += size;
    }
}
