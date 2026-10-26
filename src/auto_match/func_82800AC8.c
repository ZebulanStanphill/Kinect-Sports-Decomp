typedef struct S82800AC8 {
    char pad[0x16];
    short value;
} S82800AC8;

int fn_82800AC8(S82800AC8 *p)
{
    return p->value;
}
