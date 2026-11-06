typedef struct Lock_82A47730 {
    int *vt;
} Lock_82A47730;
typedef struct Dev_82A47730 {
    int *vt;
    int pad04;
    int flag;
} Dev_82A47730;

int fn_82A47730(int param_1)
{
    int r;
    int *lock = (int *)(*(int *)(param_1 + 0x34) + 0x2c);
    (*(void (**)(int *))(*lock + 8))(lock);
    {
        int *dev = *(int **)(param_1 + 0x90);
        r = (*(int (**)(int *, int))(*dev + 0x34))(dev, ((*(int *)(param_1 + 8) ? -1 : 0) & 0x400) + 0x400);
    }
    lock = (int *)(*(int *)(param_1 + 0x34) + 0x2c);
    (*(void (**)(int *))(*lock + 0x14))(lock);
    return r;
}
