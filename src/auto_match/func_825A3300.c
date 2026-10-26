typedef struct {
    char pad[0x18];
    int value;
} Src;

extern int *fn_82CE5410(void);

void fn_825A3300(int a, int b, int c, Src *s)
{
    int value = s->value;
    *fn_82CE5410() = value;
}
