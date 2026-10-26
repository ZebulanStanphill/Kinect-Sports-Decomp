typedef struct { char pad[0xe]; unsigned short n; } E;
typedef struct { char pad[0x10]; E **begin; E **end; } S;
unsigned int fn_82FB7948(S *s)
{
    unsigned int sum = 0;
    E **it;
    for (it = s->begin; it != s->end; it++)
        sum += (*it)->n;
    return sum;
}
