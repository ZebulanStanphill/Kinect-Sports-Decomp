typedef struct { unsigned char v; char pad[7]; } E;
typedef struct { char pad[0x554]; unsigned char base; char pad2[0x868 - 0x555]; unsigned int n; char pad3[0x2630 - 0x86c]; E e[1]; } S;
void fn_82A3B668(S *s)
{
    unsigned int i;
    for (i = s->base + 0x12; i < s->n; i++)
        s->e[i].v = 100;
}
