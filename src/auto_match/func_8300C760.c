extern unsigned int *fn_8300C6B0(void *);

static unsigned int *find(unsigned int **self, unsigned int key)
{
    unsigned int *p = *self;
    while (p) {
        if (p[1] == key)
            return p + 2;
        p = (unsigned int *)p[0];
    }
    return 0;
}

unsigned int *fn_8300C760(unsigned int **self, unsigned int key)
{
    unsigned int *found = find(self, key);
    if (!found) {
        unsigned int *p = fn_8300C6B0(self);
        if (p) {
            unsigned int *result = p + 1;
            result[-1] = key;
            return result;
        }
    }
    return found;
}
