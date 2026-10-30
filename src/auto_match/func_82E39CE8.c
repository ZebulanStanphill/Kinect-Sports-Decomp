void *memcpy(void *d, const void *s, unsigned int n);

int fn_82E39CE8(const void *src, unsigned char **pos, unsigned int n, unsigned int limit)
{
    int hr = 0;
    if (limit != 0 && (unsigned int)(*pos + n) > limit) {
        hr = 0x8000ffff;
    } else {
        memcpy(*pos, src, n);
        *pos += n;
    }
    return hr;
}
