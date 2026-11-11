typedef struct Static_83124FD8 {
    char pad[0x5c];
    int values[3];
} Static_83124FD8;

extern Static_83124FD8 lbl_831D4EC0;

void fn_83124FD8(void)
{
    int i;
    for (i = 0; i < 3; i++)
        lbl_831D4EC0.values[i] = 0;
}
