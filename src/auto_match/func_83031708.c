typedef unsigned int uint;
extern uint *fn_83031668(void *);

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

uint *fn_83031708(uint **self, uint key)
{
    uint *found = find(self, key);
    if (!found) {
        uint *p = fn_83031668(self);
        if (p) {
            uint *result = p + 1;
            result[-1] = key;
            return result;
        }
    }
    return found;
}
