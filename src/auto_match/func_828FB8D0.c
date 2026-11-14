typedef struct Parser_828FB8D0 {
    const char *start;
    const char *end;
} Parser_828FB8D0;

extern unsigned int fn_828FB358(Parser_828FB8D0 *self, const char *p);

unsigned int fn_828FB8D0(Parser_828FB8D0 *self, const char *p)
{
    if (p < self->end && *p == '\'') {
        const char *q = p + 1;
        unsigned int n = fn_828FB358(self, q);
        if (n != 0) {
            const char *e = n + q;
            if (e < self->end && *e == '\'')
                return e - p + 1;
        }
    }
    return 0;
}
