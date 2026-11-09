typedef int (*Method_8304C618)(int *);
int fn_8304C618(int p)
{
    if (*(unsigned int *)(p + 0x10) == 0) return 2;
    return (*(Method_8304C618 *)(**(int **)(p + 0x10) + 8))(*(int **)(p + 0x10));
}
