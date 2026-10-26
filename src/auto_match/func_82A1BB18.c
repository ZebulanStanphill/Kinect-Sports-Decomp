unsigned long __gregister_get(unsigned int reg);

typedef struct {
    char pad[0x14c];
    int value;
} Thread;

int fn_82A1BB18(void)
{
    Thread *t = *(Thread **)(__gregister_get(13) + 0x100);
    return t->value;
}
