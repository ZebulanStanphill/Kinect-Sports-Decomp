typedef struct Event_82D909F0 {
    unsigned char type;
    int a;
    int b;
    int pad[2];
} Event_82D909F0;

extern int fn_82D80C48(int self, Event_82D909F0 *ev);
extern int fn_82D8FC48(int self, int a, int b);

void fn_82D909F0(int param_1, int param_2, int param_3)
{
    Event_82D909F0 ev;
    int a = *(int *)(param_2 + 0xcc);
    int b = *(int *)(param_3 + 0xcc);

    if (*(int *)(param_1 + 0x94) != 0) {
        ev.type = 0xc;
        ev.a = param_2;
        ev.b = param_3;
        fn_82D80C48(param_1, &ev);
        return;
    }
    fn_82D8FC48(param_1, a, b);
}
