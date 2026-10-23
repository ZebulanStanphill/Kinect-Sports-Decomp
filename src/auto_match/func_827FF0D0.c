typedef struct {
    char pad[0x1c];
    char a;
    char b;
    char c;
    char d;
    char e;
    char f;
} Flags;

typedef struct {
    char pad[0x30];
    Flags *flags;
} Inner;

int fn_827FF0D0(Inner **param_1)
{
    Flags *fl;
    int n;

    fl = (*param_1)->flags;
    n = (fl->c != 0) + (fl->b != 0) + (fl->a != 0);
    if (fl->d == 0 && fl->e == 0 && fl->f == 0) {
        return n;
    }
    return n + 4;
}
