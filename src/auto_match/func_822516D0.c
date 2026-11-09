void fn_822516D0(int object, long long value)
{
    int first;
    int second;
    int *base = (int *)((char *)object + 0x50);
    int *receiver;

    receiver = (int *)base[6];
    (*(void (**)(int *, long long, int *))(*(int *)receiver + 0x14))(
        receiver, value, &second);
    receiver = (int *)base[8];
    (*(void (**)(int *, long long, int *))(*(int *)receiver + 0x14))(
        receiver, value, &first);

    if (*(int **)(base + 4) != 0) {
        (*(void (**)(int *, int, int))(*(int *)*(int **)(base + 4) + 4))(
            *(int **)(base + 4), second, first);
    }
}
