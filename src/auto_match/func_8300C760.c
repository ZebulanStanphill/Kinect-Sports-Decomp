typedef unsigned int uint;
extern uint *fn_8300C6B0(void *);

static uint *find(uint **self, uint key)
{
    uint *p = *self;
    while (p) {
        if (p[1] == key)
            return p + 2;
        p = (uint *)p[0];
    }
    return 0;
}

uint *fn_8300C760(uint **self, uint key)
{
    uint *found = find(self, key);
    if (!found) {
        uint *p = fn_8300C6B0(self);
        if (p) {
            uint *result = p + 1;
            result[-1] = key;
            return result;
        }
    }
    return found;
}
