typedef struct Elem_82E09C60 {
    char pad[0x24];
    int a;
    int b;
    int c;
} Elem_82E09C60;

void fn_82E09C60(Elem_82E09C60 *e, int n)
{
    int i;
    for (i = 0; i < n; i++) {
        e[i].c = e[i].b;
        e[i].a = e[i].b;
    }
}
