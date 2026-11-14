typedef struct Value_82713048 {
    unsigned char type;
    char pad1[7];
    double value;
} Value_82713048;

typedef struct Src_82713048 {
    char pad[0x30];
    double value;
} Src_82713048;

void fn_82713048(Value_82713048 *out, Src_82713048 *src)
{
    out->value = src->value;
    out->type = 3;
}
