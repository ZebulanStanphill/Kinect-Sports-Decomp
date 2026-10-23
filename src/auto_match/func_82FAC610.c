extern int fn_82FA8588();
extern int fn_82FB3578();

typedef struct Pair {
    unsigned int first;
    int second;
} Pair;

void fn_82FAC610(int param_1, int param_2, int param_3)
{
    Pair pr;

    while (fn_82FB3578(param_1 + 0x38, param_3, &pr) == 0x2d) {
        fn_82FA8588(pr.second, (pr.first - *(unsigned int *)(param_1 + 0x5c)) + param_2);
    }
}
