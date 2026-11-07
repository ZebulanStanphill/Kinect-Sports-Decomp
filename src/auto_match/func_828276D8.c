typedef unsigned int size_t;
char *strncpy(char *dst, const char *src, size_t n);

void fn_828276D8(char *self, const char *name)
{
    if (name != 0) {
        strncpy(self + 0x1b8, name, 0x100);
        self[0x2b7] = 0;
    } else {
        self[0x1b8] = 0;
    }
}
