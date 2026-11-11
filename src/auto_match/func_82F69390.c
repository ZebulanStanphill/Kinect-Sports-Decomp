extern void *memmove(void *dst, const void *src, unsigned int count);

void _MoveContext(void *dst, const void *src)
{
    memmove(dst, src, 0xa40);
}
