typedef struct N { char pad[0x14]; int next; } N;
extern unsigned char fn_83007620(N *n, int a, int b);

int fn_83008F08(N *n, int a, int b)
{
    while (!fn_83007620(n, a, b)) {
        int next = n->next;
        if (next == 0)
            return 0;
        n = (N *)next;
    }
    return 1;
}
