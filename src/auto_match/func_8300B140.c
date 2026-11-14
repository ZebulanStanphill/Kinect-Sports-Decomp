/* r5 (the parameter after the float, which takes r4's slot) is never read. */
typedef struct {
    float time;
    int a;
    int b;
    int c;
} Key_8300B140;

extern Key_8300B140 *fn_8300C538(void *list);

int fn_8300B140(char *self, float time, int unused, int a, int b, int c)
{
    Key_8300B140 *key = fn_8300C538(self + 0x5c);

    if (key != 0) {
        key->time = time;
        key->c = c;
        key->b = b;
        key->a = a;
        return 1;
    }
    return 2;
}
