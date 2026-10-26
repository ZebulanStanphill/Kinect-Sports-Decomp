typedef struct { char pad[0x10]; int x; char pad2[0x2c]; } E;
typedef struct { char pad[0xd8]; int list; } S;
extern void fn_82819288(void);
extern void fn_82822F60(int *list, int *item, void (*cb)(void), int z);

void fn_82819370(S *s, E *items, short idx)
{
    fn_82822F60(&s->list, &items[idx].x, fn_82819288, 0);
}
